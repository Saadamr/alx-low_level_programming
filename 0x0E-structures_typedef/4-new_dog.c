#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog = malloc(sizeof(dog_t));

if (new_dog == NULL) {
return NULL; /* Return NULL if memory allocation fails. */
}

/* Allocate memory for the name and owner strings and copy the values. */
new_dog->name = strdup(name);
if (new_dog->name == NULL) {
free(new_dog);
return NULL; /* Return NULL if memory allocation for the name fails. */
}

new_dog->age = age;

new_dog->owner = strdup(owner);
if (new_dog->owner == NULL) {
free(new_dog->name);
free(new_dog);
return NULL; /* Return NULL if memory allocation for the owner fails. */
}

return new_dog;
}
