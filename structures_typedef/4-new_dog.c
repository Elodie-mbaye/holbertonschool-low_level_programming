#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new struct of type dog
 * @name: struct parameter name
 * @age: struct parameter age
 * @owner: struct parameter owner
 * Return: returns pointer to a new dog object
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_length, owner_length, i;
	dog_t *new_dog;

	name_length = owner_length = 0;

	while (name[name_length++])
		;
	while (owner[owner_length++])
		;
	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(name_length * sizeof(new_dog->name));

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < name_length; i++)
		new_dog->name[i] = name[i];
	new_dog->age = age;

	new_dog->owner = malloc(owner_length * sizeof(new_dog->owner));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < owner_length; i++)
		new_dog->owner[i] = owner[i];
	return (new_dog);
}
