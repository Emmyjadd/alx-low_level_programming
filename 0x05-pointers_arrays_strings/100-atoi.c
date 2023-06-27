#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	/* Handle sign */
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}

	/* Convert string to integer */
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');

			/* Check for integer overflow */
			if ((sign == 1 && result < 0) || (sign == -1 && result > 0))
			{
				/* Adjust result for INT_MIN */
				if (sign == -1 && result > 0)
					result = -result;

				break;
			}
		}
		else if (result != 0)
		{
			/* Stop conversion if non-digit character is encountered after digits */
			break;
		}

		i++;
	}

	return (result);
}

