/**
 * print_name - a function that prints a name
 * @name: name of the person
 * @f: fuc ptr
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
