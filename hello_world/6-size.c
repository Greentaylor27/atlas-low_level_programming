# include <stdio.h>
/**
 * main - prints a specific line
 *
 * Return: 0
 */
int main(void)
{
	char charType;
	int intType;
	long longType;
	long long longlongType;
	float floatType;

	printf("Size of char: %zu bytes\n", sizeof(charType));
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of long int: %lu bytes\n", sizeof(longType));
	printf("Size of long long int: %llu byte\n", sizeof(longlongType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));

	return (0);
}
