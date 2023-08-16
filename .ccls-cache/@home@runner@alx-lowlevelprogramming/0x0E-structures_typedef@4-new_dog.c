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
  * _strcpy - Copy a string
  * @dest: Destination value
  * @src: Source value
  *
  * Return: the pointer to dest
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