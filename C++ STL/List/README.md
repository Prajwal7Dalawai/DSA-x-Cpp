# List Functions in C++

The C++ Standard Library provides a list container that allows for dynamic array-like behavior. Below are the commonly used functions in the list container along with examples.

## Functions

1. **size()**
   - **Description**: Returns the number of elements in the list.
   - **Example**:
     ```cpp
     list<char> lst = {'p', 'r', 'a', 'j', 'w', 'a', 'l'};
     cout << lst.size() << endl; // Outputs the size of the list
     ```

2. **push_back()**
   - **Description**: Adds an element to the end of the list.
   - **Example**:
     ```cpp
     lst.push_back('s'); // Adds 's' to the end of the list
     ```

3. **pop_back()**
   - **Description**: Removes the last element from the list.
   - **Example**:
     ```cpp
     lst.pop_back(); // Removes the last element from the list
     ```

4. **front()**
   - **Description**: Returns a reference to the first element in the list.
   - **Example**:
     ```cpp
     cout << lst.front() << endl; // Outputs the first element of the list
     ```

5. **back()**
   - **Description**: Returns a reference to the last element in the list.
   - **Example**:
     ```cpp
     cout << lst.back() << endl; // Outputs the last element of the list
     ```

6. **erase()**
   - **Description**: Removes the element at the specified position.
   - **Example**:
     ```cpp
     lst.erase(lst.begin()); // Removes the first element from the list
     ```

7. **begin()**
   - **Description**: Returns an iterator to the first element of the list.
   - **Example**:
     ```cpp
     cout << "List begin: " << *(lst.begin()) << endl; // Outputs the first element of the list
     ```

## Conclusion
Understanding the functions available in the list container is essential for effectively managing dynamic collections of elements in C++.
