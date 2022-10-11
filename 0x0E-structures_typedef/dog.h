#ifndef DOG_H
#define DOG_H

void init_dog(struct dog *d, char *name, float age, char *owner);
/**
 * struct dog - struct
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
