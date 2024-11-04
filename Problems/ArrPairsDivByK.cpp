#include<iostream>
#include<vector>
using namespace std;

bool canArrange(vector<int>& arr, int k) {
    vector<int> remainderCount(k, 0); // Array to store remainder frequencies

    // Step 1: Count the frequency of each remainder
    for (int num : arr) {
        int remainder = ((num % k) + k) % k; // Adjust for negative numbers
        remainderCount[remainder]++;
    }

    // Step 2: Check if each remainder can pair with its complement
    for (int i = 1; i < k; i++) {
        if (remainderCount[i] != remainderCount[k - i]) {
            return false; // The counts don't match, so they can't form valid pairs
        }
    }

    // Step 3: Special cases for remainders 0 and k/2
    if (remainderCount[0] % 2 != 0) {
        return false; // Elements perfectly divisible by k must pair among themselves
    }
    
    // If k is even, check the middle remainder k/2
    if (k % 2 == 0 && remainderCount[k / 2] % 2 != 0) {
        return false; // Remainders k/2 must pair among themselves
    }

    return true; // All checks passed
}