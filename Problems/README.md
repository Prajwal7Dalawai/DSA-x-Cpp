<h1>Problems baseed on DSA</h1>

<ol>
<li>
<h2>Single number</h2>
<b>Category</b>: Bruteforce
<p><b>Description: </b>Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.</p>

<p><b>Examples</b><br>
Example 1:
Input: nums = [2,2,1] &nbsp; Output: 1<br>
Example 2:<br>
Input: nums = [4,1,2,1,2]&nbsp;Output: 4<br>
Example 3:
Input: nums = [1]&nbsp;Output: 1
 </p>
</li>

<li><h2>Maximum Sub Array using Kadane's Algorithm</h2>
<b>Category</b>: Dynamic Programming
<p><b>Description: </b>Given an integer array nums, find the 
subarray
 with the largest sum, and return its sum.

You must implement a solution with a linear runtime complexity and use only constant extra space.</p>

<p><b>Examples</b><br>
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.
Example 2:

Input: nums = [1]
Output: 1
Explanation: The subarray [1] has the largest sum 1.
Example 3:

Input: nums = [5,4,-1,7,8]
Output: 23
Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.
 </p>
</li>

<li><h2>Two Sum/Pair Sum</h2>
<b>Category</b>: Two Pointer Approach
<p><b>Description: </b>Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.</p>

<p><b>Examples</b><br>
Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]<br>
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].<br><br>
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]<br><br>
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]
 </p>
</li>

<li><h2>Majority Element using Moore's Algorithm</h2>
<p><b>Description: </b>Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.</p>

<p><b>Examples</b><br>
Example 1:

Input: nums = [3,2,3]
Output: 3<br><br>
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2
 </p>
</li>

<li><h2>Pow(x,n)</h2>
<p><b>Description: </b>Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.</p>

<p><b>Examples</b><br>
Example 1:
Input: x = 2.00000, n = 10
Output: 1024.00000

Example 2:
Input: x = 2.10000, n = 3
Output: 9.26100

Example 3:
Input: x = 2.00000, n = -2
Output: 0.25000

Explanation: 2-2 = 1/22 = 1/4 = 0.25
 </p>
</li>

<li><h2>Container with Maximum Water</h2>
<p><b>Description: </b>You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.</p>

<p><b>Examples</b><br>
Example 1:


Input: height = [1,8,6,2,5,4,8,3,7]<br>
Output: 49<br>
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.

Example 2:<br>
Input: height = [1,1]<br>
Output: 1
 </p>
</li>

<li><h2>Product of Array Except Self</h2>
<p><b>Description: </b>Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.</p>

<p><b>Examples</b><br>
Example 1:<br>
Input: nums = [1,2,3,4]<br>
Output: [24,12,8,6]<br>

Example 2:<br>
Input: nums = [-1,1,0,-3,3]<br>
Output: [0,0,9,0,0]
 </p>
</li>

<li><h2>Search in Rotated Sorted Array</h2>
<p><b>Description: </b>There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

You must write an algorithm with O(log n) runtime complexity.</p>

<p><b>Examples</b><br>
Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0<br>
Output: 4<br>

Example 2:<br>
Input: nums = [4,5,6,7,0,1,2], target = 3<br>
Output: -1<br>

Example 3:<br>
Input: nums = [1], target = 0<br>
Output: -1
 </p>
</li>

<li><h2>Peak Index in a Mountain Array</h2>
<p><b>Description: </b>You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.

Return the index of the peak element.

Your task is to solve it in O(log(n)) time complexity.</p>

<p><b>Examples</b><br>
Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0<br>
Output: 4<br>

Example 2:<br>
Input: nums = [4,5,6,7,0,1,2], target = 3<br>
Output: -1<br>

Example 3:<br>
Input: nums = [1], target = 0<br>
Output: -1
 </p>
</li>

<li><h2>Check If Array Pairs Are Divisible by k</h2>
<p><b>Description: </b>Given an array of integers arr of even length n and an integer k. We want to divide the array into exactly n / 2 pairs such that the sum of each pair is divisible by k. Return true if you can find a way to do that or false otherwise.</p>
<p><b>Examples</b><br>
Example 1:<br>
Input: arr = [1,2,3,4,5,10,6,7,8,9], k = 5<br>
Output: true<br>
Explanation: Pairs are (1,9),(2,8),(3,7),(4,6) and (5,10).<br>

Example 2:<br>
Input: arr = [1,2,3,4,5,6], k = 7<br>
Output: true<br>
Explanation: Pairs are (1,6),(2,5) and(3,4).<br>

Example 3:<br>
Input: arr = [1,2,3,4,5,6], k = 10<br>
Output: false<br>
Explanation: You can try all possible pairs to see that there is no way to divide arr into 3 pairs each with sum divisible by 10.</p>


<p><b>Examples</b><br>
Example 1:

Input: arr = [1,2,3,4,5,10,6,7,8,9], k = 5<br>
Output: true<br>
Explanation: Pairs are (1,9),(2,8),(3,7),(4,6) and (5,10).<br>

Example 2:

Input: arr = [1,2,3,4,5,6], k = 7<br>
Output: true<br>
Explanation: Pairs are (1,6),(2,5) and(3,4).<br>

Example 3:

Input: arr = [1,2,3,4,5,6], k = 10<br>
Output: false<br>
Explanation: You can try all possible pairs to see that there is no way to divide arr into 3 pairs each with sum divisible by 10.
 
 </p>
</li>

<li><h2>Book Allocation Problem</h2>
<p><b>Description: </b>Suppose there are m students and n books, which are of different page sizes. We need to find the minimum of the maximum pages of books each student can get.</p>
<p><b>Examples</b><br>
Example 1:<br>
Input: pages = [12, 34, 67, 90], m = 2<br>
Output: 113<br>
Explanation: The optimal way is to allocate books to students as [12, 34] and [67, 90].</p>
</li>

<li><h2>Painters Partition Problem</h2>
<p><b>Description: </b>Suppose there are m Painters and n units, where they take different times to complete different units. We need to find the minimum time to complete all units. Also note that each painter can only paint one unit at a time and each painter can paint contiguous units.</p>
<p><b>Examples</b><br>
Example 1:<br>
Input: arr = [10, 20, 30, 40], m = 2<br>
Output: 60<br>
Explanation: The optimal way is to allocate units to painters as [10, 20, 30] and [40].</p>
</li>

</ol>
