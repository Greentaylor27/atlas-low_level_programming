#include "main.h"

/**
 * rev_string - this function prints a string in reverse
 *
 * @s: ponter that points to a string
 */
void rev_string(char *s)
{
	int i, l;
	char t;

	if (s == NULL)
	{
		return;
	}

	int l = 0;
	{
		while (s[l] != '\0')
		{
			l++;
		}

		for (i = 0; i < l / 2; i++)
		{
			t = s[i];
			s[i] = s[l - i - 1];
			s[l - i - 1] = t;
		}
	}
}
