extern void *malloc(unsigned int __size);
extern void free(void *__ptr);
extern void _print(const char* __str);
extern void exit(int __status);

int main() {
    char *str = (char*)malloc(3);
    str[0] = 'h';
    str[1] = 'i';
    str[2] = '\0';
    _print(str);
    free((void*)str);
    return 0;
}