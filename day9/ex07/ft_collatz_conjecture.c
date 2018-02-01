unsigned int ft_collatz_conjecture(unsigned int base)
{
	if (base = 1)
		return (1);
	if (base % 2 = 0)
		ft_collatz_conjecture(base / 2);
	else
		ft_collatz_conjecture((base * 3) + 1);
}
