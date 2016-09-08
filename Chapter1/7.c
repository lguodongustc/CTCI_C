#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//a(i,j) --> a(n-1-j,i) --> a(n-1-i, n-1-j) --> a(j, n-1-i) --> a(i,j)

int main()
{
	int N=6;
	int a[6][6] = {
		1,2,3,4,5,6,
		7,8,9,10,11,12,
		13,14,15,16,17,18,
		19,20,21,22,23,24,
		25,26,27,28,29,30,
		31,32,33,34,35,36			
	};
	
	int temp;

	for(int i = 0; i <= (N-1)/2; i++)
	{
		for (int j = 0; j <= (N-1)/2; j++)
		{
			temp = a[i][j];
			a[i][j] = a[j][N-1-i];
			a[j][N-1-i] = a[N-1-i][N-1-j];
			a[N-1-i][N-1-j] = a[N-1-j][i];
			a[N-1-j][i] = temp;
		}
	}

	for(int i=0; i < N; i++)
	{
		for(int j=0; j<N; j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}
	return 0;
}
