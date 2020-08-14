#include<stdio.h>
/*
	-Input 2 Data
	First Data is Length
	Sceond Data is Width
	-Output
	Area with 2 decimal places
*/
int main()
{
	float Length, Width;
	float Area = 1;
	printf("Length is ");
	scanf_s("%f", &Length);
	printf("Width is ");
	scanf_s("%f", &Width);
	if (Length <= 0 or Width <= 0)
	{
		if (Length <= 0)
		{
			printf("Length cannot be negative or zero.");
			return 0;
		}
		else if (Width <= 0)
		{
			printf("Width cannot be negative or zero.");
			return 0;
		}
		printf("Length and Width cannot be negative or zero");
	}

	else
	{
		Area = Length * Width;
		printf("Area is %.2f", Area);
	}
	return 0;
}