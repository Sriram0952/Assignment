
Signed Char Program Output.

￼￼

What is the output of the program given below? main() { signed char i=0; for(;i>=0;i++) ; printf(“%d\n”,i); } 

The output of the program will be implementation-defined.

The program uses a signed char variable i initialized to 0, and then executes a for loop with no loop body, using a semicolon as a statement. The loop has no termination condition, so it will continue to execute until i overflows and becomes negative.

When a signed char overflows, the behavior is implementation-defined. In some implementations, the value will wrap around and become the largest possible positive value for a signed char (i.e., 127), while in other implementations it will become a negative value (i.e., -128).

Therefore, depending on the implementation, the program may either print the value 127 or -128, and then terminate.

