#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];
    int freq[MAX_SIZE];
    int i, j, max, index;

    printf("Enter a string: ");
    fgets(str, MAX_SIZE, stdin);

    for(i=0; str[i]!='\0'; i++)
    {
        freq[i] = 1;
        for(j=i+1; str[j]!='\0'; j++)
        {
            if(str[i]==str[j])
            {
                freq[i]++;
                str[j] = '0'; // set the duplicate characters to '0'
            }
        }
    }

    max = freq[0];
    index = 0;
    for(i=0; str[i]!='\0'; i++)
    {
        if(freq[i]>max && str[i]!='0')
        {
            max = freq[i];
            index = i;
        }
    }

    printf("The highest occurring character in the string is '%c' with frequency %d.\n", str[index], max);

    return 0;
}
//output: Enter a string: Hello world
The highest occurring character in the string is 'l' with frequency 3.//