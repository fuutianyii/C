#include <stdio.h>

int main()
{
    printf("int a[3][4]={1,3,5,7,9,11,13,15,17,19,21,23};\nprintf(\"%%u,%%u\\n\",a,*a);\nprintf(\"%%u,%%u\\n\",a[0],*(a+0));\nprintf(\"%%u,%%u\\n\",&a[0],&a[0][0]);\nprintf(\"%%u,%%u\\n\",a[1],a+1);\nprintf(\"%%u,%%u\\n\",&a[1][0],*(a+1)+0);\nprintf(\"%%u,%%u\\n\",a[2],*(a+2));\nprintf(\"%%u,%%u\\n\",&a[2],a+2);\nprintf(\"%%u,%%u\\n\",a[1][0],*(*(a+1)+0));\nprintf(\"%%u,%%u\\n\",*a[2],*(*(a+2)+0));\n");
    int a[3][4]={1,3,5,7,9,11,13,15,17,19,21,23};
    printf("%u,%u\n",a,*a);
    printf("%u,%u\n",a[0],*(a+0)); 
    printf("%u,%u\n",&a[0],&a[0][0]); 
    printf("%u,%u\n",a[1],a+1); 
    printf("%u,%u\n",&a[1][0],*(a+1)+0);
    printf("%u,%u\n",a[2],*(a+2)); 
    printf("%u,%u\n",&a[2],a+2); 
    printf("%u,%u\n",a[1][0],*(*(a+1)+0)); 
    printf("%u,%u\n",*a[2],*(*(a+2)+0)); 
    return 0;
}
