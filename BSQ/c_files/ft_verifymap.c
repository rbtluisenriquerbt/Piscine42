int		ft_verifymap(char *map, int nrow_info, int nrow, char *emp_obs_ful)
{
	int i;

	i = 0;
	if (nrow_info == 0 || nrow == 0)
		return (0);
	else if (nrow_info != nrow)
		return (0);
	while(*(map + i) != '\0')
	{
		if(*(map + i) == *(emp_obs_ful + 0) || *(map + i) == *(emp_obs_ful + 1) || *(map + i) == '\n')
			i++;
		else
			return (0);
	}
	return (1);
}