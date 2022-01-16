#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(void)
{
    // fprintf(stderr, "printed to standar err\n");
    system("date"); // standard library function
    printf("%f\n", pow(2,3));
    printf("%d\n", rand());
    srand(time(0));
    printf("%d\n", rand());
}