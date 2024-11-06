#include <stdio.h>

typedef struct a
{
    char * name;
    int age;
} b;
int main()
{
    b af;
    af.age = 18;
    af.name = "dhjk";

    void *p;
    p = &af;
    printf("%d \n %s", ((b *)p)->age, ((b *)p)->name);
}