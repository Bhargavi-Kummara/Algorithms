# Assignment-2

## On Analysis of Time Complexity:<br>

### __1.Find the sum of two numbers a and b__

__Pseudocode__:
```c
add(a,b)
{
    return a+b //Takes 2 units of time; one for arithmetic operation and another for returning the added value
}
```
Note: The above lines are just pseudo code, they do not run in IDE<br>

Time complexity= 2 units = constant = O(1)<br>

__Observation:__<br> 
* 1 unit time for arithmetic operation<br> 
* 1 unit time for return statement.

### __2.Convert temperature from Celsius(c) to Fahrenheit (f) and Fahrenheit to Celsius__

__Pseudocode__:
```c
celsius_2_fahrenheit(c)  // c is temperature in celsius, a function call
{
    return (9/5*c + 32)  // 4 units of time; 3 units for division,multiplication and addition invovled in computation and 1 unit for return statement
}
```
Time complexity = 4 units = constant = O(1)<br>

__Observation:__<br> 
* 3 units of time for arithmetic operations / , * and + <br> 
* 1 unit time for return statement<br><br>

Similarly for converting temperature from Fahrenheit to Celsius<br>
__Pseudocode__:
```c
fahrenheit_2_celsius(f)  // f is temperature in fahrenheit, a function call
{
    return (f-32)*5/9  // 4 units of time; 3 units for division,multiplication and subtraction invovled in computation and 1 unit for return statement
}
```
Time complexity = 4 units = constant = O(1)<br>

__Observation:__<br> 
* 3 units of time for arithmetic operations / , * and - <br> 
* 1 unit time for return statement<br>

#__3.Find Area(a) and Perimeter (p) of a Square__ 

__Pseudocode for finding area:__
```c
areaofsquare(s)  // s is the length of side of square
{
    return s*s   // 2 units of time ; one for multiplication operation and another for return statement
}
```

Similarly, for finding perimeter of square

__Pseudocode for finding perimeter:__
```c
perimeterofsquare(s)  // s is the length of side of square
{
    return 4*s   // 2 units of time ; one for multiplication operation and another for return statement
}
```
Total Time complexity = 2 + 2 = 4 units = constant = O(1)<br>

__Observation for computing both area and perimeter:__<br> 
* 2 units time for arithmetic operation i.e multiplication- 
* 2 units time for return statement<br>
