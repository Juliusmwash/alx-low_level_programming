void p_name(char *nam)
{
	int i;

	i = 0;
	while (*(nam + i) != '\0')
	{
		_putchar(*(nam + i));
		i++;
	}
	_putchar('\n');
}
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
