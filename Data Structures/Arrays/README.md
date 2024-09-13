<h1>Arrays</h1>
<p>Arrays are the collection of multiple number of datas of homogenous data type under a single and unique name.</p>

<h2>Syntax</h2>
data_type array_name[size];

<h2>Properties of Arrays</h2>
<ol>
<li>We can store same type of data under one single name. We cannot store different type of data under one single name.</li>
<li>Arrays are contigous in memory. That is they are store contigously in our computer memory.</li>
<li>Arrays are linear.</li>
<li>If number of elements are in array are greater than size of array, then those elements which occcupied exceeding the size will be truncated.</li>
<li>If the declared value of array is greater than elements present in it, then the default values of those absent elements is 0.</li>
<li>Arrays are iterable. That is, we can access each element in array by applying proper loop</li>
</ol>

<strong>Note: </strong>Index in array denotes the position of the element in an array. always arrays in all programming languages follows 0 indexing(last postion is arraySize-1).<br>
<i>sizeof( )</i> is used for calculating number of bytes allocated for array.

<h2>Types of creating array</h2>
<ol>
<li> Direct initialisation method:<p>int array[5] = [1,2,3,4,5];</p></li>
<li>Initialisation without mentioning the size:
<p>int array[] = [1,2,3,4,5,6,....]</p></li>
<li>
</ol>

<h2>Passing array as a parameter in the function</h2>
<p>We can pass array as a parameter by two methods:</p>
<ol>
<li><b>Pass by value:</b> We can provide array as a parameter to the function by making a copy of it.<br>For ex: int <i>smallest(int arr[],int size)</i><br>Here, int arr[] is the copy of the original array which is declared in the main function or wherever the function needs to be used.</li>
<li><b>Pass by reference:</b> Here we pass the reference/address of the array straight away as a parameter. So that any changes that function wants to do to the array, it can straightaway do the changes to original array by accessing its address.<br>
For example: <i>int smallest(int *arr, int size)</i>, by this we can say that Array itself is a pointer as it denotes the address of first element it holds. </li>
</ol>
<p><b>Note:</b> In C++ a reference is an alternative name for an object or function it refers to. For sake of understanding, we are calling it out reference here.