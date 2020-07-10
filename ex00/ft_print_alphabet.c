/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beramush <beramush@student.wethinkcode.co.za>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 17:27:13 by beramush          #+#    #+#             */
/*   Updated: 2020/07/09 17:58:36 by beramush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_putchar(void)
{
	write(1,&c,1);
}
void ft_print_alphabet(void)
{
	char letter;

	 letter = 'a';
	 while(letter <= 'z')
	 {
		ft_putchar(letter);
		letter++;
	 }
}
int main()
{ 
	ft_print_alphabet();
	return(0);
}
