/**
 * main - entry point
 * description: prints the alphabet in lowercase
 * followed by a new line, except q and e
 * Return: success
 */
int main(void)
{

	char la;

	for (la = 'a'; la <= 'z'; la++)
	{

		if (la != 'e' && la != 'q')
			putchar(la);

	}

	putchar('\n');

	return (0);

}
