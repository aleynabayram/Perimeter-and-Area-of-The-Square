/*The code calculates perimeter and area of the square */

#include <stdio.h>

	int main () {

	float length;
	float area;
	float perimeter;

	printf("Please enter the length:");
	scanf("%f" , &length);

	area = length*length;
	perimeter= 4*length;

	printf("The area of the square is %.2f\n" ,area);
	printf("The perimeter of the square is %.2f" ,perimeter);
	
	return 0;
}
