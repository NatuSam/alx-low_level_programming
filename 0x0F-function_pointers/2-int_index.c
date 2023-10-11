/**
 * int_index - check if a number is equal to 98
 * @array: the data
 * @size: the size of the array
 * @cmp: the func
 * Return: 0 if false, something else otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
if (size <= 0)
return (-1);
if (array && size && cmp)
{
int i;
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
}
return (-1);
}
