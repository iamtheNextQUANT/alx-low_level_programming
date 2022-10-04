#include "main.h"

#include <stdio.h>
#include <stdlib.h>

void mem_clear(char **s)
{
		/* Loop through and free up each row of memory, then free up the block itself */
}

/**
 *  * word_count - Counts number of indexes in a string
 *   * @str: String being counted
 *    * Return: Number of indexes
 *     */
int word_count(char *str)
{
		/* Loop through given string */
			/* If the current index is anything other than a space, increment counter by 1 */
				/* Check the next index(es) for either space or null byte */
				/* If the end of the string is reached, exclude the null byte itself by decrementing by 1 */
		/* Return the word count*/
}

/**
 *  * strtow - "Master function": Splits a string such that each word gets its own line
 *   * @str: String input
 *    * Return: The pointer to the very first index of the list of words
 *     */
char **strtow(char *str)
{
int i, j = 0;
	int input_length, word_size, array_row = 0, array_column;
		char **new_str = NULL;
}
	/* Return our newly split up 2d array of strings */
}
