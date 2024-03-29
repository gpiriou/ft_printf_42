/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_print.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glpiriou <glpiriou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:46:10 by gpiriou           #+#    #+#             */
/*   Updated: 2022/12/09 17:17:08 by glpiriou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*p_config(va_list arg, struct s_struct *params)
{
	void			*ptr;
	unsigned long	ptr2;
	char			*str;
	char			*address;

	ptr = va_arg(arg, void *);
	ptr2 = (unsigned long)ptr;
	if (ptr2 == 0)
	{
		address = ft_strdup("(nil)");
		params->return_size += 5;
		return (address);
	}
	str = ft_itoa_base_lu("0123456789abcdef", ptr2);
	address = ft_strjoin("0x", str);
	free(str);
	params->format_len = ft_strlen(address);
	return (address);
}

void	p_print(struct s_struct *params, va_list arg)
{
	char	*ptr;
	int		i;

	ptr = p_config(arg, params);
	i = 0;
	if (!params->minus)
	{
		while (i++ < (params->width - params->format_len))
			ft_putchar_count(' ', params);
	}
	ft_putstr_fd(ptr, 1);
	params->return_size += params->format_len;
	if (params->minus && ft_strncmp(ptr, "(nil)", ft_strlen(ptr)))
	{
		while (i++ < (params->width - params->format_len))
			ft_putchar_count(' ', params);
	}
	free(ptr);
}
