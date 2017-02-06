int	ft_atoi(char *str)
{
	int i;
	int sign;
	int stack;

	i = 0;
	sign = 1;
	stack = 0;
	if (*(str + i) == '-')
	{
		sign = -1;
		i++;
	}
	else if (*(str + i) == '+')
	{
		i++;
	}
	while(*(str + i) >= '0' && *(str + i) <='9')
	{
		stack = stack * 10 + *(str + i) - '0';
		i++;
	}
	return (stack * sign);
}
