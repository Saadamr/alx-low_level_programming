#ifndef DOG_H
#define DOG_H

typedef struct dog {
    char *name;
    float age;
    char *owner;
} dog_t;  /* Define dog_t as an alias for struct dog. */

void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
