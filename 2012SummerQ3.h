//A
int recArrMax(int *arr, int size)
{
	int current;
	--size;
	if (!size)
		return arr[size];
	current = recArrMax(arr, size);
	if (current > arr[size])
		return current;
	return arr[size];
}

//B
int maxMatrixLine(int arr[N][N])
{
	int sum, i, j, num, MaxLine, max = 0;
	for (i = 0; i < N; i++)
	{
		sum = 0;
		for (j = 0; j < N; j++)
		{
			num = arr[i][j];
			while (num)
			{
				sum += num % 10;
				num /= 10;
			}
		}
		if (sum > max)
		{
			max = sum;
			MaxLine = i;
		}
	}
	return MaxLine;
}