char g_empt_char;
char g_obst_char;
char g_full_char;

void	ft_putchar (char c);

int		calc_x(int cursor, int q_col)
{
	return (cursor % (q_col + 1));
}

int		calc_y(int cursor, int q_col)
{
	return (cursor / (q_col + 1));
}

int		ft_verify_sqr_pt_fd(int ver_point, int sqr, char *str, int q_col)
{
	int x;
	int y;
	int corridor;
	int left;
	int rigth;
	int top;
	int bottom;

	corridor = 0;
	x = calc_x(ver_point, q_col); 										//Calculate the current  x point where start printing
	y = calc_y(ver_point, q_col);										//Calculate the current  y point where start printing
	left = x;															//Calculate the left side
	rigth = x + sqr - 1;												//Calculate the right side
	top = y;															//Calculate the top side
	bottom = y + sqr - 1;												//Calculate the bottom side
	while(*(str + corridor) != '\0')									// Run trough all the map
	{
		x = calc_x(corridor, q_col);									// Calculate the current cursor
		y = calc_y(corridor, q_col);
		if (x >= left && x <= rigth && y >= top
			&& y <=bottom && *(str + corridor) == g_empt_char)					// If the cursor is inside the probable square
			ft_putchar(g_full_char);
		else
			ft_putchar(*(str + corridor));
		corridor++;
	}
	return(1);
}

int		ft_verify_sqr_pt(int ver_point, int sqr, char *str, int q_col)
{
	int x;
	int y;
	int corridor;
	int left;
	int rigth;
	int top;
	int bottom;
	int value;

	value = 0;	
	corridor = ver_point;
	x = calc_x(ver_point, q_col);											//Calculate the current  x point where you want to verify where an square can fit
	y = calc_y(ver_point, q_col);											//Calculate the current  y point where you want to verify where an square can fit

	left = x;																//Calculate the left side
	rigth = x + sqr - 1;													//Calculate the right side
	top = y;																//Calculate the top side
	bottom = y + sqr - 1;													//Calculate the bottom side

	while(*(str + corridor) != '\0')										// Run trough all the map
	{
		x = calc_x(corridor, q_col);										// Calculate the current cursor
		y = calc_y(corridor, q_col);
		if (x >= left && x <= rigth && y >= top && y <=bottom)				// If the cursor is inside the probable square
		{
			if(*(str + corridor) == g_empt_char) 									// If is free
				value = 1;													//Put value as 1
			else
				return (0);
		}
		corridor++;
	}
	if (value == 1)															// If it is posible to draw a square
	{
		ft_verify_sqr_pt_fd(ver_point, sqr, str, q_col);
		return(1);															//So draw it
	}
	else 
		return (0);															// Else just return 0 and keep lookig

}

int		ft_verify_sqr(int sqr, char *str, int q_col, int q_row)
{
	int	ver_point;
	int x;
	int y;

	ver_point = 0;
	while(*(str + ver_point) != '\0')										//Verify the current verification point is not null
	{
		x = calc_x(ver_point, q_col); 										//Calculate the current  x point where you want to verify where an square can fit
		y = calc_y(ver_point, q_col); 										//Calculate the current  y point where you want to verify where an square can fit
		if((x + sqr - 1 < q_col) && (y + sqr - 1 < q_row)) 					// Verify whether an square could posibly exist
		{
			if(ft_verify_sqr_pt(ver_point, sqr, str, q_col)) 		// If an square fit then 
			{
				return(1); 													// Return 1
			}
		}
		ver_point++;														// Run to verify a square trough all the points
	}
	return(0);
}

int		ft_draw(char *str, int q_col, int q_row, char *g_emp_obs_ful)
{
	int sqr;

	g_empt_char = g_emp_obs_ful[0];
	g_obst_char = g_emp_obs_ful[1];
	g_full_char = g_emp_obs_ful[2];

	sqr = q_row;															// By default our max square size if the height
	if (q_col < q_row)														// If the width is smaller than the height then
		sqr = q_col;														// our max square size if the width
	while (sqr > 0)															// Verify that our required square is not null
	{
		if (ft_verify_sqr(sqr, str, q_col, q_row))							//If an square can fit then 
			return (1);														// Return an string with an square drawed
		sqr--;																// Look for an smaller square
	}
	return (0);
}