# Sorting Algorithms

Sorting algorithms are fundamental algorithms in computer science that arrange the elements of a list or array in a specific order, typically in ascending or descending order. Understanding these algorithms is crucial for optimizing performance in various applications.

## Bubble Sort
Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The process is repeated until the list is sorted.

**Example:**
- Input: `{5, 3, 8, 4, 2}`
- Output: `{2, 3, 4, 5, 8}`

## Insertion Sort
Insertion Sort builds a sorted array one element at a time. It takes each element from the input and finds the appropriate position in the sorted part of the array, shifting elements as necessary.

**Example:**
- Input: `{5, 3, 8, 4, 2}`
- Output: `{2, 3, 4, 5, 8}`

## Dutch National Flag Algorithm (DNF Sort)
The Dutch National Flag algorithm sorts an array containing only three distinct values (0s, 1s, and 2s). It partitions the array into three sections: 0s, 1s, and 2s, in a single pass.

**Example:**
- Input: `{2, 0, 1, 0, 1, 2}`
- Output: `{0, 0, 1, 1, 2, 2}`

## Merge Two Sorted Arrays
This algorithm merges two sorted arrays into one sorted array. It takes two input arrays and merges them into one, which has enough space to hold the combined elements.

**Example:**
- Input: `nums1 = {1, 2, 3, 0, 0, 0}`, `nums2 = {2, 5, 6}`
- Output: `Merged array: {1, 2, 2, 3, 5, 6}`

## Selection Sort
Selection Sort divides the input array into two parts: a sorted part and an unsorted part. It repeatedly selects the smallest (or largest) element from the unsorted part and moves it to the end of the sorted part.

**Example:**
- Input: `{5, 3, 8, 4, 2}`
- Output: `{2, 3, 4, 5, 8}`

## Conclusion
Understanding different sorting algorithms is essential for optimizing performance in various applications. Each algorithm has its strengths and weaknesses, making them suitable for different scenarios.
