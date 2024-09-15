<h1>Basics Of C++</h1>
<h3>Input and Output Statements</h3>
<ul>
<li>For printing use `cout`</li>
<li>For taking input use `cin`</li></ul>

<h3>Data Types in C++</h3>
<h4>1. Primitive Data types</h4>
<ul>
<li>int => takes 4 number of bytes</li>
<li>char => takes 2 number of bytes</li>
<li>float => takes 4 number of bytes</li>
<li>bool => takes 1 number of bytes</li>
<li>double => takes 8 number of bytes</li>
</ul>

<h3>Type Conversion and Type Casting</h3>
<p>Refer the file named [type_conversion&casting.cpp](https://github.com/Prajwal7Dalawai/DSA-x-Cpp/blob/main/C%2B%2B%20Basics/type_conversion%26casting.cpp) to know about this</p>

<h3>Operators in C++</h3>
<ol>
<li>Arithmatic Operators: +, - , *, /</li>
<li>Relational Operatores: <, >, ==, <=, >=, !=  always return true or false</li>
<li>Logical operators: ||(OR), &&(AND), !(NOT) </li>
<li>Unary Operator
<ul>
<li>Increament: There are two types:<ul><li>1. Post Increament(a++): Invreament after using the value</li><li>Pre Increament(++a): Increament before using the value</li></ul></li>
<li>Decreament: There are two types:<ul><li>1. Post decreament(a--): Invreament after using the value</li><li>Pre decreament(--a): Increament before using the value</li></ul></li>
</ul></li>
</ol>

<h3>Conditional Statements</h3>
Conditional Statements in C++ are used to check if certain condition is true or not.
<ol>
<li>if - Condition: </li>
<li>if-else - Condition </li>
<li>if-else-if ladder </li>
<li>Nested if Condition </li>
</ol>

<h3>Ternary Operator</h3>
condition ? stmt1 : stmt2;<br>
<p>Ternary Operator can work on Three operands. It can also used in condition checking. Nested if-else can be efficiently handled using ternary operator with fewer lines of code</p>

<h3>Loops in C++</h3>
Refer file named `loops_in_c++.cpp`.<br>
Loops are used to perform one or set of actions repeatitively until some condition is satisfied. There are mainly 3 types of loops:
<ol>
<li>while-loop:<br>
Syntax: <br>
while(condition){<br>
statements...;<br>
}</li>
<li>Do-while loop:<br>
Syntax:<br>
do{<br>
statements;<br>
}while(condition)
</li>
<li>for-loop:
syntax:<br>
for(initialisation;condition;increament/decreament){<br>
statements;<br>
}</li>
<li>Nested Loops: nested loops are the one which contains loops inside a loop. Either it may be a while loop or for loop.</li>
</ol>
<p>Note: the first two types of loops are called uncontrolled loops because we won't be knowing where and when the loop ends. For loop is called as controlled loop because we already know starting and end point of the loop in prior.</p>

<h3>Functions</h3>
(<i>Refer file named functions.cpp</i>)<br>
Functions are set of instructions which have to be executed more than one times. hence, collection of set of instructions under some particular name are called functions. Functions increases redundancy, readability and  modularity of the code. Functions may or may not take inputs as parameters/arguments for performing operations. Based on this we have divided functions into 5 categories, they are listed below.
<ol>
<li>Functions with no return type and no arguments</li>
<li>Functions with no return type and with arguments</li>
<li>Functions with with return type and no arguments</li>
<li>Functions with with return type and with arguments</li>
<li>Recursive Functions</li>
</ol>

We have talked about return types and parameters above. Let us understand what are those.
<ol>
<li>Return Types: Some of the functions usually return some value/values after performing the operations defined in that. It is like performing the calculations/operations and giving back the computed result for further usage. The values be of any kind of type(<i>int,bool,string,char,float,double,long,void...</i>). There is no need for the function to have any return types compulsarily. It depends based on the situations. When there is no return type of the function we use <i>void</i> as a return type in most of the cases.</li>
<li>Parameters: Parameters are the input given to the function based on which it performs it operations. value of the parameters may or may not get changed during the function execution. We can provide any numbers of parameters to the function. There is no need for the function to have parameters compulsarily</li>
</ol>
<h4> There are 2 types of calling a function</h4>
<ol>
<li>Call By value: Copy of arguement is passed to the function. Here we are giving the copy of the arguement as a parameter to the function, which means the same type of the value which is given as an arguments, acquires the different memory location as compared to arguement. That means seperate memory is allocated for the values passed as parameters.</li>
<li>Call By reference: Here we directly pass the address of the arguements as a parameter to the function, so that both paramaters and arguements share the same memory location in the system.</li>
</ol>

<h3>Bitwise operators</h3>
There are mainly 5 types of bitwose operators:
<ol>
<li><b>Bitwise AND(&)</b>: Returns True if all the conditions are true. Else returns false</li>
<li><b>Bitwise OR(|)</b>: Returns true if any one of all the conditions are true. Else returns false.</li>
<li><b>Bitwise XOR(^)</b>: If all conditions are Either true(Tautology) or false(fallacy), then it returns false. Else it return true.</li>
<li><b>Left Shift Operator(<<)</b>: Shifts the digit to one bit by Left. Hence, it multiplies the digit by 2 for every shift.</li>
<li><b>Right Shift Operator(>>): </b>: Shifts the digit to one bit by Right. Hence, it divides the digit by 2 for every shift.</li>
</ol>

<h3>Operator Precedence</h3>
<table>
<th>Operators</th>
<th>Precedence</th>
<tr>
<td>!, +, -(unary operators)</td>
<td>First (Right to Left)</td>
</tr>
<td>*, /, %*</td>
<td>Second (Left to Right)</td>
</tr>
<td>+, -</td>
<td>Third (Left to Right)</td>
</tr>
<td><, <=, >=, ></td>
<td>Fourth (Left to Right)</td>
</tr>
<td>==, !=</td>
<td>Fifth (Left to Right)</td>
</tr>
<td>&&</td>
<td>Sixth (Left to Right)</td>
</tr>
<td>||</td>
<td>Seventh (Left to Right)</td>
</tr>
<td>=(assignment operator)</td>
<td>last (Right to Left)</td>
</tr>
</table>

<h3>Scope</h3>
Scope is defined as accessability of a variable within the program. <br>
There are two scope for variable:
<ol>
<li>Local Scope: Variables which come under the functions scope, or lies within if else condition, or lies within block of code, comes under local scope. </li>
<li>Global Scope: Variables which can be accessed throughout the program is known to be have global scope. they are usually defined at the begginning of the program(after include statements)</li>
</ol>

<h3> Data type Modifiers </h3>
(changing meaning of data types)<br>
Integers have the specefic range for storing numbers. they can only store the numbers which falls under the range of (-2<sup>31</sup>, 2<sup>31</sup>+1).
<ul>
<li><b>long:</b>: Gives extra 4 byte to the orginal data type. For example, if we write <i>long int x</i>, 'x' already has 4 bytes associated with it as it is a type of integer. But if we write <i>long</i> in front of it, we will have extra 4 bytes of space associated to 'x'.</li>
<li><b>short</b>: It decreases  bytes of original data type. For example, if we want to store age of a person, we hardly require 3 digits. As 4 bytes of memory will be allocated to the variable in prior, most of the bytes get wasted as that variable doesn't hold much space. Hence we use <i>short</i> to decrease the number of bytes of original variable.</li>
<li><b>long long</b>: Does same as <i>long</i>, it increases capacity of the original data type. It has 8 bytes of memory which we can occupy.</li>
<li><b>signed</b>: generally data types such as <i>int, float, double</i> are signed by default. It can store both positive and negative numbers.</li>
<li><b>unsigned:</b>: Used when the variable will ever not be negative and always stays positive.</li>
<br>
<h2>
Static Memory Allocation vs Compile Time Memory Allocation</h2>
<p><b>Static Memory Allocation: </b><br><ul><li>Memory is allocated during compile time. That is, when we declare an array of size n, n blocks of memory get allocated during the strat of compilation of the program.</li> <li>In this method, compiler should be known priorly how much blocks of memory must be allocated to run the program.</li>
<li>Memory allocated during compile time are stored in stack memory.</ul>
<br>example: <i> int arr[5]</i> &nbsp;&nbsp;i.e., 5 blocks of memory gets allocated before the start of ececution of the program.</p>
<p><b>Runtime Memory Allocation: </b><br>
<ul><li>Here, memory is allocated during execution of the program.</li> <li>Whenever there is need of inserting any elements in a data structure, memory block is created at the run time to fit into it.</li><li> The advantage of this is, the compiler need not to be known the size of the data structure priorly.</li>
<li>Memory allocated during run time are stored in heap memory<li>  </ul></p>