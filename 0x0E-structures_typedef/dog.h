#ifndef R2
#define R2

/**
 * struct dog - facts about a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: info about a dog
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


#endif /* R2 */
