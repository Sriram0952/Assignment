The code above is missing the return type of the main function and the function prototype of `func()'.
To fix this, we can add void as the return type for main() and void func(void) as the function prototype for func()..
correct code:
#include <stdio.h> 

int tmp = 20; 

void func(void);

int main(void) {    
    printf("%d ", tmp);    
    func();    
    printf("%d ", tmp); 
    return 0;
} 

void func(void) {    
    static int tmp = 10;    
    printf("%d ", tmp); 
}
//output: 20 10 20//