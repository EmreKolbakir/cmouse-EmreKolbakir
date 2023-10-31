# 🖱 Mouse Movement Tracker

## 📑 Table of Contents
- [Introduction](#-introduction)
- [Features](#-features)
- [User Manual](#-user-manual)
- [Safety Concerns](#-safety-concerns)

## 🎯 Introduction
The Mouse Movement Tracker is a lightweight C program designed to monitor the relative motion of a mouse on Linux-based systems. It calculates the x and y offsets from a starting point and continuously displays these values in the terminal. This tool can be useful for various applications like testing mouse accuracy, user behavior studies, or just as an educational tool to understand mouse inputs in Linux.

## ⚙️ Features
- **Real-time Tracking**: The program provides instant feedback on mouse movements, updating the display as the mouse moves.
- **Low Overhead**: Written in C, the software has a minimal footprint and runs efficiently on most systems.
- **Terminal-Based**: The tool runs entirely within the terminal, making it portable and easy to use on any Linux system.

## 📘 User Manual
1. **Compilation**:
   Ensure you have `gcc` installed to compile the software.
   Navigate to the root directory of the project using a terminal and compile:
   
   gcc src/main.c -o bin/main

2. **Execution**:
    After compilation, run the program using:

    sudo ./bin/main

## ⚠️ Safety Concerns
- **Root Access**: This software requires root permissions to access the mouse device file. Always exercise caution when running any program as root. Malicious or erroneous operations can lead to system-wide damages.
- **Graceful Termination**: Ensure to handle the program termination gracefully, such as by using Ctrl+C. This ensures that system resources are freed and there are no lingering processes.
- **Unpredictable Results**: Reading directly from system device files can occasionally lead to unexpected results due to system configurations, concurrent operations, or other factors. It's advisable to use this tool in controlled environments, and always ensure you have backups of important data.
