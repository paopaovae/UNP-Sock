#include <stdio.h>
#include <stdlib.h>
#include <unp.h>


typedef struct Test{
    short a;
    char b;
    long c;
}T;

typedef struct Test1{
    char a;
    char b;
    char c;
    short d;
}T1;

typedef struct Test2{
    int a;
}T2;

typedef struct Test3{
    short a;
    short b;

}T3;

int main()
{
    T t1;
    //the bytes control, n bytes is 3.
    memset(&t1, 3, sizeof(t1));
    printf("t1.a = %d, t1.b = %c, t1.c = %ld\n", t1.a, t1.b, t1.c);

    T1 t2;

    t1.a = 1;

    t2.a = 1;
    t2.b = 3;

    int num1 = memcmp(&t1, &t2, 1);
    printf("num1 = %d\n", num1);

    //cmp t1 - t2 first bytes
    int num2 = memcmp(&t1, &t2, 2);
    printf("num2 = %d\n", num2);

    T2 t3;
    T3 t4;

    t3.a = 131073;

    t4.a = 1;
    t4.b = 1;

    //compare struct is a bad choice!
    int num3 = memcmp(&t4, &t3, 3);
    printf("num3 = %d\n", num3);



    return 0;

}
