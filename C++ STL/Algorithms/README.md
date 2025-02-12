# Algorithms in C++

## Overview
This document provides descriptions, parameters, return values, and examples for various algorithms implemented in this folder.

### 1. Binary Search
- **Function**: `binary_search_iterative`
- **Description**: Searches for a target in a sorted array (iterative).
- **Parameters**: 
  - `vector<int> &nums`: The sorted array to search.
  - `int target`: The value to search for.
- **Returns**: The index of the target value if found, otherwise -1.
- **Example**: 
  ```cpp
  vector<int> nums = {1, 2, 3, 4, 5};
  int index = binary_search_iterative(nums, 3); // Returns 2
  ```

- **Function**: `binary_search_optimized`
- **Description**: Optimized binary search to prevent overflow.
- **Parameters**: 
  - `vector<int> &nums`: The sorted array to search.
  - `int target`: The value to search for.
- **Returns**: The index of the target value if found, otherwise -1.
- **Example**: 
  ```cpp
  vector<int> nums = {1, 2, 3, 4, 5};
  int index = binary_search_optimized(nums, 4); // Returns 3
  ```

- **Function**: `binary_search_recursive`
- **Description**: Searches for a target in a sorted array (recursive).
- **Parameters**: 
  - `vector<int> &nums`: The sorted array to search.
  - `int target`: The value to search for.
  - `int start`: The starting index of the search range.
  - `int end`: The ending index of the search range.
- **Returns**: The index of the target value if found, otherwise -1.
- **Example**: 
  ```cpp
  vector<int> nums = {1, 2, 3, 4, 5};
  int index = binary_search_recursive(nums, 5, 0, nums.size()-1); // Returns 4
  ```

### 2. Kadane's Algorithm
- **Function**: `kadane`
- **Description**: Finds the maximum sum of a contiguous subarray.
- **Parameters**: 
  - `vector<int> &arr`: The array of integers to analyze.
- **Returns**: The maximum sum of the contiguous subarray.
- **Example**: 
  ```cpp
  vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  int maxSum = kadane(arr); // Returns 6 (subarray: [4, -1, 2, 1])
  ```

### 3. Moore's Voting Algorithm
- **Function**: `Moore`
- **Description**: Finds the majority element in an array.
- **Parameters**: 
  - `vector<int> &nums`: The array of integers to analyze.
- **Returns**: The majority element if it exists, otherwise it returns the last candidate.
- **Example**: 
  ```cpp
  vector<int> nums = {3, 3, 4, 2, 4, 4, 2, 4, 4};
  int majority = Moore(nums); // Returns 4
  ```

### 4. Next Permutation
- **Function**: `next_permutation`
- **Description**: Generates the next lexicographical permutation of the given string or array.
- **Parameters**: 
  - `s`: A string or array whose next permutation is to be generated.
- **Example**: 
  ```cpp
  string s = "abc";
  next_permutation(s.begin(), s.end()); // s becomes "acb"
  ```

### 5. Reverse
- **Function**: `reverse`
- **Description**: Reverses the order of elements in a given range of a vector or array.
- **Parameters**: 
  - `v.begin(), v.end()`: The range of the vector to be reversed.
- **Example**: 
  ```cpp
  vector<int> v = {1, 2, 3, 4, 5};
  reverse(v.begin(), v.end()); // v becomes {5, 4, 3, 2, 1}
  ```

### 6. Sorting
- **Function**: `comparator`
- **Description**: A custom comparator function used to sort pairs based on their second element.
- **Parameters**: 
  - `pair<int,int> a`: The first pair to compare.
  - `pair<int,int> b`: The second pair to compare.
- **Returns**: A boolean indicating the order of the pairs.
- **Example**: 
  ```cpp
  vector<pair<int,int>> v2 = {{1, 2}, {3, 4}, {1, 3}};
  sort(v2.begin(), v2.end(), comparator); // Sorts using the custom comparator
  ```

### 7. Utility Functions
- **Function**: `swap`
- **Description**: Swaps the values of two variables.
- **Parameters**: 
  - `int &a`: The first variable.
  - `int &b`: The second variable.
- **Example**: 
  ```cpp
  int a = 5, b = 2;
  swap(a, b); // a becomes 2, b becomes 5
  ```

- **Function**: `min_element`
- **Description**: Finds the minimum element in a vector.
- **Parameters**: 
  - `v.begin(), v.end()`: The range of the vector to search.
- **Example**: 
  ```cpp
  vector<int> v = {1, 2, 3, 4, 5};
  cout << "Minimum in vector is: " << *min_element(v.begin(), v.end()); // Outputs 1
  ```

- **Function**: `max_element`
- **Description**: Finds the maximum element in a vector.
- **Parameters**: 
  - `v.begin(), v.end()`: The range of the vector to search.
- **Example**: 
  ```cpp
  cout << "Maximum in vector is: " << *max_element(v.begin(), v.end()); // Outputs 5
  ```

- **Function**: `binary_search`
- **Description**: Checks if a value exists in a sorted vector.
- **Parameters**: 
  - `v.begin(), v.end()`: The range of the vector to search.
  - `3`: The value to search for.
- **Example**: 
  ```cpp
  binary_search(v.begin(), v.end(), 3) ? cout << "3 is present in vector" : cout << "3 is not present in vector"; // Outputs "3 is present in vector"
  ```

- **Function**: `__builtin_popcount`
- **Description**: Returns the number of set bits (1s) in the binary representation of an integer.
- **Parameters**: 
  - `a`: The integer to analyze.
- **Example**: 
  ```cpp
  cout << "__builtin_popcount(a): " << __builtin_popcount(a); // Outputs the number of set bits in 5
