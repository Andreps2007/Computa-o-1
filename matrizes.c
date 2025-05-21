#include<stdio.h>
#include <time.h>
#define nl 5
#define nc 5
int main()
{
    int m[nl][nc],transposta[nc][nl];
    srand(time(NULL));
    for(int i=0; i<nl; i++)
    {
        for(int j =0; j<nc; j++)
        {

            m[i][j]= rand()%100+1;
            printf("%3d ", m[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<nl; i++)
    {
        for(int j =0; j<nc; j++)
        {
            transposta[j][i] = m[i][j];

        }

    }
    printf("\nMatriz Transposta:\n");
    for (int i = 0; i < nc; i++)
    {
        for (int j = 0; j < nl; j++)
        {
            printf("%3d ", transposta[i][j]);
        }
        printf("\n");

    }
    return 0;
}
