/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beramush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 10:41:59 by beramush          #+#    #+#             */
/*   Updated: 2020/07/10 13:06:05 by beramush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char letter;

	 letter = 'a';
	 while(letter <= 'z')
	 {
		ft_putchar(letter);
		letter++;
	 }
}


