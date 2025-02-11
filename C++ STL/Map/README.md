# Map Functions in C++

## Overview of Map
A map is an associative container that stores elements in key-value pairs. Each key is unique, and it is used to access the corresponding value. Maps are implemented as balanced binary search trees, which provide efficient insertion, deletion, and lookup operations.

### Key Characteristics of a Map:
- Each key is unique.
- Elements are ordered based on the key.
- Provides efficient access to values based on keys.

## Functions in Map

1. **operator[]**
   - **Description**: Accesses the value associated with a key, creating a new entry if the key does not exist.
   - **Example**:
     ```cpp
     map<string, int> m;
     m["TV"] = 2000; // Adds a key-value pair for "TV"
     ```

2. **emplace()**
   - **Description**: Constructs and inserts a new element in-place.
   - **Example**:
     ```cpp
     m.emplace("Tablet", 5000); // Adds a key-value pair for "Tablet"
     ```

3. **insert()**
   - **Description**: Inserts a new element into the map.
   - **Example**:
     ```cpp
     m.insert({"Tablet", 5000}); // Adds a key-value pair for "Tablet"
     ```

4. **size()**
   - **Description**: Returns the number of elements in the map.
   - **Example**:
     ```cpp
     cout << m.size() << endl; // Outputs the size of the map
     ```

5. **count()**
   - **Description**: Returns the number of elements with a specific key (0 or 1 for maps).
   - **Example**:
     ```cpp
     cout << m.count("TV") << endl; // Outputs 1 if "TV" exists, otherwise 0
     ```

6. **find()**
   - **Description**: Searches for an element with a specific key and returns an iterator to it.
   - **Example**:
     ```cpp
     if (m.find("Mobile") != m.end()) {
         cout << "Found" << endl; // Outputs "Found" if "Mobile" exists
     }
     ```

7. **erase()**
   - **Description**: Removes an element from the map based on the key.
   - **Example**:
     ```cpp
     m.erase("Tablet"); // Removes the key-value pair for "Tablet"
     ```

## Overview of Multi-Map
A multi-map is similar to a map, but it allows multiple values for the same key. This means that you can have several entries with the same key, each associated with a different value.

### Key Characteristics of a Multi-Map:
- Keys are not unique; multiple values can be associated with the same key.
- Elements are ordered based on the key.

## Functions in Multi-Map

1. **emplace()**
   - **Description**: Constructs and inserts a new element in-place.
   - **Example**:
     ```cpp
     multimap<string, int> m;
     m.emplace("Tablet", 5000); // Adds a key-value pair for "Tablet"
     ```

2. **erase()**
   - **Description**: Removes an element from the multi-map based on an iterator or key.
   - **Example**:
     ```cpp
     m.erase(m.find("Tablet")); // Removes one occurrence of "Tablet"
     ```

## Overview of Unordered Map
An unordered map is an associative container that uses a hash table for storage. It allows for faster access on average compared to a regular map, but the elements are not stored in any particular order.

### Key Characteristics of an Unordered Map:
- Keys are unique.
- Elements are not ordered; access is based on hash values.

## Functions in Unordered Map

1. **operator[]**
   - **Description**: Accesses the value associated with a key, creating a new entry if the key does not exist.
   - **Example**:
     ```cpp
     unordered_map<string, int> m;
     m["TV"] = 2000; // Adds a key-value pair for "TV"
     ```

2. **emplace()**
   - **Description**: Constructs and inserts a new element in-place.
   - **Example**:
     ```cpp
     m.emplace("Tablet", 5000); // Adds a key-value pair for "Tablet"
     ```

3. **insert()**
   - **Description**: Inserts a new element into the unordered map.
   - **Example**:
     ```cpp
     m.insert({"Tablet", 5000}); // Adds a key-value pair for "Tablet"
     ```

4. **size()**
   - **Description**: Returns the number of elements in the unordered map.
   - **Example**:
     ```cpp
     cout << m.size() << endl; // Outputs the size of the unordered map
     ```

5. **count()**
   - **Description**: Returns the number of elements with a specific key (0 or 1 for unordered maps).
   - **Example**:
     ```cpp
     cout << m.count("TV") << endl; // Outputs 1 if "TV" exists, otherwise 0
     ```

6. **erase()**
   - **Description**: Removes an element from the unordered map based on the key.
   - **Example**:
     ```cpp
     m.erase("Tablet"); // Removes the key-value pair for "Tablet"
     ```

7. **find()**
   - **Description**: Searches for an element with a specific key and returns an iterator to it.
   - **Example**:
     ```cpp
     m.find("Mobile"); // Searches for "Mobile"
     ```

## Conclusion
Understanding the functions available in the map, multi-map, and unordered map containers is essential for effectively managing key-value pairs in C++.
