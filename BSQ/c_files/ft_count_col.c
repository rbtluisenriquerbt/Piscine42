int	ft_count_col(char *map)
{
	int i;

	i = 0;
	while(*(map + i) != '\n')
		i++;
	return (i);
}