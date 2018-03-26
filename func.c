int ** Create(int n, int m, int k)
{
	int i, j;
	int** x =
		(int**)malloc(sizeof(int*)*n);
	for (i = 0; i<n; i++)
		x[i] =
		(int*)malloc(sizeof(int)*m);
	for (i = 0; i<n; i++)
		for (j = 0; j<m; j++)
			x[i][j] = rand() % k;
	return x;
}
void Print(int ** x, int n, int m)
{
	int i, j;
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<m; j++)
			printf("%4d", x[i][j]);
		printf("\n");
	}
}
