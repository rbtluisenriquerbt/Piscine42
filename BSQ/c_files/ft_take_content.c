char 	*ft_take_content(char *map)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(*(map + i) != '\n')
	{
		i++;
	}
	i++;
	while(*(map + i) != '\0')
	{
		*(map + j) = *(map + i);
		i++;
		j++;
	}
	*(map + j) = '\0';
	return (map);
}	