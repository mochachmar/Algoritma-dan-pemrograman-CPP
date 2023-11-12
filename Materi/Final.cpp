#include <stdio.h>

void transposeArray (int arrayM[4][5], int arrayN[5][4]);

int main (void)
{
    int i, j;
    int arrayM[4][5] =
    {
    {  1,  2,  3,  4,  5 },
    {  6,  7,  8,  9, 10 },
    { 11, 12, 13, 14, 15 },
    { 16, 17, 18, 19, 20 }
    };

    int arrayN[5][4] ={0};

    for( i = 0; i < 4; ++i )
        {
        for( j = 0; j < 5; ++j )
            {
            printf("%3i  ",arrayM[i][j]);
            }
        printf("\n\n");
        }
    printf("\n\nTransposed\n\n");
    transposeArray(arrayM, arrayN);

    for( i = 0; i < 5; ++i )
        {
        for( j = 0; j < 4; ++j )
            {
            printf("%3i  ",arrayN[i][j]);
            }
        printf("\n\n");
        }

    return 0;
}

void transposeArray (int arrayM[4][5], int arrayN[5][4])
{

    int i, j;
    for (i = 0; i < 5; ++i)
        {
        for ( j = 0; j < 4; ++j)
            {
            arrayN[j][i] = arrayM[i][j];
                //printf("%i, \n\n", arrayN[j][i]);
            }
        }
}