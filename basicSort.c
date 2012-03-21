/**
  * This funcion sorts an array of ints via selection sort.
  * Pre: A[] is an array of ints.
  *
  * Post: The contents of A[] are ordered from smallest to highest.
  *       The size of A[] is unchanged.
  */
void basicSort(int A[], int A_SZ)
{
	int low, idx, temp;

	for (int i = 0; i < A_SZ - 1; i++)
	{
		low = A[i];
		idx = i;
		for (int j = 0; j < A_SZ; j++)
		{
			if ( A[j] < low)
			{
				low = A[j];
				idx = j;
			}
		}
		if (min < num[i])
		{
			temp = A[i];
			A[i] = low;
			A[idx] = temp;
		}
	}
}
