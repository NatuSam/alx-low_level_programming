#include <stddef.h>
/**
 * array_iterator - function that executes a function
 * @size:  is the size of the array
 * @action: is a pointer to the function
 * @array: is the data
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array && size && action)
{
size_t i;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
