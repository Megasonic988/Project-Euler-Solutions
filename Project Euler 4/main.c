#include <stdio.h>
#include <string.h>

char* reverse_string(char *str)
{
    char temp;
    size_t len = strlen(str) - 1;
    size_t i;
    size_t k = len;
    
    for(i = 0; i < len; i++)
    {
        temp = str[k];
        str[k] = str[i];
        str[i] = temp;
        k--;
        if(k == (len / 2))
        {
            break;
        }
    }
    return 0;
}


int main() {
    int i;
    for (i = 0; i < 998002; i++) { /*initializes the loop*/
        char input[15];    /*makes two strings, since one will be reversed. Then later check to see if strings are same*/
        char input2[15];
        int x;
        
        sprintf(input, "%d", i); /*converts the integer to a string on "char input" to be analyzed*/
        strcpy(input2, input);    /*copies string input to input2*/
    
        reverse_string(input2); /*reverses string input2*/
    
        if (!strcmp(input, input2)) {  /*loop: IF string is palindrome, then will start division loop*/
            for (x = 100; x < 1000; x++) {    /*loop: checks to see if palindrome number is divisible by 3 digit number, returning another 3 digit number*/
                if (!(i%x) && i/x < 1000) {
                    printf("%s is product of %d and %d\n", input, x, i/x);
                }
            }
        }
    }
    return 0;
}
