#include "dog.h"
#include <stdlib.h>

void free_dog(dog_t *d)
{
if (d != NULL) {
free(d->name);   /* Free the name string. */
free(d->owner);  /* Free the owner string. */
free(d);         /* Free the dog structure itself. */
}
}
