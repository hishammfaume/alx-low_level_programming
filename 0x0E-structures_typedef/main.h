#ifndef MAIN_H
#define MAIN_H
struct dog
{
	char *name;
	float age;
	char *owner;
};
void doggy(struct dog *d, char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
