#include <stdio.h>

/** 
 * main- prints the size of various data types 
 * Return: 0 if exited properly, non-zero otherwise
*/

int main(void)
{
	char A;
	int B;
	long int C;
	long long D;
	float E;
        printf("Size of a char: %zu byte(s)", sizeof(A));
	printf("Size of a int: %zu byte(s)", sizeof(B));
	printf("Size of a long int: %zu byte(s)", sizeof(C));
	printf("Size of a long long int: %zu byte(s)", sizeof(D));
	printf("Size of a float: %zu byte(s)", sizeof(E));
        return (0);
}
