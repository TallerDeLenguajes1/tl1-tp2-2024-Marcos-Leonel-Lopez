#include <stdio.h>
#include <math.h>

#define N 5
#define M 7

int main()
{
    int i, j;
    int mt[N][M];
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            mt[i][j] =  1 + rand() % 100;
            printf("|\t%d\t|", mt[i][j]);
            //printf("|\t%lf\t|", mt[i][j]); deberia funcionar xq toma la parte entera pero no sucede asi.
        }
        printf("\n");
    }
    return 0;
}
