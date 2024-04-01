# 63Eyes cmd graphics library

A simple C++ library to display progress bars in the console.

## Introduction

This library provides a function `progress_bar` to generate progress bars in the console. It's particularly useful when you need to visualize the progress of a task, such as file downloads, data processing, or any other operation that involves a quantifiable progress.

## Installation

To use this library in your C++ project, simply include the `63Eyes.h` header file in your source code.

## Usage

```cpp
#include "progress_bar.h"

int main() {
    // Display a progress bar with 20 cells and 10 cells filled
    progress_bar(20, 10);

    return 0;
}
```
Function Signature

```cpp
void progress_bar(int cells, int progress);
```

Dependencies
This library depends on the windows.h header for Windows systems and uses ANSI escape codes for colored output.

Contributing
Contributions are welcome! If you find any issues or have suggestions for improvements, feel free to open an issue or create a pull request.
