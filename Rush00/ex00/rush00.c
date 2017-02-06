int		ft_putchar(char c);

void	logic_b(int width, int t_width)
{
	width = t_width;
	while (width > 0)
	{
		if ((width == t_width) || (width == 1))
			ft_putchar('|');
		else
			ft_putchar(' ');
		width--;
	}
}

void	rush(int x, int y)
{
	int t_width;
	int t_height;

	t_width = x;
	t_height = y;
	while (y > 0)
	{
		if ((y == t_height) || (y == 1))
		{
			x = t_width;
			while (x > 0)
			{
				if ((x == t_width) || (x == 1))
					ft_putchar('o');
				else
					ft_putchar('-');
				x--;
			}
		}
		else
			logic_b(x, t_width);
		ft_putchar('\n');
		y--;
	}
}
