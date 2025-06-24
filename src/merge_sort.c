/*******************************************************************************************************************
* FILE NAME: bubble_sort.c
*                                                                                                               
* PURPOSE: This file implements the functions defined in bubble_sort.h     
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
* memcpy                        copies x number of bytes from one memory position to another memory position    https://man7.org/linux/man-pages/man3/memcpy.3.html
* fprintf                       writes formatted data to a stream                                               https://man7.org/linux/man-pages/man3/fprintf.3p.html
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
#include "sorting_algorithms.h"

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

void merge_sort_rec(void** array_of_values,void**array_of_values_aux, uint64_t size_of_array, uint64_t size_of_datatype, uint64_t left, uint64_t right, uint8_t (*compare_function)(void* elem1, void* elem2));

/*****************************************************/



/* 7 function declarations */
/*****************************************************/

/******************************************************************
*
* FUNCTION NAME: merge_sort     
*
* PURPOSE: Definition of the merge_sort algorithm
*
* ARGUMENTS:
*
* ARGUMENT 	        TYPE	        I/O	DESCRIPTION
* --------              ----            ---     ------------
* array_of_values       void**	        I/O	pointer to the memory position of the array to sort
* size_of_array         uint64_t        I       number_of_elements in the array
* size_of_datatype      uint64_t        I       size of datatype
* compare_function      function        I       comparison function between elements in the array
*
* RETURNS: void
*
*
*****************************************************************/
void merge_sort(void** array_of_values, uint64_t size_of_array, uint64_t size_of_datatype, uint8_t (*compare_function)(void* elem1, void* elem2))
{
        /* LOCAL VARIABLES:
        *  Variable        Type    Description
        *  --------        ----    -----------
        *  None
        */
        if(NULL == array_of_values)                                                         // TODO: is this actually a problem?
        {
                fprintf(stderr, "array of values location is null\n");
                return ;
        }
        if(NULL == (*array_of_values))                                                         // TODO: is this actually a problem?
        {
                fprintf(stderr, "Pointer provided does not point to array of values,points to null\n");
                return ;
        }

        void* array_of_values_aux=malloc(size_of_array * size_of_datatype); ;            // will be used to ping-pong result values in between operation

        merge_sort_rec(array_of_values,&array_of_values_aux,size_of_array, size_of_datatype, 0, size_of_array-1, compare_function);



        return ;        
}



/******************************************************************
*
* FUNCTION NAME: merge_sort_rec  
*
* PURPOSE: Definition of the recursive part of the merge sort algorithm
*
* ARGUMENTS:
*
* ARGUMENT 	        TYPE	        I/O	DESCRIPTION
* --------              ----            ---     ------------
* array_of_values       void**	        I/O	pointer to the memory position of the array to sort
* size_of_array         uint64_t        I       number_of_elements in the array
* size_of_datatype      uint64_t        I       size of datatype
* left                  uint64_t        I       left position of the array
* right                 uint64_t        I       right position of the array
* compare_function      function        I       comparison function between elements in the array
*
* RETURNS: void
*
*
*****************************************************************/
void merge_sort_rec(void** array_of_values, void**array_of_values_aux, uint64_t size_of_array, uint64_t size_of_datatype, uint64_t left, uint64_t right, uint8_t (*compare_function)(void* elem1, void* elem2))
{
 
        if(left < right)
        {
                uint64_t middle = left + (right - left)/2;              // overflow protection


                merge_sort_rec(array_of_values,array_of_values_aux, size_of_array, size_of_datatype, left, middle, compare_function);
                merge_sort_rec(array_of_values,array_of_values_aux, size_of_array, size_of_datatype, middle+1, right, compare_function);

                uint64_t left_array1_pos, left_array2_pos, i;

                for(left_array1_pos = left, left_array2_pos = middle + 1, i = left; left_array1_pos <= middle && left_array2_pos <= right; i++) 
                {
                        if(!compare_function((void *) &((uint8_t*)(*array_of_values))[left_array1_pos*size_of_datatype],(void *) &((uint8_t*)(*array_of_values))[left_array2_pos*size_of_datatype]))
                        {
                                memcpy((void *) &((uint8_t*)(*array_of_values_aux))[i*size_of_datatype], (void *) &((uint8_t*)(*array_of_values))[(left_array1_pos)*size_of_datatype], size_of_datatype);
                                left_array1_pos++;
                        } 
                        else
                        {
                                memcpy((void *) &((uint8_t*)(*array_of_values_aux))[i*size_of_datatype], (void *) &((uint8_t*)(*array_of_values))[(left_array2_pos)*size_of_datatype], size_of_datatype);
                                left_array2_pos++;
                        }

                }



                while(left_array1_pos <= middle)
                {       
                        memcpy((void *) &((uint8_t*)(*array_of_values_aux))[i*size_of_datatype], (void *) &((uint8_t*)(*array_of_values))[(left_array1_pos)*size_of_datatype], size_of_datatype);
                        i++;
                        left_array1_pos++;
                }


                while(left_array2_pos <= right)
                {
                        memcpy((void *) &((uint8_t*)(*array_of_values_aux))[i*size_of_datatype], (void *) &((uint8_t*)(*array_of_values))[(left_array2_pos)*size_of_datatype], size_of_datatype);
                        i++;
                        left_array2_pos++;

                }

                for(i = left; i <= right; i++)
                {   
                        memcpy((void *) &((uint8_t*)(*array_of_values))[i*size_of_datatype], (void *) &((uint8_t*)(*array_of_values_aux))[(i)*size_of_datatype], size_of_datatype);
                }

                // TODO: ping-pong tecniques will work, and will prevent the need to copy the array, problem is they are near impossible to implement with recursion.   

                //printf("princ:%lu aux: %lu\n",array_of_values,array_of_values_aux);
                //void **aux_swap_pointer = NULL;
                //aux_swap_pointer = array_of_values;
                //array_of_values = array_of_values_aux;
                //array_of_values_aux = aux_swap_pointer;

        }



        return;
}



/*****************************************************/



