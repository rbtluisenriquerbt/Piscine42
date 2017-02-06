int 	ft_atoi(char *str, int max)
{
	int i;
	int stack;

	i = 0;
	stack = 0;
	while (*(str + i) >= '0' && *(str + i) <= '9' && i < max)
	{
		stack = stack * 10 + *(str + i) - '0';
		i++;
	}
	return (stack);
}