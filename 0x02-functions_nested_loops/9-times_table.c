#include "main.h"

/**
 * times_table - Prints the 9 times table.
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0'); /* Print the first digit (always 0) */
		_putchar(','); /* Print the comma separator */

		for (j = 1; j <= 9; j++)
		{
			result = i * j;

			/* Print the space separator */
			if (result <= 9)
				_putchar(' ');
			else
				_putchar(result / 10 + '0');

			_putchar(result % 10 + '0'); /* Print the second digit */
			_putchar(','); /* Print the comma separator */
			_putchar(' '); /* Print the space separator */
		}

		/* Print the last digit of the row */
		result = i * j;
		_putchar(result / 10 + '0');
		_putchar(result % 10 + '0');

		_putchar('\n'); /* Move to the next line */
	}
}

