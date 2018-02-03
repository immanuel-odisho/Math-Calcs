#include <stdlib.h>
#include <stdio.h>

#define N 35


int main()

{

	int A[N], j, i, temp, row = 1;  //all variables are declared

	for (int i = 0 ; i < N ; i++)  //loop to create random array
	{

		A[i] = rand() % 10;  
	}

	for (i = 0; i < N; i++)  //loop to go through array N amount of times
	{
		for (j = i + 1; j < N; j++) //nested loop to go around N amount of times and swaps into order with a temp variable
		{
			if (A[j] < A[i])
			{
				temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}		
		}
	}

        for (i = 0; i < N; i++) //for every 10th print a new line is made
	{
	
                printf("%d ",A[i]); //variable row keeps track of counting starting at 1
		if (row  == 10)
		{
			printf("\n");
			row = 0;
		}

		row += 1;
        }


	return 0;

}
