#include <stdio.h>
#include <math.h>

#define N 20

int main()
{
    int i;
    double vt[N], *buff;
    buff = vt;
    for (i = 0; i < N; i++)
    {
        *(buff + i) = 1 + rand() % 100;
        printf("%.2f ", *(buff + i));
    }
    return 0;
}
