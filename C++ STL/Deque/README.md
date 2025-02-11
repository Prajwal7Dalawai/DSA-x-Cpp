# Deque Functions in C++

The C++ Standard Library provides a deque (double-ended queue) container that allows for dynamic array-like behavior. Below are the commonly used functions in the deque container along with examples.

## Functions

1. **push_back()**
   - **Description**: Adds an element to the end of the deque.
   - **Example**:
     ```cpp
     deque<int> d;
     d.push_back(1); // Adds 1 to the end of the deque
     ```

2. **size()**
   - **Description**: Returns the number of elements in the deque.
   - **Example**:
     ```cpp
     cout << "Deque size: " << d.size() << endl; // Outputs the size of the deque
     ```

3. **front()**
   - **Description**: Returns a reference to the first element in the deque.
   - **Example**:
     ```cpp
     cout << "Deque front element: " << d.front() << endl; // Outputs the first element of the deque
     ```

4. **back()**
   - **Description**: Returns a reference to the last element in the deque.
   - **Example**:
     ```cpp
     cout << "Deque back element: " << d.back() << endl; // Outputs the last element of the deque
     ```

5. **pop_front()**
   - **Description**: Removes the first element from the deque.
   - **Example**:
     ```cpp
     d.pop_front(); // Removes the first element from the deque
     ```

6. **pop_back()**
   - **Description**: Removes the last element from the deque.
   - **Example**:
     ```cpp
     d.pop_back(); // Removes the last element from the deque
     ```

7. **push_front()**
   - **Description**: Adds an element to the front of the deque.
   - **Example**:
     ```cpp
     d.push_front(0); // Adds 0 to the front of the deque
     ```

8. **insert()**
   - **Description**: Inserts an element at the specified position.
   - **Example**:
     ```cpp
     d.insert(d.begin() + 2, 10); // Inserts 10 at the third position
     ```

9. **erase()**
   - **Description**: Removes the element at the specified position.
   - **Example**:
     ```cpp
     d.erase(d.begin() + 3); // Removes the element at the fourth position
     ```

10. **clear()**
    - **Description**: Removes all elements from the deque.
    - **Example**:
      ```cpp
      d.clear(); // Clears all elements from the deque
      ```

11. **empty()**
    - **Description**: Checks if the deque is empty.
    - **Example**:
      ```cpp
      cout << "Deque empty or not: " << (d.empty() ? "Yes" : "No") << endl; // Checks if the deque is empty
      ```

## Conclusion
Understanding the functions available in the deque container is essential for effectively managing dynamic collections of elements in C++.
