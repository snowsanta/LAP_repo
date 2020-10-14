/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// added first comment
int main(int argc, char *argv[])
{

	// if input is not given
	if (argc != 2)
	{
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}

	// if given valid input, calculate and print square root
	int input = atoi(argv[1]);
	printf("Sqrt of %d is %f\n", input, sqrt(input));
	return (0);

} // end main
