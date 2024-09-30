# Kadane's Algorithm
This algorithm is used to find maximum subarray sum in a given array. The working of Kadane's algorithm is way simple.
<ol>
<li>Add the elements of the af the array linearly</li>
<li>compare the value of the sum at that instance to the maximum sum obtained till that instance</li>
<li>If the sum at that instance becomes -ve, then reinitialise the current sum to zero. The reason for doing this is just to eliminate the elements which never contributes to the maximum sub array sum.</li>
<li>Repeat the above steps till the end of the array.</li>
</ol>

# Moore's Algorithm
This algorithm is used to find majority element in the array. Majority element is the element in the array which occurs [n/2] times in a array, where n is the size of the array. The main principle behind this algorithm is, if the element is occuring more than or equal to [n/2] times in the array, then it has the highest frequency.
<ol>
<li>We will consider the first element and increase our frequency count to 1. Also, we assign that element as an answer.</li> 
<li>If the further occuring element is same as the previous element, then we will increase the value of frequency</li>
<li>If previous element is not equal to the present, then we will decrease the value of count.</li>
<li>If the frequency becomes 0, then the element at that instance is assigned as the answer.</li>
<li>Again the above steps are Repeated until the frequency is positive.</li>
<li>frequency has to be positive if the majority element exists. And the value of the answer at that moment of time is the majority element.</li>
</ol>

# Binary Search Algorithm
This algorithm is used to check the presence of specefic element in the array. It requires sorted array to implement this opeartion. Steps carried out in this algorithm:
<ol>
<li>Find the midpoint of the array</li>
<li>If the target is more than mid, then intialize start point as midpoint+1</li>
<li>If the target is less than midpoint, then initialise endpoint as midpoint-1</li>
</ol>
Time Complexity: O(logn)

# Rotated Sorted Array Using Binary Search Algorithm
This algorithm is used to search an element in a rotated sorted array. It performs operation in log(N) time complexity. Steps Carried out in the algorithm:
<ol>
<li>Find the midpoint. If target equals midpoint, then return midpoint.</li>
<li>Find out which side of the array is sorted(left or right). If left side is sorted, then ovbiously start element is less than mid element.</li>
<li>If left side is sorted, then apply binary search algorithm to find element. Similarly do it if right side is sorted.</li>
<li>When the left side is sorted, if target lies in between start and mid element, then initialise start=mid+1 else, initialise end = mid-1</li>
<li>Same applies if left side is sorted.</li>
<li>repeat the above steps</li>

</ol>