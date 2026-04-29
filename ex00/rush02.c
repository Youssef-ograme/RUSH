void ft_putchar (char c);
void print (int x, char f , char l)
{
	ft_putchar(f);
	int i = 0;
	while (i < x - 2)
	{
		ft_putchar('B');
		i++;
	}
	if (x > 1)
		ft_putchar(l);
	ft_putchar ('\n');
}

void rush (int x , int y)
{
	if (x <= 0 || y <= 0)
		return;
	int i = 0 , j;
	print(x,'A','A');
	while (i < y - 2)
	{
		j = 0;
		ft_putchar ('B');
		while (j < x - 2)
		{
			ft_putchar (' ');
			j++;
		}
		if (x > 1)
			ft_putchar ('B');
		ft_putchar ('\n');
		i++;
	}
	if (y > 1)
		print(x,'C','C');
}
