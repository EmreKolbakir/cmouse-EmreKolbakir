#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>         // For file control definitions
#include <linux/input.h>   // For input device definitions
#include <unistd.h>        // For UNIX standard functions

#define MOUSEFILE "/dev/input/mouse2"

// Function Prototypes
void processMouseInput(int fd);

#endif // MAIN_H
