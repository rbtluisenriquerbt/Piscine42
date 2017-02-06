int		ft_count_fc(char *map)
{
	int i;

	i = 0;
	while(*(map + i) != '\n')
	{
		i++;
	}
	return (i);
}