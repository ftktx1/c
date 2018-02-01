int ft_putchar(char c);

void print_top(int x)
{
    int x_counter;
	
	x_counter = 0;
	if (x > 0)
        ft_putchar('/');
    if (x > 2)
    {
        x_counter = x - 2;
        while (x_counter > -1)
        {
            ft_putchar('*');
            x_counter--;
        }
    }
    if (x >= 2)
        ft_putchar('\\');
	ft_putchar('\n');
	return;
}

void print_middle(int x, int y)
{
	int x_counter;

	x_counter = 0;
	ft_putchar('*');
	if (x > 2 && y > 2)
	{
		x_counter = x - 2;
		while (x_counter > -1)
		{
			ft_putchar(' ');
			x_counter--;
		}
	}
	if (x > 1)
		ft_putchar('*');
	ft_putchar('\n');
	return;
}

void print_bottom(int x)
{
	int x_counter;

    x_counter = 0;
    if (x > 0)
        ft_putchar('\\');
    if (x > 2)
    {
        x_counter = x - 2;
        while (x_counter > -1)
        {
            ft_putchar('*');
            x_counter--;
        }
    }
    if (x >= 2)
        ft_putchar('/');
	ft_putchar('\n');
	return;
}

void rush02(int x, int y)
{
	int x_counter;
	int y_counter;

	x_counter = 0;
	y_counter = 0;

	if (y < 1 || x < 1)
		return;
	print_top(x);
	y_counter = y - 2;
	if (y>2)
	{
		while (y_counter > -1)
		{
			print_middle(x, y);
			y_counter--;
		}
	}
	if (y>1)
		print_bottom(x);
	return;
}
