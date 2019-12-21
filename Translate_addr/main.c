#include <stdio.h>
#include <stdlib.h>
#include <unp.h>

int main()
{
    struct in_addr addr;
    char *s_addr = "1.0.0.1";
    inet_aton(s_addr, &addr);
    unsigned int a = addr.s_addr;
    printf("%d\n", a);

    unsigned b = inet_addr(s_addr);
    printf("%d\n", b);

    char *s1 = inet_ntoa(addr);
    printf("%s\n", s1);

    unsigned int c;
    inet_pton(AF_INET, s_addr, &c);

    char s2[20];
    char *s3 = inet_ntop(AF_INET, &c, s2, sizeof(s2));
    printf("%s\n", s3);

    printf("%d\n", c);
    return 0;
}
