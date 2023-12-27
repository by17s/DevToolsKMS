#libc
> *stdlib*

| Function | Description |
|-|-|
| void* malloc(size_t size) |	This function is used to allocate space in memory during the execution of the program. |
| void* calloc(size_t num_elements, size_t element_size) | This function is also like malloc () function. But calloc () initializes the allocated memory to zero. But, malloc() doesn’t |
| void* realloc(void *ptr, size_t new_size) | This function modifies the allocated memory size by malloc () and calloc () functions to new size |
| void kfree(void *ptr) | This function frees the allocated memory by malloc (), calloc (), realloc () functions and returns the memory to the system. |
| void kcfree(void *ptr) | This function frees and clear the allocated memory by malloc (), calloc (), realloc () functions and returns the memory to the system. |
| int abs(int n) | This function returns the absolute value of an integer . The absolute value of a number is always positive. Only integer values are supported in C. |
| div_t div(int mumber, int denom) | - |
| void abort(void) | It terminates the C program |
| void exit(int status) | This function terminates the program and does not return any value |
| int system(const char* exec) |This function is used to execute commands outside the C program. |
| int atoi(const char* str) |	Converts string to int |
| long atol(const char* str) |	Converts string to long |
| double atof(const char* str) |	Converts string to float |
| double strtod(const char* str) | Converts string to double |
| long strtol(const char* str) | Converts string to long |
| void perror(char* msg) | This function displays most recent error that happened during library function call. |
| int rand(void) | This function returns the random integer numbers |

> *stdio*

| Function | Description |
|-|-|
| void putc(char ch) | Write a character to stdout | 
| char getch(void) | Read a character from stdin |
| void printf(const char* _Format, ...) | Write formatted data to stdout |
| int sprintf(char _Dest, const char *_Format, ...) | Write formatted output to string |
| int scanf(const char* _Format, ...) | Read formatted data from stdin |
| void textcolor(char color) | Change color for next characters |
