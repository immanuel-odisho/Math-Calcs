#include <stdio.h>
#include <math.h>


int main()

{


	double temp,  a, x0, xn_1, tol, value;
	int n_max, i = 1;

	printf("Enter positive number, initial guess, tolerance, max number of iterations: ");
	scanf("%lf %lf %lf %d", &a, &x0, &tol, &n_max); //input is taken from user
	value = 0.5 * (x0 + a/x0);	//initial iteration is made 

 	while((fabs(value-xn_1) >= tol) && (i <= n_max)) //conditional loop that continues until n_max is met or tolerance reached
	{
		temp = value;
		value = 0.5 * (value + a/value); //tmep variable used to keep track of previous calc
		xn_1 = temp;
		i = i + 1;
	}

	if ( i-1  == n_max) //conditional prints result depending if n_max reached or tolerance
	{ 
		printf("Max iterations %d reached, |x_{n+1} - x_n| = %.1e\n", i-1 , (fabs(value-xn_1)));
	}
	else
	{
		printf("sqrt(%g): %.13e, number of iterations %d\n", a, value, i);
	}

	return 0;
}


