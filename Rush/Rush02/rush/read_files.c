/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_files.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davfern3 <davfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 15:59:23 by davfern3          #+#    #+#             */
/*   Updated: 2024/07/14 12:12:01 by davfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

void	ft_speputstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n')
	{
		while ((str[i] >= 48 && str[i] <= 57) || str[i] == 20 || str[i] == 58)
		{
			i++;
		}
		write(1, &str[i], 1);
		i++;
	}
}

int	number(int nb)
{
	int		file;
	char	buffer[256];
	int		current_line;
	int		i;
	int		line;
	ssize_t	bytesRead;

	file = open("numbers.dict", O_RDONLY);
	current_line = 0;
	i = 0;
	line = nb;
	while ((bytesRead = read(file, &buffer[i], 1)) > 0)
	{
		if (buffer[i] == '\n')
		{
			current_line++;
			if (current_line == line)
			{
				buffer[i + 1] = '\0';
				ft_speputstr(buffer);
				close(file);
				return (0);
			}
			i = 0;
		}
		else
			i++;
	}
	return (0);
}

