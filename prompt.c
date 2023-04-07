/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prompt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamal <ojamal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 09:28:52 by ojamal            #+#    #+#             */
/*   Updated: 2023/04/07 01:15:50 by ojamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	*get_prompt()
{
	char	*cwd;
	char	*input;

	while (1)
	{
    	cwd = getcwd(NULL, sizeof(cwd));
		cwd = ft_strjoin(cwd, "$>");
		input = readline(cwd);
		if (check_quote(input))
			printf("minishell: Syntax Error\n");
		if (input && *input)
			add_history(input);
	}
	return (input);
}


int	get_cmd()
{
	char	*cmd;
	cmd = get_prompt();
	return 0;
}