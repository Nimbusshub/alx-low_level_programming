#include "main.h"
/**
 * leet - this program creates a function that substitute
 * a or A for 4 ascii 52, e or E for 3 ascii 51, o or  O for 0 ascii
 * 48, t or T for 7 ascii 55 and l or L for 1 ascii 49
 * @m: is a pointer that points to an array
 * Return: The numbers for the alphabets respectively (Success)
 */
char *leet(char *m)
{
	int count = 0;
	char uppercase[] = "AEOTL";
	char lowercase[] = "aeotl";
	char number[] = "43071";
	int i;

	while (*(m + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if ((*(m + count) == uppercase[i]) || (*(m + count) == lowercase[i]))
			{
				*(m + count) = number[i];
				break;
			}
		}
		count++;
	}
	return (m);
}
