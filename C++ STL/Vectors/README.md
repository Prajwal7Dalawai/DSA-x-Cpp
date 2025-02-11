<h1>Vectors</h1>
Vectors are somewhat similar to arrays, but they are dynamic in nature. That is, it doesn't have fixed size.<br><br>

<i><b>Note:</b> STL(Standard template library) is a library in C++ which contains readymade templates of different data structures like Stacks, Queues, Vectors, Hashtable, etc.</i><br>

<h2>Vector Syntax</h2>

<i> vector&lt;int&gt; vector_name;<br>
vector&lt;int&gt; vec = {1,2,3}<br>
vector&lt;int&gt; vec  = (size of vector, default value)</i><br>

<h2>For Each loop for vectors</h2>
This is a special type of looping construct to iterate data elements like vectors.<br>
Working:<br><i>
for(itr in vector) &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;//itr is iterator, vector is name of the vector<br></i>
the variable `itr` doesn't store the index of the vector in each iteration, but is stores the value at each index at every interation.<br>
<b>Syntax: </b><br><i>
for(data_type value : vector_name){ <br>
    //lines of code</br></i>
}
<br>

<h2>Vector Functions</h2>
<ol>
<li><i><b>size: </b></i> Returns the size of the vector.</li>
<li><i><b>capacity: </b></i>Returns the total capacity/size that can be accomodated by values/ maximum places where element in a data structure can accomodate..</li>
<li><i><b>push_back: </b></i>Inserts the element at the back of the vector and increament the size of the vector.</li>
<li><i><b>pop_back: </b></i>Deletes the last element of the vector(doesn't return) and decreases the size of the count.</li>
<li><i><b>front: </b></i>Returns the first element of the vector.</li>
<li><i><b>back: </b></i>Returns the last element of the vector</li>
<li><i><b>at: </b></i>Accessing particular value at particular index.</li>
<li><i><b>emplace_back() </b></i>Directly constructs the object in place at the end of the container. Avoids an extra copy/move operation by forwarding arguments to the constructor.</li>
<li><i><b>erase: </b></i>Deletes the element of specified index</li>
<li><i><b>clear: </b></i>Deletes all the elements in the vector</li>
</ol>
<i><b>Note: </b> size property returns the size of the vector. It returns number of places actually occupied by value in vector, whereas, capacity property returns the total capacity/size that can be accomodated by values/ maximum places where element in a data structure can accomodate.
</i><br>
<br>

# Vector Iterators in C++

In C++, a vector iterator is an object that enables you to traverse the elements of a vector. Iterators provide a way to access the elements of a container (like a vector) without exposing the underlying structure of the container. They are similar to pointers and can be used to iterate through the elements of a vector in a standard way.

## Key Features of Vector Iterators:
1. **Types of Iterators**:
   - **Begin Iterator**: Points to the first element of the vector.
   - **End Iterator**: Points to one past the last element of the vector.

2. **Usage**:
   - You can use iterators to loop through the elements of a vector using a `for` loop or other standard algorithms.

3. **Syntax**:
   - To obtain iterators, you can use the `begin()` and `end()` member functions of the vector.
   - Example:
     ```cpp
     #include <iostream>
     #include <vector>
     using namespace std;

     int main() {
         vector<int> vec = {1, 2, 3, 4, 5};
         for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
             cout << *it << " "; // Dereference the iterator to access the value
         }
         return 0;
     }
     ```
