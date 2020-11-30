#include <stdio.h>
#include <math.h>

int NumberOfDigits(int A)
{
	return log10(A) + 1;
}

void main()
{
	int Input;
	printf("Enter your number");
	scanf_s("%d", &Input);
	int Output = NumberOfDigits(Input);
	printf("The number of digits in number is %i", Output);
}