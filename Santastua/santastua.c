int		ft_putchar(char c);

void	draw_line(int line, int size, int *ptr_size)
{
	int t_size;
	int leftspaces;
	int rad;
	int offset;
	int off_rad;
	int curr_size;
	int tot_offset;
	int pipes;

	t_size = *ptr_size;
	curr_size = size;
	size = size - 1;
	if (size == 1)
	{
		off_rad = 0;
		pipes = 0;
	}
	if ((size % 2) == 0)
	{
		//off_rad = ((size / 2) + 1)  * ((size / 2) + 2) - ((size / 2)  + 3) + ((size + 2) / 2) + 1;
		off_rad = ((size * size) + 6 * size + 4) / 4;
		pipes = size + 1;
	}
	else
	{
		//off_rad = (((size - 1)/ 2) + 1)  * (((size - 1) / 2) + 2) - 2 + ((size + 1) / 2) + 2;
		off_rad = (size + 5) * (size + 1) / 4;
		pipes = size;
	}
	offset = (((size + 2) * (size + 3)) / 2 - 3) + off_rad;
	if ((t_size % 2) == 0)
		//rad = ((t_size / 2) + 1)  * ((t_size / 2) + 2) - ((t_size / 2)  + 3);
		rad = ((t_size * t_size) + 4 * t_size - 4) / 4;
	else
		//rad = (((t_size - 1)/ 2) + 1)  * (((t_size - 1) / 2) + 2) - 2;
		rad = (t_size + 5) * (t_size - 1) / 4;
	leftspaces = (((t_size + 2) * (t_size + 3)) / 2 - 3) + rad - line - offset;
	while (leftspaces > 0)
	{
		ft_putchar(' ');
		leftspaces--;
	}
	ft_putchar('/');
	offset = (offset * 2) - 1 + line * 2 ;
	tot_offset = offset;
	while (offset > 0)
	{
		if((t_size == curr_size) && (offset > (((tot_offset -  pipes) / 2))) && (offset < (((tot_offset + pipes) / 2)+1)) && (line > curr_size - pipes + 1))
		{
			if (pipes == 3)
				ft_putchar('|');
			else if	((line == curr_size - pipes + 1 + ((pipes + 1 ) / 2)) && (offset > (((tot_offset - pipes) / 2) + 1)) && (offset < (((tot_offset + pipes) / 2) - pipes + 3)))
				ft_putchar('$');
			else
				ft_putchar('|');
		}
		else
			ft_putchar('*');
		offset--;
	}
	ft_putchar('\\');
	ft_putchar('\n');
}

void	draw_block(int lines, int size, int *ptr_size)
{
	int line;

	line = lines - 1;
	if (line > 0 )
	{
		draw_block(line, size, ptr_size);
	}
	draw_line(line, size, ptr_size);
}

void	drawing(int size, int *ptr_size)
{
	int i;
	int lines;
	
	i = size - 1;
	lines = size + 2;
	if (i > 0)
	{
		drawing(i, ptr_size);
	}
	draw_block(lines, size, ptr_size);
}

void	santastua(int size)
{
	int t_size;
	int *ptr_size;
	
	if(size <= 0)
	{
		ft_putchar('\n');
	}
	else
	{
		t_size = size;
		ptr_size = &t_size;
		drawing(size, ptr_size);
	}
}
