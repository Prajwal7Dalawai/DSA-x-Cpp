# Pair Functions in C++

The C++ Standard Library provides a pair container that allows for storing two heterogeneous objects as a single unit. Below are the commonly used functions in the pair container along with examples.

## Functions

1. **Creating a Pair**
   - **Description**: A pair can be created using the `pair` template.
   - **Example**:
     ```cpp
     pair<int, char> p = {1, 'a'};
     cout << "First value: " << p.first << endl; // Outputs: First value: 1
     cout << "Second value: " << p.second << endl; // Outputs: Second value: a
     ```

2. **Nested Pairs**
   - **Description**: Pairs can also be nested.
   - **Example**:
     ```cpp
     pair<int, pair<int, char>> p1 = {1, {2, 'p'}};
     cout << "First value: " << p1.first << endl; // Outputs: First value: 1
     cout << "Second value: " << p1.second.first << endl; // Outputs: Second value: 2
     cout << "Third value: " << p1.second.second << endl; // Outputs: Third value: p
     ```

3. **Vector of Pairs**
   - **Description**: A vector can hold pairs.
   - **Example**:
     ```cpp
     vector<pair<int, int>> v = {{1, 2}, {3, 4}, {5, 6}};
     for (auto i : v)
         cout << "First: " << i.first << " Second: " << i.second << endl;
     ```

4. **Adding Pairs to Vector**
   - **Description**: Pairs can be added to a vector using `push_back` and `emplace_back`.
   - **Example**:
     ```cpp
     v.push_back({7, 8}); // Adds a pair (7, 8) to the vector
     v.emplace_back(9, 10); // Constructs and adds a pair (9, 10) to the vector
     ```

## Difference Between `push_back` and `emplace_back`
- **push_back**: This function adds a copy of the element to the end of the vector. It requires the element to be constructed before being passed to the function.
  - **Example**:
    ```cpp
    v.push_back({7, 8}); // A temporary pair is created and copied into the vector
    ```

- **emplace_back**: This function constructs the element in place at the end of the vector. It forwards the arguments to the constructor of the element type, which can be more efficient.
  - **Example**:
    ```cpp
    v.emplace_back(9, 10); // Constructs the pair (9, 10) directly in the vector
    ```

## Conclusion
Understanding the functions available in the pair container is essential for effectively managing pairs of values in C++.
