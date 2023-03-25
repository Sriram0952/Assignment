struct emp xx;
printf("%p\n", (void *)&a);
#include <stdio.h>

struct emp {
    char name[20];
    int age;
};

int main() {
    struct emp xx;
    int a = 0;
    printf("%p\n", (void *)&a);
    return 0;
}
