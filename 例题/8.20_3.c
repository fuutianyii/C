#include <stdio.h>

int main()
{
    void copy_string(char *from,char *to);
    char *a="I am a teacher.";
    char b[]="You are a student.";
    char *p=b;
    printf("string a=%s\nstring b=%s\n",a,b);
    printf("\ncopy string a to string b:\n");
    copy_string(a,p);
    printf("\nstring a=%s\nstring b=%s\n",a,b);
    return 0;
}

void copy_string(char *from,char *to)
{
    for(;*from!='\0';from++,to++)
    {
        *to=*from;
    }
    *to='\0';
}
