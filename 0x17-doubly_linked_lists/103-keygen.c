#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * max_num - get the biggest number.
 * @usrn: username.
 * @len: username len.
 * Return: max number.
 */
int max_num(char *usrn, int len)
{
	int user_name, tmp = 0;
	unsigned int rand_num;

	user_name = *usrn;
	while (tmp < len)
	{
		if (user_name < usrn[tmp])
			user_name = usrn[tmp];
		tmp += 1;
	}
	srand(user_name ^ 14);
	rand_num = rand();
	return (rand_num & 63);
}

/**
 * mutliply_char - multiplies each char of username.
 * @usrn: username.
 * @len: username len.
 * Return: multiplied char.
 */
int mutliply_char(char *usrn, int len)
{
	int user_name, tmp;

	user_name = tmp = 0;
	while (tmp < len)
	{
		user_name = user_name + usrn[tmp] * usrn[tmp];
		tmp += 1;
	}
	return (((unsigned int)user_name ^ 239) & 63);
}

/**
 * random_char - generates a random char.
 * @usrn: username.
 * Return: random char.
 */
int random_char(char *usrn)
{
	int user_name, tmp;

	user_name = tmp = 0;
	while (tmp < *usrn)
	{
		user_name = rand();
		tmp += 1;
	}
	return (((unsigned int)user_name ^ 229) & 63);
}

/**
 * main - main function.
 * @argc: arguments count.
 * @argv: arguments vector.
 * Return: 0.
 */
int main(int argc, char **argv)
{
	char keygen[7];
	int len, user_name, tmp;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850};
	(void)argc;

	for (len = 0; argv[1][len]; len++)
		;
	keygen[0] = ((char *)alph)[(len ^ 59) & 63];
	user_name = tmp = 0;
	while (tmp < len)
	{
		user_name = user_name + argv[1][tmp];
		tmp = tmp + 1;
	}
	keygen[1] = ((char *)alph)[(user_name ^ 79) & 63];
	user_name = 1;
	tmp = 0;
	while (tmp < len)
	{
		user_name = argv[1][tmp] * user_name;
		tmp = tmp + 1;
	}
	keygen[2] = ((char *)alph)[(user_name ^ 85) & 63];
	keygen[3] = ((char *)alph)[max_num(argv[1], len)];
	keygen[4] = ((char *)alph)[mutliply_char(argv[1], len)];
	keygen[5] = ((char *)alph)[random_char(argv[1])];
	keygen[6] = '\0';
	for (user_name = 0; keygen[user_name]; user_name++)
		printf("%c", keygen[user_name]);
	return (0);
}
