extern void system(const char* __command);
extern void exit(int __status);

int main() {
    system("echo hello, world!"); //Execute command
    return 0; //Return 0
}