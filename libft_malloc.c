
#include <stdint.h>
#include <unistd.h>
#include <errno.h>
#include "libft_malloc_zone.h"

void    *malloc(size_t size) {

    void    *ptr;

    ptr = zone_alloc(size);
    if (!ptr)
        errno = ENOMEM;

    return ptr;
}

void    free(void *ptr) {

    if (zone_free(ptr) != FREE_SUCCESS)
        printf("malloc: *** error for object %p: pointer being freed was not allocated\n", ptr);
}

void    *realloc(void *ptr, size_t size) {

    void *new;

    new = zone_realloc(ptr, size);
    if (new == REALLOC_FAILURE)
        errno = ENOMEM;

    return new;
}
