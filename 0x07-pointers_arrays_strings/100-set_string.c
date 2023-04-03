#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: pointer
 * @to: char to be set
 * Return:
 */

void set_string(char **s, char *to)
{
	int len = strlen(to);
	*s = (char *) malloc((len + 1) * sizeof(char));
	strcpy(*s, to);
}
