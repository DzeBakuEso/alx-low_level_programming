#include "main.h" /* Include the header file containing function prototypes */

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer, from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hour, minute; /* Declare variables for hour and minute */

	for (hour = 0; hour < 24; hour++) /* Loop through hours from 0 to 23 */
	{
		for (minute = 0; minute < 60; minute++) /* Loop through minutes from 0 to 59 */
		{
			_putchar((hour / 10) + '0'); /* Print tens digit of hour */
			_putchar((hour % 10) + '0'); /* Print ones digit of hour */
			_putchar(':'); /* Print colon separator */
			_putchar((minute / 10) + '0'); /* Print tens digit of minute */
			_putchar((minute % 10) + '0'); /* Print ones digit of minute */
			_putchar('\n'); /* Print newline character */
		}
	}
}

