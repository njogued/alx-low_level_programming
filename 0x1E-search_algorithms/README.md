### 0x1E. C - Search Algorithms

#### Resources
[Search algorithms](https://en.wikipedia.org/wiki/Search_algorithm)  
[Space Complexity](https://www.geeksforgeeks.org/g-fact-86/)  

#### Search Algorithms
- Search algoriths are used to retrieve information within a particular data structure or in the search space of a problem domain, with either discrete or continous variables.
- Search algorithms can be classified into: linear, hashing, or binary, based on the mechanism of searching.
- Linear searches check every record in a linear version. Binary search divides the search space in half. Hashing maps keys to records based on a hash function.

#### Space Complexity
- The space complexity is the total space taken by an algorithm with respect to the input size. 
- The total space is the auxiliary space and the space by input. The auxiliary space is the temporary space used by the algorithm.

#### Task 0. Linear search
- Write a function that searches for a value in an array of integers using the [Linear search algorithm](https://en.wikipedia.org/wiki/Linear_search)
```
Prototype : int linear_search(int *array, size_t size, int value);
Where:
- array is a pointer to the first element of the array to search in
- size is the number of elements in array
- And value is the value to search for
Your function must return the first index where value is located
If value is not present in array or if array is NULL, your function must return -1
Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)
```
