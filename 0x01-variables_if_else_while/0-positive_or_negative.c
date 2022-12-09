#include <stdlib.h>

#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */

int main(void)
	
{
	
	int n;
	

	
	srand(time(0));
	
	n = rand() - RAND_MAX / 2;
	
	long int answer = n > 0 ? "is positive \n" : n < 0 ? "is negative\n" : "is zero\n";
	printf(answer);
	return (0);
	
}
