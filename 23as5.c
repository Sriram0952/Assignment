#include <stdio.h>

int tmp = 20;

int main() {
    printf("%d ", tmp);
    func();
    printf("%d ", tmp);
    return 0;
}

void func() {
    static int tmp = 10;
    printf("%d ", tmp);
}
//output
20 10 20
