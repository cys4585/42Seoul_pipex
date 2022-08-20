/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_command.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngcho <youngcho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 13:00:42 by youngcho          #+#    #+#             */
/*   Updated: 2022/08/20 13:18:23 by youngcho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXECUTE_COMMAND_H
# define EXECUTE_COMMAND_H

# include <unistd.h>
# include <stdlib.h>

void	execute_cmd_and_pass_output(char *cmd, char *envp[]);
void	execute_last_cmd(char *cmd, char *envp[]);

#endif