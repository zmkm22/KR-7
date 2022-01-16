#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char store[20];
    sprintf(store, "hello world");
    // printf("%s\n", store);

    int year, day;
    char month[10];
    scanf("%d %s %d", &year, month, &day);
    printf("%d %s %d \n", year, month, day);
}

int A(void)
{
    int a;
    while((a = getchar()) != EOF)
        putchar(tolower(a));

    return 0;
}

int B(void)
{
    /* formaat */
    char *String = "Hello World";
    printf("%40s\n", String);
    printf("%-40s\n", String);
    printf("%.4s\n", String);
    printf("%.*s\n", 4, String);
    return 0;
}