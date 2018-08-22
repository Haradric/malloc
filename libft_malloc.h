
#ifndef LIBFT_MALLOC_H
# define LIBFT_MALLOC_H

# include <stddef.h>

# define malloc  libft_malloc
# define free    libft_free
# define realloc libft_realloc

void    *malloc(size_t size);
void    free(void *ptr);
void    *realloc(void *ptr, size_t size);

void    show_alloc_mem(void);

# endif

