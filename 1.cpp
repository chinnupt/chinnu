// Simple C++ program to find a partition point in 
// an array 
#include <bits/stdc++.h> 
using namespace std; 

// Prints an element such than all elements on left 
// are smaller and all elements on right are greater. 
int FindElement(int A[], int n) 
{ 
	// traverse array elements 
	for (int i = 0; i < n; i++) { 
		// If we found that such number 
		int flag = 0; 

		// check All the elements on its left are smaller 
		for (int j = 0; j < i; j++) 
			if (A[j] >= A[i]) { 
				flag = 1; 
				break; 
			} 

		// check All the elements on its right are Greater 
		for (int j = i + 1; j < n; j++) 
			if (A[j] <= A[i]) { 
				flag = 1; 
				break; 
			} 

		// If flag == 0 indicates we found that number 
		if (flag == 0) 
			return A[i]; 
	} 
	return -1; 
} 

// driver program to test above function 
int main() 
{ 
	int A[] = { 4, 3, 2, 5, 8, 6, 7 }; 
	int n = sizeof(A) / sizeof(A[0]); 
	cout << FindElement(A, n) << endl; 
	return 0; 
} 
