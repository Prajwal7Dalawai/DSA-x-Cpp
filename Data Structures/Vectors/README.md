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
</ol>
<i><b>Note: </b> size property returns the size of the vector. It returns number of places actually occupied by value in vector, whereas, capacity property returns the total capacity/size that can be accomodated by values/ maximum places where element in a data structure can accomodate.
