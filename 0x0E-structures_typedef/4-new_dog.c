#include <stdlib.h>
#include <string.h>

typedef struct dog 
{
    char *name;
    float age;
    char *owner;
}
dog_t;

dog_t *new_dog(char *name, float age, char *owner)
{
	// Allocate memory for the dog_t struct//
	dog_t *newDog = (dog_t*)malloc(sizeof(dog_t));
    if (newDog == NULL)
    {
	    return NULL; // Return NULL if malloc fails
    }
    // Allocate memory for the name and owner strings and copy the data
    newDog->name = (char*)malloc(strlen(name)+1);
    if (newDog->name == NULL)
    {
	    free(newDog);
	    return NULL; // Return NULL if malloc fails
    }
    strcpy(newDog->name, name);
    newDog->age = age;
    
    newDog->owner = (char*)malloc(strlen(owner)+1);
    if (newDog->owner == NULL)
    {
	    free(newDog->name);
	    free(newDog);
	    return NULL; // Return NULL if malloc fails
    }
    strcpy(newDog->owner, owner);
    return newDog; // Return the new dog_t struct
}
