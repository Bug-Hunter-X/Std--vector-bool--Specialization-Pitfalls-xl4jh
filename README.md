# std::vector<bool> Specialization Gotcha in C++

This example demonstrates a potential issue with `std::vector<bool>`, a specialization of `std::vector` that optimizes memory usage but can lead to unexpected behavior.

The core problem lies in the way `std::vector<bool>` is optimized.  Instead of storing each `bool` as a separate byte, it often packs multiple `bool` values into a single byte, potentially altering the way elements are accessed.  This optimization can cause issues if you're not aware of it. 

**How to reproduce the issue:**

The `bug.cpp` file shows how this can lead to unexpected or incorrect results.

**Solution:**

The `bugSolution.cpp` provides a solution by using `std::vector<char>` (or `std::vector<int>` for better compatibility) to represent booleans.  This avoids the specialization's optimization and ensures predictable behavior.