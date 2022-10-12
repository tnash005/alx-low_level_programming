/**
 * print_name - prints a name
 * @name: pointer to a name
 * @f: funnction pointer
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
