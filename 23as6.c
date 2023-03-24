The code is missing a header file for the printf function. It should include the stdio.h header file.
#include <stdio.h>
#include <unistd.h>

int main() {
    int a = 10;
    if (fork() == 0)
        a++;
    printf("%d\n", a);
    return 0;
}
//output
10
11
