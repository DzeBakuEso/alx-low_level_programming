#include "dog.h"

/**
 * _strdup - Duplicate a string in memory
 * @str: The string to duplicate
 * 
 * Return: Pointer to the duplicated string or NULL if failed
 */
char *_strdup(const char *str)
{
    char *dup;
    size_t len, i;

    if (!str)
        return (NULL);

    for (len = 0; str[len]; len++)
        ;

    dup = malloc(len + 1);
    if (!dup)
        return (NULL);

    for (i = 0; i < len; i++)
        dup[i] = str[i];
    dup[len] = '\0';

    return (dup);
}

/**
 * new_dog - Create a new dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * 
 * Return: Pointer to the new dog or NULL if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *dog;
    
    dog = malloc(sizeof(dog_t));
    if (!dog)
        return (NULL);

    dog->name = _strdup(name);
    if (!dog->name)
    {
        free(dog);
        return (NULL);
    }

    dog->owner = _strdup(owner);
    if (!dog->owner)
    {
        free(dog->name);
        free(dog);
        return (NULL);
    }

    dog->age = age;

    return (dog);
}

