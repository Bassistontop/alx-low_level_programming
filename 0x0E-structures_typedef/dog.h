#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct for dog info
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner info of the dog
 * Description: first stuct
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);
#endif
