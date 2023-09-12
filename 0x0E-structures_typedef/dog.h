#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct for basic dog information.
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The dog's owner's name.
 */
struct dog
{
char *name;
float age;
char *owner;
};

/* function prototype */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
