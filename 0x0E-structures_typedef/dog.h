#ifndef DOG_NAME
#define DOG_NAME

/**
* struct dog - characteristics of a dog
* @name: dog's name
* @age: dog's age
* @owner: owner of dog
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
#endif
