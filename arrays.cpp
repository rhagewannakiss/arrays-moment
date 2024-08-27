#include   <TXLib.h>
#include   <stdio.h>
#include    <math.h>
#include  <assert.h>
#include   <conio.h>
#include <windows.h>


void output_mass(int* data, size_t length, size_t width);
void output_sq(int* data, size_t length, size_t width);
void sum_arrays(int* data_1, int* data_2, size_t length, size_t width);

//------------------MAIN-------------------------------------------------------------------

int main(void)
{
    size_t length = 5;
    size_t  width = 5;

    int data_1[5][5] = {{0, 5, 2, 3, 2},
                        {5, 0, 3, 1, 1},
                        {2, 3, 0, 4, 0},
                        {3, 1, 4, 0, 3},
                        {2, 1, 0, 3, 0}};

    int data_2[5][5] = {{-4, 3, 7, 2, 2},
                        {5, -2, 6, 0, 2},
                        {6, 9, 5, 4,  0},
                        {-3, 7, 5, 8, 5},
                        {5, 6, 7, -7, 7}};

   /* output_mass(*data_1, length, width);

    output_sq(*data_1, length, width); */

    sum_arrays((int*)data_1, (int*)data_2, length, width);

    system("color 0B");

}

//---------------FUNCTIONS-----------------------------------------------------------------



void output_mass(int* data, size_t length, size_t width)
{
    printf( "_______________________________________________\n"
            "|     |              Очки за игру             |\n"
            "|  №  |---------------------------------------|\n"
            "|     |   1   |   2   |   3   |   4   |   5   |\n"
            "-----------------------------------------------\n");
    for (int i = 0; i < length; i++)
    {
        printf("|  %d  |", i+1);
        for (int j = 0; j < (i+1); j++)
        {
            printf("   %d   |", *((int*)data + i*width + j));
        }
        printf("\n");
    }
}


void output_sq(int *data, size_t length, size_t width)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < width; j++)
        {
            printf(" %d ", *((int*)data + i*width + j));
        }
        printf("\n");
    }
}

void sum_arrays(int* data_1, int* data_2, size_t length, size_t width)
{

    for (int i = 0; i < length; i++)
    {
        for (int j = 0;  j < width; j++)
        {
            printf("%d ", *((int*)data_1 + i*width + j) + *((int*)data_2 + i*width + j) );
        }
        printf("\n");
    }

}


