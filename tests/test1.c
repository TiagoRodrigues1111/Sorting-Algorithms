
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


#define PRINTS 0


//  Windows
#ifdef _WIN32
#include <intrin.h>
uint64_t rdtsc()
{
    return __rdtsc();
}

//  Linux/GCC

#elif RISCV_VECTORIAL
uint64_t rdtsc()
{
        uint64_t aux;
        __asm__ __volatile__("rdcycle %0"   : "=r"(aux));      
        return aux;
}

#else

uint64_t rdtsc()
{
    unsigned int lo,hi;
    __asm__ __volatile__ ("rdtsc" : "=a" (lo), "=d" (hi));
    return ((uint64_t)hi << 32) | lo;
}

#endif




void bubble_sort(int** array_of_values, uint64_t size_of_array);


uint64_t time_wrapper_function(int** input_array, uint64_t input_array_size, void (*sorting_algorithm)(int** array_of_values, uint64_t size_of_array));


void array_generation_function(int** array_of_values, uint64_t size_of_array);



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


        printf("%lu time taken\n",time_wrapper_function(&array1,array1_size,bubble_sort));

        if(PRINTS)
        {
                printf("unsorted array: ");
                for(uint64_t i=0; i<array1_size; i++)
                {
                        printf("%d ",array1[i]);
                }
                printf("\n");
        }


        return 0;
}


void array_generation_function(int** array_of_values, uint64_t size_of_array)
{

        *array_of_values = (int *) malloc(size_of_array * sizeof(int)); 


        for(uint64_t i=0; i<size_of_array; i++)
        {
                (*array_of_values)[i] = rand();
        }




        return;
}


uint64_t time_wrapper_function(int** input_array, uint64_t input_array_size, void (*sorting_algorithm)(int** array_of_values, uint64_t size_of_array))
{
        uint64_t time_taken = 0;

        
        time_taken = rdtsc();

        sorting_algorithm(input_array, input_array_size);
        
        time_taken = rdtsc()-time_taken;
        
        
        return time_taken;
}




void bubble_sort(int** array_of_values, uint64_t size_of_array)
{
        uint8_t changes = 0;

        for(uint64_t i=0; i<size_of_array-1; i++, changes = 0)
        {
                for(uint64_t j=0;j<size_of_array-i-1;j++)
                {
                        if((*array_of_values)[j] > (*array_of_values)[j+1])
                        {
                                int aux_swap = (*array_of_values)[j];
                                (*array_of_values)[j] = (*array_of_values)[j+1];
                                (*array_of_values)[j+1] = aux_swap;
                                changes = 1;
                        }
                }
                if (!changes)
                {
                        return;
                }
                
        }
        return;
}