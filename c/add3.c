#include <stdio.h>
// Write a program to add 3 numbers
// Ask user fir 3 different numbers using scanf
// Then printf the sum of the three numbers

int main() {
	int x, y, z;
	printf("Enter 1st number: ");
	scanf("%i" , &x);
	printf("Enter 2nd number: ");
	scanf("%i" , &y);
	printf("Enter 3rd number: ");
	scanf("%i" , &z);
	printf("The sum of the three numbers is %i\n" , x + y + z );
        return 0;
}
