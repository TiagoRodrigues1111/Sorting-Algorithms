
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
* array_of_values       void*	        I	pointer to the memory position of the array to check
* size_of_array         uint64_t        I       number_of_elements in the array
* size_of_datatype      uint64_t        I       size of datatype
* compare_func          function        I       comparison function for elements in the array
*
* RETURNS: uint8_t
*
*
*****************************************************************/
uint8_t confirm_array_sorted(void* array_of_values, uint64_t size_of_array, uint64_t size_of_datatype, uint8_t (*compare_func)(void* val1, void* val2));

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
* size_of_datatype      uint64_t        I       size of datatype
* sorting_algorithm     function        I       sorting algorithm to check
* compare_func          function        I       comparison function for elements in the array
*
*
* RETURNS: uint64_t
*
*
*****************************************************************/
uint64_t time_wrapper_function(void** input_array, uint64_t input_array_size,uint64_t size_of_datatype, void (*sorting_algorithm)(void** array_of_values, uint64_t size_of_array, uint64_t size_of_datatype, uint8_t (*compare_function)(void* elem1, void* elem2)),uint8_t (*compare_func)(void* val1, void* val2));


/******************************************************************
*
* FUNCTION NAME: array_generation_function     
*
* PURPOSE: Declaration of the function to generate an array
*
* ARGUMENTS:
*
* ARGUMENT 	                TYPE	        I/O	DESCRIPTION
* --------                      ----            ---     ------------
* array_of_values               void**	        I/O	pointer to the memory position of the array to check
* size_of_array                 uint64_t        I       number_of_elements in the array
* size_of_datatype              uint64_t        I       byte size of datatype on the array to sort
* params_input                  void*           I       inputs to send to the element_creation_function
* element_creation_function     functions       I       function to create a element in the array
* RETURNS: void
*
*
*****************************************************************/
void array_generation_function(void** array_of_values, uint64_t size_of_array, uint64_t size_of_datatype, void* params_input, void (*element_creation_function)(void* pointer_to_mem, void* params));




/******************************************************************
*
* FUNCTION NAME: print_array     
*
* PURPOSE: Declaration of the function to generate an array
*
* ARGUMENTS:
*
* ARGUMENT 	                TYPE	        I/O	DESCRIPTION
* --------                      ----            ---     ------------
* array_of_values               void*	        I/O	pointer to the memory position of the array to check
* size_of_array                 uint64_t        I       number_of_elements in the array
* size_of_datatype              uint64_t        I       byte size of datatype on the array to sort
* element_print_function        functions       I       function to print an element
*
*
* RETURNS: void
*
*
*****************************************************************/
void print_array(void* array_of_values, uint64_t size_of_array, uint64_t size_of_datatype, void (*element_print_function)(void* pointer_to_mem));





#ifdef __cplusplus
}
#endif


#endif

