#include   <TXLib.h>
#include   <stdio.h>
#include   <stdlib.h>


//-----------------------------------------------------------------------------


void broken_array();


//=============================================================================

int main(void)
{

    broken_array();

}

//=============================================================================


void broken_array()
{
    // ввод
    int num_strings = 0;

    printf("Enter the number of strings in desired array:  ");
    scanf("%d", &num_strings);

    int** num_str_cal = (int**)calloc(num_strings, sizeof(int));

    assert(num_str_cal != NULL);

    int* array_num_elem = (int*)calloc(num_strings, sizeof(int));   //добавление массива с количествами элементов

    for (int i = 0; i < num_strings; i++)
    {
        int num_elem = 0;

        printf("Enter the number of elements of the array string:  ");

        scanf("%d", &num_elem);

        array_num_elem[i] = num_elem;

        int* num_elem_cal = (int*)calloc(num_elem, sizeof(int));


        assert(num_elem_cal != NULL);

        int j = 0;

        printf("Enter elements of string %d:  \n", i);

        for (int j = 0; j < num_elem; ++j)
        {
            int elem = 0;
            scanf("%d", &elem);
            num_elem_cal[j] = elem;
        }
        printf("\n");
        num_str_cal[i] = num_elem_cal;
    }

    // вывод

    for (int i = 0; i < num_strings; ++i)
    {
        int* str = num_str_cal[i];

        for (int j = 0; j < array_num_elem[i]; j++)
        {
            printf(" %d ", str[j]);
        }
        printf("\n");
    }
    printf("\n\n");

}


/*void output_sq(int *data, int length, int width)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < width; j++)
        {
            printf(" %d ", *((int*)data + i*width + j));
        }
        printf("\n");
    }
}  */
