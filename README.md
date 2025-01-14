# C++ Vector Out-of-Bounds Access Bug
This repository demonstrates a common error in C++: accessing memory outside the bounds of a `std::vector`.  Attempting to access memory outside the allocated space can lead to crashes, unpredictable behavior, or security vulnerabilities.

## The Bug
The `bug.cpp` file contains code that attempts to write to an index beyond the end of a vector. This results in undefined behavior, which can manifest in various ways depending on the system and compiler.

## The Solution
The `bugSolution.cpp` file presents a corrected version. It utilizes `at()` for bounds checking, providing an exception if the index is out of range. Alternatively, checking the index manually before accessing is also a valid approach.

## How to Reproduce
1. Clone this repository.
2. Compile and run `bug.cpp`. Observe the undefined behavior (likely a crash).
3. Compile and run `bugSolution.cpp`.  The corrected version demonstrates safe access with exception handling.