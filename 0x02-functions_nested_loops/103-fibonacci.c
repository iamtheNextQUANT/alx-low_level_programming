#include "main.h"

#include <stdio.h>

/**
 * main -check the code
 *
 * Return: Always 0
 *
 */

int main(void)
{
		int a = 1, b = 2, num = 0, total = 0, i;

			for (i = 0; b < 4000000; i++)
					{
								if (i % 2 == 0)
												total = total + b;
										num = a + b;

												a = b;
														b = num;
															}


				printf("%d\n", total);
					return (0);
}
