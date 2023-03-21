#include "dog.h"

/**
 * init_dog - initialize a struct dog
 * @d: pointer to the struct dog to initialize
 * @name: name of the dog (string)
 * @age: age of the dog (float)
 * @owner: owner of the dog (string)
 *
 * Description: This function initializes a 
 * struct dog with the given name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d != NULL)
    {
        d->name = name;
        d->age = age;
        d->owner = owner;
    }
}
