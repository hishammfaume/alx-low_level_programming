#include "main.h"
#include "dogh"
#include <stdio.h>
#include <stdlib.h>
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("%s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("Age: %.6f\n", d->age);
		if (d->owner != NULL)
			printf("%s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}

}
