# 63Eyes Library

63Eyes is a lightweight C++ library that provides simple functions for displaying progress bars, simulating typing effects, and showing checkboxes with color-based status indication. This library is useful for adding visual elements to your console applications, making them more interactive and user-friendly.

## Installation

To use the 63Eyes library in your C++ project, simply include the `63Eyes.h` header file in your source code.

```cpp
#include "63Eyes.h"
```

Usage
Displaying Progress Bars
Use the progress_bar function to display a progress bar. It takes two parameters: total_cells and current_progress. Example:

```cpp
progress_bar(10, 8); // Total 10 cells, progress varies from 0 to 10
```

Simulating Typing Effects
Use the typewrite function to simulate typing text with a specified delay. It takes two parameters: message (the text to be typed) and delay_ms (delay in milliseconds between each character). Example:


```cpp
typewrite("This text has 111 ms delay", 111);
```

Displaying Checkboxes
Use the checkbox function to display a checkbox with color based on status. It takes a boolean parameter status, where true indicates success (green checkbox) and false indicates failure (red checkbox). Example:

```cpp
checkbox(true); // Task completed successfully
checkbox(false); // Task failed
```

```cpp
#include "63Eyes.h"

int main() 
{
    typewrite("Hello, welcome to the library demonstration!");

    // Display a progress bar
    cout << "Progress:" << endl;
    progress_bar(10, 8); // Total 10 cells, progress varies from 0 to 10

    cout << endl;

    // Simulate typing effect
    typewrite("This text has 111 ms delay", 111);

    cout << endl;

    // Display checkboxes for status indication
    cout << "Status:" << endl;
    cout << "Task 1: ";
    checkbox(true); // Task 1 completed successfully
    cout << endl;

    cout << "Task 2: ";
    checkbox(false); // Task 2 failed
    cout << endl;

    return 0;
}

```
