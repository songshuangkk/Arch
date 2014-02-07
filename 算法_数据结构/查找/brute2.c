#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DRIVER 1


char * BruteSearch( const char *text, const char *string )
{
	int len = strlen( string );

	/*the table. "static" assures its initialized to '\0's*/
	static char lookup[10001];
	lookup[0] = 1;
	lookup[(unsigned char)(*string)] = 2;

	for (;;text++)
	{
		switch( lookup[(unsigned char)(*text)])
		{
			case 0:
				break;
			case 1:
				return NULL;
			case 2:
				if (strncmp(string+1,text+1, len-1) == 0)
				{
					return ((char*)text);
				}
				break;
			default:
				break;
		}
	}
	return NULL;
}

int main(int argc, char *argv[])
{
	char *search_for, *filename, *site;
	FILE *fin;
	char *buffer;

	if ( argc < 3 )
	{
		fprintf( stderr,
			  		"Error! Usage:BRUTE1 string filename\n" );
		return EXIT_FAILURE;
	}
	else
	{
		search_for = argv[1];
		filename   = argv[2];
	}

	if (( fin = fopen( filename, "rt" )) == NULL )
	{
		fprintf(stderr, "Error:Cannot open %s\n", filename);
		return EXIT_FAILURE;
	}

	buffer = (char *)calloc( 1, 10001 );
	if ( buffer == NULL )
	{
		fprintf(stderr, "Error! Cannot allocate buffer space.\n");
		return EXIT_FAILURE;
	}
	fread( buffer, 10000, 1, fin );
	site = BruteSearch ( buffer, search_for );

	if (site == NULL)
	{
		printf("%s NOT found\n", argv[1]);
	}
	else
	{
		char solution[31];
		strncpy( solution, site, 30 );
		solution[30] = '\0';

		printf("\nFound:\n%s\n", solution);
	}

	fclose( fin );
	return EXIT_SUCCESS;
}
