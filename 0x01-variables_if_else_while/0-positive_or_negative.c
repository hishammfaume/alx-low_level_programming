#include <stdlib.h>

#include <time.h>

#include <stdio.h>



/* betty style doc for function main goes there */
/**
 * main - Print a random number
 *
 * Return: 0
*/
int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					if (n > 0)
						printf("%d is positive\n", n);
					else if (n < 0)
						printf("%d is negative\n");
					else
						printf("%d is zero\n");
					return (0);

}
