
/*******************************************************************************************************
* NAME: auxiliary_functions.h                                                                    
*                                                                                                       
* PURPOSE: This file defines the function prototypes for auxiliary functions                                                                       
*                                                                                                       
* GLOBAL VARIABLES: None                                                                                
*                                                                                                       
*                                                                                                       
* DEVELOPMENT HISTORY:                                                                                  
*                                                                                                       
* Date          Author          Change Id       Release         Description Of Change                   
* ----------    --------------- ---------       -------         -----------------------------------     
* 18-06-2025    Tiago Rodrigues                       1         File preparation     
*
*                                                                                                      
*******************************************************************************************************/
#ifndef AUXILIARY_FUNCTIONS_H
#define AUXILIARY_FUNCTIONS_H

/* 0 copyright/licensing */
/*******************************************************************************************************
*
* 2025 Tiago Filipe Rodrigues tiagorodrigues1590@hotmail.com
*
********************************************************************************************************/

#ifdef __cplusplus
extern "C" {
#endif


/* 1 includes */
/*****************************************************/
#include <stdint.h>

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


/******************************************************************
*
* FUNCTION NAME: confirm_array_sorted     
*
* PURPOSE: Declaration of the function to check if an array is sorted
*
* ARGUMENTS:
*
* ARGUMENT 	        TYPE	        I/O	DESCRIPTION
* --------              ----            ---     ------------
* array_of_values       int*	        I	pointer to the memory position of the array to check
* size_of_array         uint64_t        I       number_of_elements in the array
*
* RETURNS: uint8_t
*
*
*****************************************************************/
uint8_t confirm_array_sorted(int* array_of_values, uint64_t size_of_array);

/******************************************************************
*
* FUNCTION NAME: time_wrapper_function     
*
* PURPOSE: Declaration of the function to wrap a sorting function in timers
*
* ARGUMENTS:
*
* ARGUMENT 	        TYPE	        I/O	DESCRIPTION
* --------              ----            ---     ------------
* input_array           int**           I/O     pointer to the memory position of the array to check
* input_array_size      uint64_t        I       number_of_elements in the array
* sorting_algorithm     function        I       sorting algorithm to check
*
* RETURNS: uint64_t
*
*
*****************************************************************/
uint64_t time_wrapper_function(int** input_array, uint64_t input_array_size, void (*sorting_algorithm)(int** array_of_values, uint64_t size_of_array));


/******************************************************************
*
* FUNCTION NAME: array_generation_function     
*
* PURPOSE: Declaration of the function to generate an array
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
void array_generation_function(int** array_of_values, uint64_t size_of_array);



#ifdef __cplusplus
}
#endif


#endif

