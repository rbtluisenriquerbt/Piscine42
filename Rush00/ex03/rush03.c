int		ft_putchar(char c);

void	logic_b(int width, int t_width)
{
	width = t_width;
	while (width > 0)
	{
		if ((width == t_width) || (width == 1))
			ft_putchar('B');
		else
			ft_putchar(' ');
		width--;
	}
}

void	logic_a(int width, int t_width, int line)
{
	width = t_width;
	while (width > 0)
	{
		if ((width == t_width) && (line == 1))
			ft_putchar('A');
		else if ((width == t_width) && (line == 0))
			ft_putchar('A');
		else if ((width == 1) && (line == 1))
			ft_putchar('C');
		else if ((width == 1) && (line == 0))
			ft_putchar('C');
		else
			ft_putchar('B');
		width--;
	}
}

void	rush(int width, int height)
{
	int t_width;
	int t_height;

	t_width = width;
	t_height = height;
	while (height > 0)
	{
		if (height == t_height)
			logic_a(width, t_width, 1);
		else if (height == 1)
			logic_a(width, t_width, 0);
		else
			logic_b(width, t_width);
		ft_putchar('\n');
		height--;
	}
}
