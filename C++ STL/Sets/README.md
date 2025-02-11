# Set Functions in C++

## Overview of Set
A set is an associative container that contains unique elements, sorted by their value. Sets are implemented as balanced binary search trees, which provide efficient insertion, deletion, and lookup operations.

### Key Characteristics of a Set:
- Each key is unique.
- Elements are ordered based on their value.
- Provides efficient access to values based on keys.

## Functions in Set

1. **insert()**
   - **Description**: Adds an element to the set. Duplicate elements are not allowed.
   - **Example**:
     ```cpp
     set<int> s;
     s.insert(10); // Adds 10 to the set
     ```

2. **count()**
   - **Description**: Returns the number of elements with a specific value (0 or 1 for sets).
   - **Example**:
     ```cpp
     cout << s.count(10) << endl; // Outputs 1 if 10 exists, otherwise 0
     ```

3. **size()**
   - **Description**: Returns the number of elements in the set.
   - **Example**:
     ```cpp
     cout << "Size: " << s.size() << endl; // Outputs the size of the set
     ```

4. **empty()**
   - **Description**: Checks if the set is empty.
   - **Example**:
     ```cpp
     cout << "Empty: " << s.empty() << endl; // Outputs 1 (true) if the set is empty, otherwise 0 (false)
     ```

5. **erase()**
   - **Description**: Removes an element from the set.
   - **Example**:
     ```cpp
     s.erase(10); // Removes 10 from the set
     ```

6. **lower_bound()**
   - **Description**: Returns an iterator to the first element that is not less than the specified key.
   - **Example**:
     ```cpp
     cout << "Lower bound: " << *s.lower_bound(13) << endl; // Outputs the first element >= 13
     ```

7. **upper_bound()**
   - **Description**: Returns an iterator to the first element that is greater than the specified key.
   - **Example**:
     ```cpp
     cout << "Upper bound: " << *s.upper_bound(15) << endl; // Outputs the first element > 15
     ```

## Overview of Multi-Set
A multi-set is similar to a set, but it allows multiple values for the same key. This means that you can have several entries with the same key, each associated with a different value.

### Key Characteristics of a Multi-Set:
- Keys are not unique; multiple values can be associated with the same key.
- Elements are ordered based on the key.

## Functions in Multi-Set

1. **insert()**
   - **Description**: Adds an element to the multi-set. Multiple occurrences of the same element are allowed.
   - **Example**:
     ```cpp
     multiset<int> s;
     s.insert(10); // Adds 10 to the multi-set
     s.insert(5);  // Adds 5 to the multi-set
     s.insert(5);  // Adds another 5 to the multi-set
     ```

2. **display()**
   - **Description**: A helper function to display the elements of the multi-set.
   - **Example**:
     ```cpp
     display(s); // Outputs all elements in the multi-set
     ```

## Overview of Unordered Set
An unordered set is an associative container that uses a hash table for storage. It allows for faster access on average compared to a regular set, but the elements are not stored in any particular order.

### Key Characteristics of an Unordered Set:
- Keys are unique.
- Elements are not ordered; access is based on hash values.

## Functions in Unordered Set

1. **insert()**
   - **Description**: Adds an element to the unordered set. Duplicate elements are not allowed.
   - **Example**:
     ```cpp
     unordered_set<int> s;
     s.insert(10); // Adds 10 to the unordered set
     ```

2. **display()**
   - **Description**: A helper function to display the elements of the unordered set.
   - **Example**:
     ```cpp
     display(s); // Outputs all elements in the unordered set
     ```

## Conclusion
Understanding the functions available in the set, multi-set, and unordered set containers is essential for effectively managing collections of unique elements in C++.
