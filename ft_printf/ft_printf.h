/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcortes- <rcortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 18:17:49 by rcortes-          #+#    #+#             */
/*   Updated: 2024/01/17 18:17:50 by rcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

# include <stdio.h>

//Aux Functions
int	ft_putchar(char c);
int	ft_putstr(char *str);
//
int	ft_itoa(int n);
int	ft_uitoa(unsigned int n);
//
int	ft_hexadecimal(unsigned int nb, char const *format);
int	ft_ulong_hexadecimal(unsigned long int nb, char const *format);
int	ft_hex_pointer(void *ptr);
//
int	ft_printf(const char *s, ...);
int	check_args(char c, va_list args);

#endif
