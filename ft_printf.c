/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanley <mmanley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/06 15:02:50 by mmanley           #+#    #+#             */
/*   Updated: 2018/03/07 14:50:44 by mmanley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <string.h>

void	affichage(t_info data)
{
	printf("\n*************************-1-,\n---DATA---\nTYPE : %c\n", data.type);
	ft_putstr("FLAGS : ");
	ft_print_bits(data.flags, 8);
	printf("\n");
	ft_putstr("CONV : ");
	ft_print_bits(data.conv, 8);
	printf("\nMFIELD : %d\n", data.mfield);
	printf("PREC : %d\n\n", data.prec);
	printf("L : %d ---- H : %d\n*************************-2-'\n\n", data.nbr_l, data.nbr_h);
}

/*
	CHANGE STATIC SIZE, DO A DYNAMIC ALLOCATION
*/

int	show_it_all(char *s1, int size, int end, int len)
{
	char			test[len + 1];
	static char		*finl;
	char			*tmp;


	if (!finl)
		finl = (char*)malloc(sizeof(char) * size + 1);
	//printf ("SIZE : %s\n",s1);
	if (end == 1)
	{
		//printf("FINAL SIZE : %d\n", size);
		finl[size] = '\0';
		write(1, finl, size);
		//printf("END\n");
		free(finl);
		ft_bzero(finl, size);
		finl = NULL;
	}
	else
	{
		tmp = ft_strncpy(test, s1, len);
		//printf("\nNBRS : _%s_\n", tmp);
		finl = ft_strjoin_free(finl, tmp, 1);
		//printf("_%s_\n", finl);
	}
	return (size);
}

//char	*recup()

int		ft_printf_2(va_list *arg, int *size, char *s)
{
	t_info	data;
	int		x;
	int		ret;
	char	*tmp;

	x = 0;
	ret = 0;
	tmp = NULL;
	//printf("%zu\n", ft_strlen(s));
	while (s[ret + x])
	{
		while (s[ret + x] && s[ret + x] != '%')
			x++;
		buff_rend(&s[ret], x, 0);
		if (s[ret + x] && data_init(&arg, &data, &s[ret + x]) >= -1)
		{
		//	affichage(data);
			if (!(data.flags & STOP_D))
			{
				if (data.conv & STOP_D)
					tmp = nbr_manager(&arg, &data);
				else
					tmp = chr_manager(&arg, &data);
			}
			else
			{
				tmp = ft_memalloc(1);
				tmp[0] = data.type;
				tmp[1] = '\0';
				data.type = 'c';
				//data.flags = pars_check(data), data.type, data.conv);
			}
			tmp = flag_manager(&data, tmp);
			x += data.cmd_size + 1;
		}
		else if (s[ret + x])
			return (-1);
		ret += x;
		x = 0;
	}
	//printf("\nJAI FINI MES BETISES !!!!!!!\n");
	return (*size);
}

int		ft_printf(char *s, ...)
{
	va_list	arg;
	int		size;

	size = 0;
	if (!s && !*s)
		return (-1);
	va_start(arg, s);
	if (ft_printf_2(&arg, &size, s) == -1)
		return (-1);
	buff_rend(NULL, 0, 1);
	//while(1);
	//show_it_all(NULL, size, 1, 0);
	va_end(arg);
	return (size);
}
/*
int		ft_printf_2(va_list *arg, int *size, char *s)
{
	t_info	data;
	int		x;
	int		ret;
	char	*tmp;

	x = 0;
	ret = 0;
	tmp = NULL;
	//printf("%zu\n", ft_strlen(s));
	while (s[ret + x])
	{
		while (s[ret + x] && s[ret + x] != '%')
			x++;
		//printf("S[RET] : _%s_ %d\n", &s[ret], ret);
		write(1, &s[ret], x);
		//write(1, "\n", 1);
		*size = show_it_all(&s[ret], *size + x, 0, x);
		if (s[ret + x] && data_init(&arg, &data, &s[ret + x]) >= -1)
		{
		//	affichage(data);
			if (!(data.flags & STOP_D))
			{
				if (data.conv & STOP_D)
					tmp = nbr_manager(&arg, &data);
				else
					tmp = chr_manager(&arg, &data);
			}
			else
			{
				tmp = ft_memalloc(1);
				tmp[0] = data.type;
				tmp[1] = '\0';
				data.type = 'c';
				//data.flags = pars_check(data), data.type, data.conv);
			}
			tmp = flag_manager(&data, tmp);
			//printf("TMPEND : _%s_\n", tmp);
			if (tmp)
				*size = show_it_all(tmp, ft_strlen(tmp) + *size, 0, ft_strlen(tmp));
			x += data.cmd_size + 1;
		}
		else if (s[ret + x])
			return (-1);
		ret += x;
		x = 0;
	}
	//printf("\nJAI FINI MES BETISES !!!!!!!\n");
	return (*size);
}*/
