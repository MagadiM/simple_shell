#include "shell.h"

/**
 * find_var - find the PATH variable in the environment list
 *
 * @var - string literal of the environment varaible
 * @env - the environment list
 * Return: string of the environment variable and its value
 */

char *find_var(char *var, char **env)
{
	int i = 0. ii = 0;

	if (!(var) || !(env))
		return NULL;

	while (env[ii] != NULL)
	{
		i = 0;
		while (var[i] != '\0' && var [i] == env[ii][i])
			i++;
		if (var[i] == '\0')
			return (env[ii]);
		ii++;
	}
	return (NULL);
}
