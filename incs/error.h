/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngcho <youngcho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 19:19:43 by youngcho          #+#    #+#             */
/*   Updated: 2022/08/18 16:05:44 by youngcho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERROR_H
# define ERROR_H

# include <stdio.h>
// perror
# include <stdlib.h>
// exit
# include <unistd.h>
// write

typedef enum e_error
{
	CUS_REQ_ARG,
	ACCESS,
	OPEN,
	DUP,
	PIPE,
	FORK
}	t_error;

void	exit_with_perror(char *str);
void	check_error(t_error err, char *str, int ret);

#endif