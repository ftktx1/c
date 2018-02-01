/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 15:36:15 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/18 15:36:18 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_whitespace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	else
		return (0);
}

char	**ft_split_whitespaces(char *str)
{
	int		i; //index of each char of the input str
	int		j; //index of each char in that word
	int		k; //count of words
	int		l; //number of whitespace chars
	char	**words; //placeholder 
	char	*word_start; //pointer to word start
	char	*word_end; //pointer to word end
	char	**return_array[(sizeof(str) / 2) + 1]; //max number of words possible in a given unknown string

	i = 0;
	k = 0;
	while (str)
	{
		if (is_whitespace(str[i]) == 0)
		{
			j = 0;
			word_start = &str[i];
			while (is_whitespace(str + 1) == 0)
				i++;
			j = i;
			k++;
			return_array[k] = word_start + j;
			return_arary[k][word_start + j + 1] = '\0';
		}
		else 
		{
			i++;
			l++;
		}
	}
	words = (char *)malloc(sizeof(char) * ((i - l) + k)) // total input chars minus whitespace chars in that str plus number of words (one extra char for each null terminator)
	k = 0; // reset word count
	while (return_array[k])
		words[k] = return_array[k];
	return (words);
}
