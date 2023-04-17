#ifndef FILE_DOG
#define FILE_DOG

typedef struct dog dog_t;

/**
 * struct dog - stores dog information.
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Description: a struct named "dog" that stores its name, its age
 * and its owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
