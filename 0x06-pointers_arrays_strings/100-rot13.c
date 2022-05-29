#include "main.h"
/**
 * rot13 - uses Ceaser cipher ROT 13 to encrypt
 * and decrypt a plaintext to ciphertext.
 * @str: string to encrypt
 *
 * Return: encrypted or decrypted text (success)
 */

char *rot13(char *str)
{
	char upperCode[] = "ABCDEFGHIJKLM";
	char upperRot[] = "NOPQRSTUVWXYZ";
	char lowerCode[] = "abcdefghijklm";
	char lowerRot[] = "nopqrstuvwxyz";
	int i = 0, j;

	while (str[i])
	{	j = 0;

		while (j < 13)
		{
			if (str[i] == upperCode[j])
			{
				str[i] = upperRot[j];
				break;
			}
			else if (str[i] == upperRot[j])
			{
				str[i] = upperCode[j];
				break;
			}
			else if (str[i] == lowerCode[j])
			{
				str[i] = lowerRot[j];
				break;
			}
			else if (str[i] == lowerRot[j])
			{
				str[i] = lowerCode[j];
				break;
			}
			j++;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}
