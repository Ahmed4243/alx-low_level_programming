#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_dog - Prints dog structure
	* @d: The Dog structure
  *
	* Return: void
  */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			printf("Name: (nill)\n");
		else if (d->age == 0)
			printf("Age: %d", 0);
		else if (d->owner == NULL)
			printf("Owner: (nill)\n");
	}
}
