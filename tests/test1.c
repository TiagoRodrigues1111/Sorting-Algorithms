
#include "sorting_algorithms.h"
#include "auxiliary_functions.h"
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


#define PRINTS 0

int main(int argc,char *argv[])
{
        int *array1= NULL;
        uint64_t array1_size = 100000;
        srand(time(NULL));

        array_generation_function(&array1,array1_size);


        if(PRINTS)
        {
                printf("unsorted array: ");
                for(uint64_t i=0; i<array1_size; i++)
                {
                        printf("%d ",array1[i]);
                }
                printf("\n");
        }


        printf("%lu time taken\n",time_wrapper_function(&array1,array1_size,insertion_sort));

        if(PRINTS)
        {
                printf("sorted array: ");
                for(uint64_t i=0; i<array1_size; i++)
                {
                        printf("%d ",array1[i]);
                }
                printf("\n");
        }

        printf("Sorted?: %d",confirm_array_sorted(array1,array1_size));


        return 0;
}







