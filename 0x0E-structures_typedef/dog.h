#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a new type struct dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: a new type struct dog
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
typedef struct dog dog_t;
#endif /*DOG_H*/
