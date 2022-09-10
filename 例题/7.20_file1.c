#include <stdio.h>
#include "7.20_file2.c"
#include "7.20_file3.c"
#include "7.20_file4.c"

int main()
{
    extern void enter_string(char str[]);
    extern void delete_string(char str[],char ch);
    extern void print_string(char str[]);
    char c,str[80];
    enter_string(str);
    scanf("%c",&c);
    delete_string(str,c);
    print_string(str);
    return 0;
}
