#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/** 
  * *new_dog
	* @name: Dog's name
  * @age: Dog's age
	* @owner: Dog's owner
  *
	* Return: Dog structure
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d1;

	d1 = malloc(sizeof(d1));
	d1->name = name;
	d1->age = age;
	d1->owner = owner;
	if (d1 == NULL)
		return (NULL);
	return (d1);
}

/**
 * _strlen - Returns a string's length
 * @str: The given string
 *
 * Return: length
 */

int _strlen(char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
		{

		}
	return (length);
}

/**
  * copy - Copy a string
  * @cop_string: Copied string
  * @string: String
  *
  * Return: copied string
  */

char *copy(char *cop_string, char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		cop_string[i] = string[i];
	}

	cop_string[i++] = '\0';

	return (cop_string);
}