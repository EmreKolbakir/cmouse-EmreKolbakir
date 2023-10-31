#include "main.h"


int main() {
    int fd; 

    // Attempt to open the mouse device file in read-only mode
    fd = open(MOUSEFILE, O_RDONLY);
    if (fd == -1) {
        perror("Error opening mouse input file");
        exit(EXIT_FAILURE);
    }

    // Inform the user that the program is now tracking mouse movements
    printf("Relative mouse position (x, y) since program start:\n\n");

    // Call a function to handle mouse input processing
    processMouseInput(fd);

    // Once done, close the opened file to release resources
    close(fd);
    return 0;
}

// This function reads data from the mouse input file continuously
// and calculates the relative x and y movement of the mouse.
void processMouseInput(int fd) {
    char data[3];    // Buffer to temporarily store data read from the mouse file
    int x = 0, y = 0; // Variables to keep track of total relative movement

    // Loop to continuously read data from the mouse file
    while (read(fd, data, sizeof(data)) > 0) {
        // Decode the movement data from the buffer and update the x and y variables
        x += (signed char)data[1];
        y += (signed char)data[2];

        // Display the updated relative mouse position to the user
        printf("\rX: %5d, Y: %5d", x, y);
        
        // Force the terminal to display the updated position immediately
        fflush(stdout);
    }
}
