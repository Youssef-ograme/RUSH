void ft_putchar (char c);
int main ();

void print (int x , char f , char l)
{
	int i = 0;
	ft_putchar (f);
	while (i < x - 2)
	{
		ft_putchar ('*');
		i++;
	}
	if (x > 1)
		ft_putchar (l);
	ft_putchar ('\n');
}

void rush (int x , int y)
{
	char f = '/' , l = '\\';
	print(x,f,l);
	int i = 0 ,j = 0;
	while (i < y - 2)
	{
		ft_putchar ('*');
		j = 0;
		while (j < x - 2)
		{
			ft_putchar (' ');
			j++;
		}
		if (x > 1)
			ft_putchar ('*');
		ft_putchar('\n');
		i++;
	}
	if (y > 1)
	{
		f = '\\' , l = '/';
		print(x,f,l);
	}
}

// 5,3
