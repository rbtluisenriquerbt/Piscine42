int	ft_count_row(char *map)
{
	int i;
	int row;

	i = 0;
	row = 0;
	while(*(map + i) != '\0')
	{
		if(*(map + i) == '\n')
		{
			row++;
		}
		i++;
	}
	return (row);
}