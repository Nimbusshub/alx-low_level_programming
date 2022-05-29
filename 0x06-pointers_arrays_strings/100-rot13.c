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
	char encrypt[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char decrypt[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0, j;

	while (str[i])
	{
		j = 0;
		while (encrypt[j])
		{
			if (str[i] == encrypt[j])
			{
				str[i] = decrypt[j];
				break;
			}
			j++;
		}
		i++;
	}

	str[i] = '\0';
	return (str);
}
