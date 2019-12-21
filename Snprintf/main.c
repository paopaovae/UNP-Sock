#include <stdio.h>
#include <stdlib.h>

//snprintf (char *buf, size_t n, char *str)
// snprintf的返回值是 sizeof（str）= len
// 实际写入的字符数 = n-1;
//不管buf  有没有空间容纳。 最好n <= sizeof(buf)
// len <= n 则buf = s;
// s > n 则 buf = str[0:n-2];

int main()
{
    char buf1[10] = {0};
    int len1 = snprintf(buf1, 5, "%s", "aaa");
    printf("buf1 = %s, len1 = %d\n", buf1, len1);

    char buf2[10] = {0};
    int len2 = snprintf(buf2, 7, "%s", "012345678");
    printf("buf2 = %s, len2 = %d\n", buf2, len2);

    char buf3[10];
    int len3 = snprintf(buf3, 10, "%s", "01234567");
    printf("buf3 = %s, len3 = %d\n", buf3, len3);
    getchar();
    return 0;
}
