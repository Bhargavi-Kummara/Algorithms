# Assignment-3</br>
## Find out Time complexity for Quick sort and Merge sort Algorithms 
### Also find Execution time for the given arrays using quick and merge sort
### 1. A[2.5,4.5,3.0,1.2,6.5,8.9,7.4,6.3]</br> 2. B[5,3,6,3,4,5,4,6,4] 

# Quick Sort Algorithm
```cpp
Quicksort(Arr,low,high)
{
        if(low<high)
        {
                i = Partition(Arr,low,high);      //Takes time 'n' (n = length of the array)
                Quicksort(Arr,low,i-1);
                Quicksort(Arr,i+1,high);         
                //Dividing of above two commands goes upto logn levels. Therefore, takes 'logn' time
        }
}
```

1. Quick sort follows divide and conquer strategy.
2. The above algorithm functions recursively. 

**Time Complexity = O(n*logn)  [Worst Case]**

### Execution time taken for sorting arrays with Quick sort using C++
![Quick sort program execution](time_quicksort.png)

# Merge Sort Algorithm
```cpp
Mergesort(low,high)                        
{
        if(low < high)
        {
                mid = (low + high)/2;      // Constant time
                Mergesort(low,mid);        // T(n/2) time
                Mergesort(mid+1,high);     // T(n/2) time
                Merge(low,mid,high);       // T(n) time
        }
}
```
1. Merge sort also follows Divide and Conquer strategy.
2. The above algorithm functions recursively</br>
3. Recurrence relation: T(n) = 2T(n/2) + n
**Time Complexity is O(n*logn)  [For Best,Average and Worst cases]**

### Execution time taken for sorting arrays with Merge sort using C++
![Merge sort program execution](time_mergesort.png)

**NOTE:**
1. Merge sort is more efficient and works faster than quick sort in case of *large array size*
2. Quick sort is more efficient and works faster than Merge sort in case of *small array size or data*
