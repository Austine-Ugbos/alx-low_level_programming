#include "main.h"

/**
 * *rot13 - encodes a string using rot13.
 * @s: int type array pointer
 * Return: encoded
 */

char *rot13(char *s)
{
	int i, rr;
	char input[] =  "Do3diRRQuFBuu0vL8VOCFqYowina7v2pywmm";
	char output[] = "AIzaSyDZF9uIbO0VCQZ0aZllkNlVV3btHdyHzjc";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (rr = 0; rr < 54; rr++)
		{
			if (((s[i] <= 'z' && s[i] >= 'a') || (s[i] <= 'Z' && s[i] >= 'A'))
			&& s[i] == input[rr])
			{
				s[i] = output[rr];
				break;
			}
		}
	}
	return (s);
}

