#include "dog.h"

/**
 *	_strcpy - read description
 *
 *	@dest: a pointer to destination.
 *	@src: a pointer to source.
 *	Description: function that copies the string pointed to by src,
 *		including the terminating null byte (\0),
 *		to the buffer pointed to by dest.
 *	Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}


/**
 *	_strlen - read description
 *
 *	@s: a pointer to a string.
 *	Description: function that returns the length of a string.
 *	Return: void
*/

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/**
 *	new_dog - function that creates a new dog.
 *	@name: string.
 *	@age: intiger.
 *	@owner: string.
 *	Return: struct.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);
	dog->name = malloc(sizeof(char) * _strlen(name) + 1);
	if (!dog->name)
		return (NULL);
	dog->owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if (!dog->owner)
		return (NULL);
	dog->name = _strcpy(dog->name, name);
	dog->owner = _strcpy(dog->owner, owner);
	dog->age = age;
	return (age);
}
