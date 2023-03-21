#ifndef DOG
#define DOG

/**
 * struct dog - a struct representing a dog
 * @name: the name of the dog (string)
 * @age: the age of the dog (float)
 * @owner: the owner of the dog (string)
 *
 * Description: This struct represents a dog with a name, age, and owner.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif
