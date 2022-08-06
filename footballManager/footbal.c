#include <stdio.h>
#include <stdlib.h>

char* hash(char *str)
{
    char* res = malloc(sizeof(char) * 100);
    unsigned long hash = 5381;
    int c;

    while (c = *str++)
        hash = ((hash << 5) + hash) + c;
    printf("%lld", hash);
    sprintf(res, "%lld", hash);
    return res;
}

int main()
{
    char str[] = "admin";
    printf("%s", hash(str));
    return 0;
}