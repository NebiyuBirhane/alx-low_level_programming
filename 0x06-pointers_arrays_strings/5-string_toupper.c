#include "main.h"

/**
 * string_toupper - changer all lowercase to uppercase
 * @n: pointer
 * Return: n
 */
char *string_toupper(char *)
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
