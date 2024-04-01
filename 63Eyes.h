#pragma once

#include <windows.h>
#include <iostream>

#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_RESET   "\x1b[0m"

using namespace std;
void progress_bar(int cells, int progress) 
{
    // Print '['
    std::cout << char(91);

    // Print progress bar
    for (int i = 0; i < cells; ++i) 
    {
        if (i < progress) {
            std::cout << ANSI_COLOR_GREEN << char(254);
        }
        else {
            std::cout << ANSI_COLOR_RESET << char(254);
        }
    }

    // Reset color and print ']'
    std::cout << ANSI_COLOR_RESET << char(93);
}