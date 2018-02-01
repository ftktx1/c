/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft2_whitespaces.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 11:55:34 by kshimek           #+#    #+#             */
/*   Updated: 2018/01/19 12:50:38 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_whitespace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	else
		return (0);
}

int		ft_count_words(char *str)
{
	int i;
	int word_count;
	
	i = 0;
	word_count = 0;
	if (is_whitespace(str[i]) == 0)
		word_count++;
	while (str[i] != '\0')
	{
		if (is_whitespace(str[i]) == 1 && is_whitespace(str[i + 1] == 0));
			word_count++;
		i++;
	}
	return (word_count);
}

int		ft_word_len(int word_count, char *str)
{
	int i;
	int j;
	int word_len;
	char *word;
	char **array;

	i = 0;
	j = 0;
	word_len = 0;
	if (is_whitespace(str[i]) = 0)
	{
		array[j] = &str[i];
		j++;
		word_len++;
	}
	while (str[i] != '\0')
	{
		word_len = 0;
		while (is_whitespace(str[i]) == 0)
			word_len++;
		if (is_whitespace(str[i]) == 0 && (is_whitespace(str[i + 1]) == 1 || str[i + 1] == '\0')
		{
			j++;
			array[j] = &str[i + 1];
		}
		else if (is_whitespace(str[i]) == 1 && is_whitespace(str[i + 1]) == 1)
			word_len++;
		i++;
	}
}

char	**ft_split_whitespaces(char *str)
{
	ft_count_word(str);

}
