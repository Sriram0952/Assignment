
Array Pointer Function Output

￼￼

What will be the output of the program ? #include<stdio.h> void fun(int **p); int main() { int a[3][4] = {1, 2, 3, 4, 4, 3, 2, 8, 7, 8, 9, 0}; int *ptr; ptr = &a[0][0]; fun(&ptr); return 0; } void fun(int **p) { printf("%dn", **p); } 

The program will output the value 1.

Explanation: The program defines a 2-dimensional integer array a of size 3x4 and initializes its values. It also declares a pointer variable ptr of type integer and assigns it the address of the first element of the array a.

Then, the program calls the function fun by passing the address of the pointer variable ptr as an argument. The function fun takes a pointer to a pointer as its parameter.

Inside the function fun, the first dereference of **p gives the value of the integer pointed to by the pointer ptr, which is the first element of the array a, i.e., 1. This value is then printed to the console using the printf function.

Therefore, the output of the program will be 1.

