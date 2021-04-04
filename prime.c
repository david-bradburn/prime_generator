#include <stdio.h>
#include <stdlib.h>


int prime_check(int a, int b[], int length) //returns 1 if a prime, 0 if not
{
	for (int i = 0; i < length; i++)
	{	
		//printf("%d\n", b[i]);
		if (a % b[i] == 0)
		{
			return 0;
		}
	}

	return 1;
}

int main(void)
{
	char prog_name[] = "Prime Generator";
	printf("%0s\n", prog_name);

	int N = 100000;
	int primes[10000];
	int k = 0;
	
	for (int i = 2; i < N; i++)
	{
		//printf("%s %d %s", "The number being checked is:", i, "\n");
		if (i == 2)
		{
			primes[k] = i;
			k++;
		}
		else
		{
			int prime = prime_check(i, primes, k);
			if (prime)
			{
				primes[k] = i;
				k++;
			}
		}	
	}

	printf("%s %d %s %d, %s", "There are", k, "primes between 1 and", N, "they are\n");
	for(int i = 0; i < k; i++)
	{
		printf("%d\n", primes[i]);
	}
	
}