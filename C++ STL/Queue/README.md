# Queue Functions in C++

## Overview of Queue
A queue is a linear data structure that follows the First In First Out (FIFO) principle. This means that the first element added to the queue will be the first one to be removed. Queues are commonly used in scenarios where order needs to be preserved, such as in scheduling tasks, handling requests, or managing resources.

### Key Characteristics of a Queue:
- **Enqueue**: The operation of adding an element to the back of the queue.
- **Dequeue**: The operation of removing an element from the front of the queue.
- **Front**: Accesses the element at the front of the queue without removing it.
- **Size**: Returns the number of elements in the queue.
- **Empty**: Checks whether the queue is empty.

Queues can be implemented using arrays, linked lists, or the C++ Standard Library's `queue` container.

## Functions

1. **push()**
   - **Description**: Adds an element to the back of the queue.
   - **Example**:
     ```cpp
     queue<int> q;
     q.push(10); // Adds 10 to the back of the queue
     ```

2. **size()**
   - **Description**: Returns the number of elements in the queue.
   - **Example**:
     ```cpp
     cout << q.size() << endl; // Outputs the size of the queue
     ```

3. **front()**
   - **Description**: Returns a reference to the front element of the queue.
   - **Example**:
     ```cpp
     cout << q.front() << endl; // Outputs the front element of the queue
     ```

4. **back()**
   - **Description**: Returns a reference to the last element of the queue.
   - **Example**:
     ```cpp
     cout << q.back() << endl; // Outputs the last element of the queue
     ```

5. **pop()**
   - **Description**: Removes the front element from the queue.
   - **Example**:
     ```cpp
     q.pop(); // Removes the front element from the queue
     ```

6. **empty()**
   - **Description**: Checks if the queue is empty.
   - **Example**:
     ```cpp
     cout << q.empty() << endl; // Outputs 1 (true) if the queue is empty, otherwise 0 (false)
     ```

7. **swap()**
   - **Description**: Swaps the contents of two queues.
   - **Example**:
     ```cpp
     queue<int> q1;
     q1.push(1);
     q1.push(2);
     q1.swap(q1); // Swaps the contents of q1 with itself (no effect)
     ```

## Conclusion
Understanding the functions available in the queue container is essential for effectively managing dynamic collections of elements in C++.
