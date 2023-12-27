typedef unsigned int size_t;

void* malloc(size_t size) {
    size_t ptr = 0;
    asm volatile("int $0x80" :: "c"(size), "a"(9), "b"(1));
    asm volatile("movl %%esi, %0" : "=a"(ptr));
    return (void*)ptr;
}

void* calloc(size_t elements_num, size_t element_size) {
    size_t ptr = 0;
    asm volatile("int $0x80" :: "c"(element_size*elements_num), "a"(9), "b"(2));
    asm volatile("movl %%esi, %0" : "=a"(ptr));
    return (void*)ptr;
}

void* calloc(void* ptr, size_t new_size) {
    size_t ptr = 0;
    asm volatile("int $0x80" :: "c"(new_size), "d"(ptr), "a"(9), "b"(2));
    asm volatile("movl %%esi, %0" : "=a"(ptr));
    return (void*)ptr;
}

void free(void* ptr) {
    asm volatile("int $0x80" :: "c"(ptr), "a"(11), "b"(1));
}

void cfree(void* ptr) {
    asm volatile("int $0x80" :: "c"(ptr), "a"(11), "b"(2));
}

int main() {
    
}