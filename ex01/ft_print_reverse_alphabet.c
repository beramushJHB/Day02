/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beramush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 08:25:06 by beramush          #+#    #+#             */
/*   Updated: 2020/07/10 10:55:15 by beramush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar (char c);

void	ft_print_reverse_alphabet(void)
{
	char letter;
	letter = 'z';
	while(letter >= 'a')
{
	ft_putchar(letter);
	letter--;
	}
}
int main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}

