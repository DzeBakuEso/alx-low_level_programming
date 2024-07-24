#include "dog.h"

/**
 * free_dog - Free the memory allocated for a dog
 * @d: Pointer to the dog to free
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
    if (d)
    {
        if (d->name)
            free(d->name);
        if (d->owner)
            free(d->owner);
        free(d);
    }
}

