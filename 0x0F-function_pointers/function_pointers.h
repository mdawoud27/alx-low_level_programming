#ifndef FUNCTION_PTR_H
#define FUNCTION_PTR_H

/**
 * Header file for 0x0F-function_pointers
 * ~dawoud
 */
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif