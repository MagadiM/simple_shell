#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 1024


int main(int ac, char **av)
{
	char line[MAX_LENGTH];

	while (1)
	{
		printf("$> ");
		if (!fgets(line, MAX_LENGTH, stdin))break;
		system(line);
	}
	return 0;
}
