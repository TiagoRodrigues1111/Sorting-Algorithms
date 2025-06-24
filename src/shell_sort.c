/*******************************************************************************************************************
* FILE NAME: shell_sort.c
*                                                                                                               
* PURPOSE: This file implements the functions defined in shell_sort.h     
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
* 20-06-2025    Tiago Rodrigues                               0         File preparation     
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



/*****************************************************/



/* 7 function declarations */
/*****************************************************/

/******************************************************************
*
* FUNCTION NAME: shell_sort     
*
* PURPOSE: Declaration of the shell_sort algorithm
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
void shell_sort(void** array_of_values, uint64_t size_of_array, uint64_t size_of_datatype, uint8_t (*compare_function)(void* elem1, void* elem2))            
{
        /* LOCAL VARIABLES:
        *  Variable        Type    Description
        *  --------        ----    -----------
        *  None
        */


        uint64_t gap_values[] = {1750, 701, 301, 132, 57, 23, 10, 4, 1};
        uint64_t number_of_gaps = sizeof(gap_values) / sizeof(uint64_t);


        if(NULL == array_of_values)                                                       
        {
                fprintf(stderr, "array of values location is null\n");
                return ;
        }
        if(NULL == (*array_of_values))                                                        
        {
                fprintf(stderr, "Pointer provided does not point to array of values,points to null\n");
                return ;
        }

        
        void *aux_swap = NULL;
        aux_swap = malloc(1*size_of_datatype);


        for(uint64_t i=0; i<number_of_gaps; i++)        
        {

                for(uint64_t j=gap_values[i]; j < size_of_array; j++)        
                {

                        memcpy(aux_swap, (void *) &((uint8_t*)(*array_of_values))[j*size_of_datatype], size_of_datatype); 

                        uint64_t k;
                        for(k=j; k >= gap_values[i] && compare_function((void *) &((uint8_t*)(*array_of_values))[(k - gap_values[i])*size_of_datatype],aux_swap); k-= gap_values[i] )
                        {
                                memcpy((void *) &((uint8_t*)(*array_of_values))[k*size_of_datatype], (void *) &((uint8_t*)(*array_of_values))[(k-gap_values[i])*size_of_datatype], size_of_datatype);
                                
                        }
                        memcpy((void *) &((uint8_t*)(*array_of_values))[(k)*size_of_datatype], aux_swap, size_of_datatype);  
                }


                
        }
        return;   
}
