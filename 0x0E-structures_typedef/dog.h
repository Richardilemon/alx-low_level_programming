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
struct dog

{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
