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
	return (d1);
}
