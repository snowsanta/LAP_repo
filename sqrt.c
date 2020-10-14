/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

// added first comment
// comment from master to force conflict
// trying to force conflict from br_negetiveSupport branch
int main(int argc, char *argv[])
{

	// if input is not given
	if (argc != 2)
	{
		printf("DEBUG: Usage: sqrt input\n\n");
		exit(-1);
	}

	// input validation
	int length = strlen(argv[1]);
	int i = 0;
	if (argv[1][0] == '-')
	{
		i++;
	}
	for (i; i < length; i++)
	{
		if (!isdigit(argv[1][i]) && argv)
		{
			printf("DEBUG: Error: Input must be a integer\n\n");
			exit(1);
		}
	}

	// if given valid input, calculate and print square root
	int input = atoi(argv[1]);

	//handle negetive input
	int flg = 0;
	if (input < 0)
	{
		flg = 1;
		input = input * -1;
	}

	if (flg == 1)
	{
		printf("DEBUG: Sqrt of %d is %fi\n", input * -1, sqrt(input));
	}
	else
	{
		printf("DEBUG: Sqrt of %d is %f\n", input, sqrt(input));
	}
	printf("DEBUG: End of program, exiting\n");
	return (0);

} // end main
