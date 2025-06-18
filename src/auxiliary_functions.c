/*******************************************************************************************************************
* FILE NAME: auxiliary_functions.c
*                                                                                                               
* PURPOSE: This file implements the functions defined in auxiliary_functions.h     
*                                                                                                               
* FILE REFERENCES:                                                                                              
*                                                                                                               
* Name                          I/O                     Description                                             
* ----                          ---                     -----------                                             
* none     

* EXTERNAL VARIABLES:                                                                                           
*
*
* Name          Type            I/O                     Description                                             
* ----          ----            ---                     -----------                                             
* none
*
*
* EXTERNAL REFERENCES:                                                                                          
* Name                          Description                                                                     
* ----                          -----------
*
*
*
* ABNORMAL TERMINATION CONDITIONS, ERROR AND WARNING MESSAGES:
*
*
* ASSUMPTIONS, CONSTRAINTS, RESTRICTIONS:
*
*
*
* NOTES:                                                                                                        
*
*
* REQUIREMENTS/FUNCTIONAL SPECIFICATIONS REFERENCES:                                                            
*
*
* DEVELOPMENT HISTORY:                                                                                          
*
* Date          Author                  Change Id       Release         Description Of Change                   
* ----------    ---------------         ---------       -------         ---------------------   
* 18-06-2025    Tiago Rodrigues                               0         File preparation     
*
*
* ALGORITHM (PDL)
*    
*
*                                                                                                           
****************************************************************************************************************/


/* 0 copyright/licensing */
/***************************************************************************************************************/
/*
*       2025 Tiago Filipe Rodrigues tiagorodrigues1590@hotmail.com
*/
/***************************************************************************************************************/


/* 1 includes */
/*****************************************************/

/* 1.1 Related header */
#include "auxiliary_functions.h"

/* 1.2 C system headers */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
// #include <errno.h>

/* 1.3 C++ standard library headers*/

/* 1.4 other libraries' headers*/

/* 1.5 project's headers */






/*****************************************************/


/* 2 defines */
/*****************************************************/

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

/*****************************************************/


/* 3 external declarations */
/*****************************************************/

/*****************************************************/


/* 4 typedefs */
/*****************************************************/






/*****************************************************/


/* 5 global variable declarations */
/*****************************************************/


/*****************************************************/


/* 6 function prototypes */
/*****************************************************/



/*****************************************************/



/* 7 function declarations */
/*****************************************************/

/******************************************************************
*
* FUNCTION NAME: confirm_array_sorted     
*
* PURPOSE: Definition of the function to check if an array is sorted
*
* ARGUMENTS:
*
* ARGUMENT 	        TYPE	        I/O	DESCRIPTION
* --------              ----            ---     ------------
* array_of_values       int*	        I	pointer to the memory position of the array to check
* size_of_array         uint64_t        I       number_of_elements in the array
*
* RETURNS: uint8_t (1 if sorted, 0 if not)
*
*
*****************************************************************/
uint8_t confirm_array_sorted(int*array_of_values, uint64_t size_of_array)
{
        if(NULL == array_of_values)                                                         // TODO: is this actually a problem?
        {
                fprintf(stderr, "Pointer provided does not point to array of values,points to null\n");
                return 0;
        }

        for(uint64_t i=0; i<size_of_array-1; i++)
        {
                if(array_of_values[i] > array_of_values[i+1])
                        return 0;
                
        }
        return 1;
}

/******************************************************************
*
* FUNCTION NAME: time_wrapper_function     
*
* PURPOSE: Definition of the function to wrap a sorting function in timers
*
* ARGUMENTS:
*
* ARGUMENT 	        TYPE	        I/O	DESCRIPTION
* --------              ----            ---     ------------
* input_array           int**           I/O     pointer to the memory position of the array to check
* input_array_size      uint64_t        I       number_of_elements in the array
* sorting_algorithm     function        I       sorting algorithm to check
*
* RETURNS: uint64_t (clock cycles needed to run a functions)
*
*
*****************************************************************/
uint64_t time_wrapper_function(int** input_array, uint64_t input_array_size, void (*sorting_algorithm)(int** array_of_values, uint64_t size_of_array))
{
        uint64_t time_taken = 0;


        time_taken = rdtsc();

        sorting_algorithm(input_array, input_array_size);
        
        time_taken = rdtsc()-time_taken;
        
        
        return time_taken;
}


/******************************************************************
*
* FUNCTION NAME: array_generation_function     
*
* PURPOSE: Definition of the function to generate an array
*
* ARGUMENTS:
*
* ARGUMENT 	        TYPE	        I/O	DESCRIPTION
* --------              ----            ---     ------------
* array_of_values       int*	        I	pointer to the memory position of the array to check
* size_of_array         uint64_t        I       number_of_elements in the array
*
* RETURNS: void
*
*
*****************************************************************/
void array_generation_function(int** array_of_values, uint64_t size_of_array)
{
        *array_of_values = (int *) malloc(size_of_array * sizeof(int)); 

        for(uint64_t i=0; i<size_of_array; i++)
        {
                (*array_of_values)[i] = rand();
        }


        return;
}