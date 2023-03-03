#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @str: string to be encoded
 * Return: pointer to the string encoded
 */
char *rot13(char *str)
{
	int index1 = 0, index2;
	char alphabet[52] = {'A', 'B', 'C', 'D', 'E', 'F', 'G',
		'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P',
		'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
	'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
	'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
	'w', 'x', 'y', 'z'};
	char keyrot13[52] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T',
		'U', 'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D',
		'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'n',
		'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
		'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
		'i', 'j', 'k', 'l', 'm'};

	while (str[index1])
	{
		if ((str[index1] >= 'A' && str[index1] <= 'Z') ||
				(str[index1] >= 'a' && str[index1] <= 'z'))
		{
			for (index2 = 0; index2 < 52; index2++)
			{
				if (str[index1] == alphabet[index2])
				{
					str[index1] = keyrot13[index2];
					break;
				}
			}
		}
		index1++;
	}
	return (str);
}