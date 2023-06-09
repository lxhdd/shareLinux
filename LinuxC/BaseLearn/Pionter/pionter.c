#include<stdio.h>
#include<stdlib.h>


int main()
{
    printf("void * 大小 ：%lu\n" ,sizeof(void *));
    printf("char * 大小 ：%lu\n" ,sizeof(char *));
    printf("short * 大小 ：%lu\n" ,sizeof(short *));
    printf("int * 大小 ：%lu\n" ,sizeof(int *));
    printf("float * 大小 ：%lu\n" ,sizeof(float *));
    printf("double * 大小 ：%lu\n" ,sizeof(double *));

    int a = 1;
    int *p = &a;
    printf("p = %p\n",p);
    printf("&a = %p\n",&a);
    printf("*p = %d\n",*p);

    int s[3]={1,2,3};
    int *q = s;
    printf("*++q = %d\n",*++q);
    int *m = s;
    printf("++*m = %d\n",++*m);

    exit(0);
}