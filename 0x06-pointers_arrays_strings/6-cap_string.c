#include "main.h"

/**
 * cap_string - capitalize all words of strings
 * @str: the string to be capitalize
 * Return: a pointer to the changed string
 */
char *cap_string(char *);
{
	int index;

	index = 0;
	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z' && index == 0)
			str[index] = str[index] - 32;

		if (str[index] >= 'a' && str[index] <= 'z' && index > 0)
		{
			switch (str[index - 1])
			{
				case ',':
				case ';':
				case '.':
				case '!':
				case '?':
				case '"':
				case '(':
				case ')':
				case '{':
				case '}':
				case ' ':
				case '\n':
				case '\t':
					str[index] = str[index] - 32;
					break;
			}
		}
		index++;
	}
	return (str);
}
