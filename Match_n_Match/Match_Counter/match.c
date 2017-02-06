#include <stdio.h>

int		matchn(char *s1, char *s2)
{
	if (!(*s1) && !(*s2))
		return (1);
	if (*s2 == '*')
	{
		if (!(*s1))
			return (matchn(s1, s2 + 1));
		if (*s1)
			return (matchn(s1, s2 + 1) + matchn(s1 + 1, s2));
	}
	if (*s1 != *s2)
		return (0);
	if (*s1 == *s2)
		return (matchn(s1 + 1, s2 + 1));
	return (-1);
}
