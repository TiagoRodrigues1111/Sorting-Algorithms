
#include "sorting_algorithms.h"
#include "auxiliary_functions.h"
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


#define PRINTS 0

void element_creation_function_1(void* element,void* params)
{
        *((int*)(element)) = rand();
        return;
}

uint8_t compare_func(void* val1, void* val2)
{
        int val1_int = *((int*)val1);
        int val2_int = *((int*)val2);

        if(val1_int > val2_int)
                return 1;
        else
                return 0;
}

void print_element_function(void* mem_position )
{

        printf("%d ",*((int*)mem_position));

}



int main(int argc,char *argv[])
{
        void *array1= NULL;
        uint64_t array1_size = 3000;
        srand(time(NULL));

        array_generation_function(&array1,array1_size,sizeof(int),NULL,element_creation_function_1);


        if(PRINTS)
        {
                
                printf("unsorted array: ");
                print_array(array1,array1_size,sizeof(int),print_element_function);
                printf("\n");
        }


        printf("%lu time taken\n",time_wrapper_function(&array1, array1_size, sizeof(int), bubble_sort, compare_func));

        if(PRINTS)
        {
                printf("sorted array: ");
                print_array(array1,array1_size,sizeof(int),print_element_function);
                printf("\n");
        }

        printf("Sorted?: %d",confirm_array_sorted(array1,array1_size,sizeof(int),compare_func));


        return 0;
}







