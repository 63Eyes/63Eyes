#pragma once

#include <iostream> // For input/output operations
#include <chrono>   // For timing functions
#include <thread>   // For multithreading

#define ANSI_COLOR_GREEN "\x1b[32m"  // Green text color code
#define ANSI_COLOR_RED "\x1b[31m"    // Red text color code
#define ANSI_COLOR_RESET "\x1b[0m"    // Reset text color code

using namespace std;

// Function to display a progress bar
void progress_bar(int total_cells, int current_progress) 
{
    cout << char(91); // Print '[' (left bracket)

    // Fill the progress bar with green for completed sections, reset for others
    for (int i = 0; i < total_cells; ++i) 
    {
        cout << (i < current_progress ? ANSI_COLOR_GREEN : ANSI_COLOR_RESET) << char(254);
    }

    cout << ANSI_COLOR_RESET << char(93) << endl; // Print ']' (right bracket) and newline
}

// Function to simulate typing text with a delay
void typewrite(const string& message, int delay_ms = 33) 
{
    for (char c : message) 
    {
        cout << c;
        this_thread::sleep_for(chrono::milliseconds(delay_ms)); // Pause for delay
    }
    cout << endl;
}

// Function to display a checkbox with color based on status
void checkbox(bool status) 
{
    cout << (status ? ANSI_COLOR_GREEN : ANSI_COLOR_RED) << char(254) << ANSI_COLOR_RESET;
}