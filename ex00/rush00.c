void 	ft_putchar (char c);
int 	main ();

void print (int x)
{
	int i = 0;
	ft_putchar ('o');
	while (i < x - 2)
	{
		ft_putchar ('-');
		i++;
	}
	if (x > 1)
		ft_putchar ('o');

	ft_putchar ('\n');
}

void rush (int x , int y)
{
	if (x <= 0 || y <= 0)
		return;
	print(x);
	int i = 0 , j = 0;
	while (i < y - 2)
	{
			ft_putchar('|');
			j = 0;
			while (j < x - 2)
			{
				ft_putchar (' ');
				j++;
			}
			if (x > 1)
				ft_putchar ('|');
			ft_putchar ('\n');
		i++;
	}
	if (y > 1)
		print(x);
}
