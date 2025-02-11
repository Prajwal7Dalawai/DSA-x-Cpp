# Stack Functions in C++

The C++ Standard Library provides a stack container that allows for dynamic array-like behavior. Below are the commonly used functions in the stack container along with examples.

## Functions

1. **push()**
   - **Description**: Adds an element to the top of the stack.
   - **Example**:
     ```cpp
     stack<int> s;
     s.push(10); // Adds 10 to the top of the stack
     ```

2. **size()**
   - **Description**: Returns the number of elements in the stack.
   - **Example**:
     ```cpp
     cout << s.size() << endl; // Outputs the size of the stack
     ```

3. **top()**
   - **Description**: Returns a reference to the top element of the stack.
   - **Example**:
     ```cpp
     cout << s.top() << endl; // Outputs the top element of the stack
     ```

4. **pop()**
   - **Description**: Removes the top element from the stack.
   - **Example**:
     ```cpp
     s.pop(); // Removes the top element from the stack
     ```

5. **empty()**
   - **Description**: Checks if the stack is empty.
   - **Example**:
     ```cpp
     cout << s.empty() << endl; // Outputs 1 (true) if the stack is empty, otherwise 0 (false)
     ```

6. **swap()**
   - **Description**: Swaps the contents of two stacks.
   - **Example**:
     ```cpp
     stack<int> s1;
     s1.push(1);
     s1.push(2);
     s1.swap(s1); // Swaps the contents of s1 with itself (no effect)
     ```

## Conclusion
Understanding the functions available in the stack container is essential for effectively managing dynamic collections of elements in C++.
