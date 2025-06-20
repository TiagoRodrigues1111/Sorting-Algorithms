
/*******************************************************************************************************
* NAME: sorting_algorithms.h                                                                    
*                                                                                                       
* PURPOSE: This file defines the function prototypes for the sorting algorithm                                                                       
*                                                                                                       
* GLOBAL VARIABLES: None                                                                                
*                                                                                                       
*                                                                                                       
* DEVELOPMENT HISTORY:                                                                                  
*                                                                                                       
* Date          Author          Change Id       Release         Description Of Change                   
* ----------    --------------- ---------       -------         -----------------------------------     
* 18-06-2025    Tiago Rodrigues                       1         File preparation     
* 20-06-2025    Tiago Rodrigues                       1         Added Shell sort     
*                                                                                                      
*******************************************************************************************************/
#ifndef SORTING_ALGORITHMS_H
#define SORTING_ALGORITHMS_H

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
* FUNCTION NAME: bubble_sort     
*
* PURPOSE: Declaration of the bubble_sort algorithm
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
void bubble_sort(void** array_of_values, uint64_t size_of_array, uint64_t size_of_datatype, uint8_t (*compare_function)(void* elem1, void* elem2));

/******************************************************************
*
* FUNCTION NAME: selection_sort     
*
* PURPOSE: Declaration of the selection_sort algorithm
*
* ARGUMENTS:
*
* ARGUMENT 	        TYPE	        I/O	DESCRIPTION
* --------              ----            ---     ------------
* array_of_values       int**	        I/O	pointer to the memory position of the array to sort
* size_of_array         uint64_t        I       number_of_elements in the array
*
* RETURNS: void
*
*
*****************************************************************/
void selection_sort(int** array_of_values, uint64_t size_of_array);

/******************************************************************
*
* FUNCTION NAME: insertion_sort     
*
* PURPOSE: Declaration of the insertion_sort algorithm
*
* ARGUMENTS:
*
* ARGUMENT 	        TYPE	        I/O	DESCRIPTION
* --------              ----            ---     ------------
* array_of_values       int**	        I/O	pointer to the memory position of the array to sort
* size_of_array         uint64_t        I       number_of_elements in the array
*
* RETURNS: void
*
*
*****************************************************************/
void insertion_sort(int** array_of_values, uint64_t size_of_array);


/******************************************************************
*
* FUNCTION NAME: bogo_sort     
*
* PURPOSE: Declaration of the bogo_sort algorithm
*
* ARGUMENTS:
*
* ARGUMENT 	        TYPE	        I/O	DESCRIPTION
* --------              ----            ---     ------------
* array_of_values       int**	        I/O	pointer to the memory position of the array to sort
* size_of_array         uint64_t        I       number_of_elements in the array
*
* RETURNS: void
*
*
*****************************************************************/
void bogo_sort(int** array_of_values, uint64_t size_of_array);


/******************************************************************
*
* FUNCTION NAME: comb_sort     
*
* PURPOSE: Definition of the comb_sort algorithm
*
* ARGUMENTS:
*
* ARGUMENT 	        TYPE	        I/O	DESCRIPTION
* --------              ----            ---     ------------
* array_of_values       int**	        I/O	pointer to the memory position of the array to sort
* size_of_array         uint64_t        I       number_of_elements in the array
*
* RETURNS: void
*
*
*****************************************************************/
void comb_sort(int** array_of_values, uint64_t size_of_array);


/******************************************************************
*
* FUNCTION NAME: shell_sort     
*
* PURPOSE: Definition of the shell_sort algorithm
*
* ARGUMENTS:
*
* ARGUMENT 	        TYPE	        I/O	DESCRIPTION
* --------              ----            ---     ------------
* array_of_values       int**	        I/O	pointer to the memory position of the array to sort
* size_of_array         uint64_t        I       number_of_elements in the array
*
* RETURNS: void
*
*
*****************************************************************/
void shell_sort(int** array_of_values, uint64_t size_of_array);





#ifdef __cplusplus
}
#endif


#endif

