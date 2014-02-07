/*--Boyermor.c-----------------------------------
 *Boyer-Moore string search routine
 *	Preprocessor  switches: if #define:
 *		DEBUG will cause the search routine to dump its table
 * 		at various times---this is useful when trying to understand
 *		how MatchJump is generated
 *	DRIVER will cause a test driver to be compiled
 */

#define DRIVER 1

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

#define AlphabetSize (UCHAR_MAX + 1)	/*For porability*/

#ifndef max 
#define max(a,b) ((a)>(b)?(a):(b))
#endif

char *BoyerMoore(const char *String,
				 const char *Text,
				 size_t TextLen)
{
	unsigned CharJump
}