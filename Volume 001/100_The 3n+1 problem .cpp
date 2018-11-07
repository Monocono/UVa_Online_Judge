/*
The 3n + 1 problem
Time limit - 3sec
Language C++ 11 5.3.0
Modify 2018 11 07
*/
#include <stdio.h> 
#define swap(A,B) { int temp; temp = A,A = B , B = temp; }

int Calculation(int A, int B)
{
	int temp, cycle, max, idx;
	if (A > B)
	{
		swap(A, B);
	}
	max = 0;
	for (idx = A; i <= B; idx++)
	{
		cycle = 1;
		temp = idx;
		while (temp > 1)
		{
			if (temp % 2 == 0)
				temp /= 2;
			else
				temp = (temp * 3) + 1;
			cycle++;
		}
		if (max <= cycle) max = cycle;
	}
	return max;
}
int main()
{
	int A, B;
	while (scanf("%d %d", &A, &B) != EOF)
	{
		printf("%d %d %d\n", A, B, Calculation(A, B));
	}
	return 0;
}
