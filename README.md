# Count-number-of-inversions-in-a-linked-listb-using-merge-sort

So the problem is given that we have a linked list and we need to find the inversion counts in that linked list
Inversion count = in terms of array a if index i < index j then a[i] > a[j]
E.g - 
3 2 1
Output = 3
Explanation = {3,2},{3,1},{2,1}
There are two approaches we can do here
1.) Naive approach (Selection Sort approach)- 
we will take two loops where we will compare the value in the ith location with the other element having index  > i
ANALYSIS - 
Time Complexity = O(N^2) - because here we are doing the work like - 
n-1 + n-2  + ... + 1 = n(n-1)/2
Using Recurence - 
T(n) = T(n-1) + n*
T(n-i-1) = T(n-i) + n*i
n-i=1;
therefore i =  n-1
T(n) = T(1) + n*n
T(n) = n^2
Space Complexity = O(1) - No additional space use
2.) Merge Sort approach - 
ALGORITHM - DIVIDE & CONQUER
We will divide the linked list into 2 equal halves every time until we get the single element and then we will compare the elements of those single nodes with each other while merging 
ANALYSIS - 
Time Complexity - O(N*logN) - because here we are doing the work like this - 
On dividing the array into 2 parts the the complexity is reduced to log n and then merging  which takes n  times after getting one node so TC - 
O(n*logn)
Using Recurence - 
T(n) = 2*T(n/2) + n
T(n/2^(i+1)) = (2^i)*T(n/2^i) + n*i
n/2^i = 1
therefore i = log n
T(n) = log n *T(1) + n*log n
Space Complexity - 
O(n)
