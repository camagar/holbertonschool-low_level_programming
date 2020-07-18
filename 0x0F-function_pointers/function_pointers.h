#ifndef Function_pointers
#define Function_pointers

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /* Function_pointers */
