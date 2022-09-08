

void unsetenvironment(char *argc[])
{
	int result;

	result = unsetenv(argv[1]);
	if (result == (-1))
		perror("error");
}
