#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: num of parameters
 * @argv: parameters
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int num1, num2;
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
if (get_op_func(argv[2]))
printf("%d\n", get_op_func(argv[2])(num1, num2));
else
{
printf("Error\n");
return (99);
}
return (0);
}
