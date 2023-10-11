/**
 * print_name - a function that prints a name
 * f - a func
 * @name: name of the person
 * @f: fuc ptr
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
if (f && name)
f(name);
}
