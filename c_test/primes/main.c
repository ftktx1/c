/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 11:05:15 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/26 14:20:23 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *primes(void)
{
	int i;
	int j;
	int array_index;
	int prime_nums[1000];

	i = 3;
	j = 2;
	array_index = 1;
	//prime_nums = (int *)malloc(sizeof(int) * 1);
	prime_nums[0] = 2;
	prime_nums[1] = 3;
	while (i <= 2000)//2147483647)
	{
		while (j < (i / 2) + 1)
		{
			if (i % j == 0)
				break ;
			if (j >= i / 2)
			{
				array_index++;
				//prime_nums = (int *)malloc(sizeof(int) * array_index + 1);
				prime_nums[array_index] = i;
				//printf("%i, ", prime_nums[array_index]);
			}
			j++;
		}
		i = i + 2;
		j = 2;
	}
	    
	i = 0;
	while (prime_nums[i] != 0)
    {
        printf("%i, ", prime_nums[i]);
        i++;
    }
	return (prime_nums);
}

int main(void)
{
	static int *prime_nums[1000];

	//prime_is = primes();
	primes();	
	int i = 0;
	//printf("%i", prime_is[3]);
	/*while (prime_is[i]) 
	{
		printf("%i, ", prime_is[i]);
		i++;
	}*/
	return (0);
}
