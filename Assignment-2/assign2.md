# Assignment-2

## Time complexity of computational problems:

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
* 1 unit time for return statement<br>

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

### __3.Find Area(a) and Perimeter (p) of a Square__ 

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

### __4.Find the Compound Interest (CI)__

__Pseudocode:__
```c
compound_interest(P,r,n)   // P= principal investment, r= interest rate, n= no: of compoundings a year
{
    return P*(pow(1+r/100),n) - P  // 4+log(n) units of time ; 3 units time for /,*,+ opeartions; log(n) time for power function pow; 1 unit time for return statement
}
```
Time complexity = 4+log(n) = log(n) + constant = O(log n)<br><br>
__Observation:__
* pow(base,exponent) inbuilt function calculates power in __log(exponent)__ times. In-order to use this built-in function, math.h library should be included.<br>

### __5.Swap Two Numbers using Temporary Variable__

__Pseudocode:__
```c
swap(a,b)
{
    temp = a    // storing value of a in temp   ; 1 unit time
    a = b       // assigning value of b to a    ; 1 unit time
    b = temp    // assigning value of temp to b ; 1 unit time 
}
```
Time complexity = 3 = constant = O(1)<br><br>
__Observation:__
* 1 unit time for searching address of variable and storing each time. There are three such operations. Hence, 3 units time in total.<br>

### __6.Find the Smallest of two numbers a and b__

__Pseudocode:__
```c
smallest(a,b)
{
    if a>b              // 1 unit time for comparison
        return b       
    else
        return a        
}
```
Time complexity = 2 units = constant = O(1)<br><br>
__Observation:__
* After the function call, if condition checks which if a>b which takes a unit time and if it is true then returns the value, otherwise goes to the else part and returns the other value.<br>

### __7.Find the largest of three numbers a, b and c__

__Pseudocode:__
```c
largest(a,b,c)
{
    if a>b               // 1 unit time
    {
        if a>c           // 1 unit time 
            return a     // 1 unit time
        else
            return c
    }
    else if b>a
    {
        if b>c
            return b
        else
            return c
    }
}
```
Time complexity = 3 units time = constant = O(1)<br><br>
__Observation:__
* Like in the smallest of two, here we compare the largest of any two numbers first and then compare the larger one with remaining one. As all these comparisons take one unit time each, we do two comparisons and return the largest one. So in total takes 3 units time.

### __8.Find Even numbers between 1 to 50__

__Pseudocode:__
```c
for i=1 to 50         // (50 + 1)units times it runs(+1 for the end false condition)
{
    if i%2 is 0       // 1 unit time to find remaider
        output i       // 1 unit time to output
}
```
Time complexity = (51).(1+1) = (51).(2) = 106 units time = Constant time = O(1)<br><br>
__Observation:__
* Here if the for loop runs for i=0 to n, then the time complexity would be (n+1)*2 = 2n + 1 = C1*n + C2 = O(n).

### __9.Find Sum of Series 1+2+3+…...+N__

__Pseudocode:__
```c
series_sum(n)            // n denotes number of terms to be summed in series
{
    sum = 0              // 1 time unit
    for i=1 to n         // runs for (n+1) times including end false condition
    {
        sum = sum + i   // 1 unit time
    }
    return sum          // 1 unit time
}
```
Time complexity = 1+(n+1)*1 + 1 = n+3 = __O(n)__<br><br>
__Observation:__
* In total it takes n+3 units time, 3 units time is neglible for the worst case scenario. Therefore, TimeComplexity is O(n)
