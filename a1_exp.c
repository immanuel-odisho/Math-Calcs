#include <stdio.h>
#include <math.h>

int main()

{

	double past_calc = 1, x, calc, numerator, denominator = 1;  //variables declared
	int i = 2;
	printf("Enter the value for x: "); //asks the user for the value of x in summation
	scanf("%lf", &x);

	past_calc += x; //since summataion always has the initial value as 1 and second as x 
	numerator = x; 

	while(1)
	{	
		if (i % 2 == 0) //in case the x value is a negative this conditional will ensure both cases are covered of + or -
		{
			numerator *= x;
			numerator = fabs(numerator);
		}
		else
		{
			numerator *= x;
		}

		denominator *= (i); //denominator is calculated
		calc = numerator/denominator; //element in the summation is calculated and added to the total summation
		calc += past_calc;
		i++;

		if (past_calc == calc) //conditional keeps track if the previous value matches, otherwise continues loop
		{
			break;
		}
		else
		{
			past_calc = calc;
		}
	}

printf("Approximation of e(%g): %.12e, using %d terms \n", x, calc, i-1);
	
return 0;

}
