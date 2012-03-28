#include <stdio.h>

#define SIZE 10	// Size variable defined here for easy access when
		// editing.

/**
  * This funcion sorts an array of ints via selection sort.
  * Pre: A[] is an array of ints.
  *
  * Post: The contents of A[] are ordered from smallest to highest.
  */
void basicSort(int A[])
{
	int low, idx, temp;

	for (int i = 0; i < SIZE - 1; i++)
	{
		low = A[i];
		idx = i;
		for (int j = 0; j < SIZE; j++)
		{
			if ( A[j] < low)
			{
				low = A[j];
				idx = j;
			}
		}
		if (low < A[i])
		{
			temp = A[i];
			A[i] = low;
			A[idx] = temp;
		}
	}
}
