#include "main.h"

/*
 * alphabetic characters
 */


int  _isalpha(int c)
{
	if((c >64 && c< 91) || (c >96 && c<12))

		return(1);
	else
		return(0);
}
