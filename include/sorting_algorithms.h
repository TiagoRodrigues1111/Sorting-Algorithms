
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
* 19-06-2025    Tiago Rodrigues                       0         Added Bogo sort
* 20-06-2025    Tiago Rodrigues                       1         Added Shell sort
* 24-06-2025    Tiago Rodrigues                       1         Added merge sort
* 25-06-2025    Tiago Rodrigues                       1         Added bozo, cocktail, conditional bogo, stooge, odd_even and gnome sort
* 26-06-2025    Tiago Rodrigues                       0         Added quick sort    
*
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
* array_of_values       void**	        I/O	pointer to the memory position of the array to sort
* size_of_array         uint64_t        I       number_of_elements in the array
* size_of_datatype      uint64_t        I       size of datatype
* compare_function      function        I       comparison function between elements in the array
*
* RETURNS: void
*
*
*****************************************************************/
void selection_sort(void** array_of_values, uint64_t size_of_array, uint64_t size_of_datatype, uint8_t (*compare_function)(void* elem1, void* elem2));

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
* array_of_values       void**	        I/O	pointer to the memory position of the array to sort
* size_of_array         uint64_t        I       number_of_elements in the array
* size_of_datatype      uint64_t        I       size of datatype
* compare_function      function        I       comparison function between elements in the array
*
* RETURNS: void
*
*
*****************************************************************/
void insertion_sort(void** array_of_values, uint64_t size_of_array, uint64_t size_of_datatype, uint8_t (*compare_function)(void* elem1, void* elem2));

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
* array_of_values       void**	        I/O	pointer to the memory position of the array to sort
* size_of_array         uint64_t        I       number_of_elements in the array
* size_of_datatype      uint64_t        I       size of datatype
* compare_function      function        I       comparison function between elements in the array
*
* RETURNS: void
*
*
*****************************************************************/
void bogo_sort(void** array_of_values, uint64_t size_of_array, uint64_t size_of_datatype, uint8_t (*compare_function)(void* elem1, void* elem2));

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
* array_of_values       void**	        I/O	pointer to the memory position of the array to sort
* size_of_array         uint64_t        I       number_of_elements in the array
* size_of_datatype      uint64_t        I       size of datatype
* compare_function      function        I       comparison function between elements in the array
*
* RETURNS: void
*
*
*****************************************************************/
void bogo_sort(void** array_of_values, uint64_t size_of_array, uint64_t size_of_datatype, uint8_t (*compare_function)(void* elem1, void* elem2));

/******************************************************************
*
* FUNCTION NAME: conditional_bogo_sort     
*
* PURPOSE: Declaration of the conditional_bogo_sort algorithm
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
void conditional_bogo_sort(void** array_of_values, uint64_t size_of_array, uint64_t size_of_datatype, uint8_t (*compare_function)(void* elem1, void* elem2));

/******************************************************************
*
* FUNCTION NAME: bozo_sort     
*
* PURPOSE: Declaration of the bozo_sort algorithm
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
void bozo_sort(void** array_of_values, uint64_t size_of_array, uint64_t size_of_datatype, uint8_t (*compare_function)(void* elem1, void* elem2));

/******************************************************************
*
* FUNCTION NAME: stooge_sort     
*
* PURPOSE: Declaration of the stooge_sort algorithm
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
void stooge_sort(void** array_of_values, uint64_t size_of_array, uint64_t size_of_datatype, uint8_t (*compare_function)(void* elem1, void* elem2));

/******************************************************************
*
* FUNCTION NAME: radix_sort     
*
* PURPOSE: Declaration of the radix_sort algorithm
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
void radix_sort(void** array_of_values, uint64_t size_of_array, uint64_t size_of_datatype, uint8_t (*compare_function)(void* elem1, void* elem2));

/******************************************************************
*
* FUNCTION NAME: cocktail_sort     
*
* PURPOSE: Declaration of the cocktail_sort algorithm
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
void cocktail_sort(void** array_of_values, uint64_t size_of_array, uint64_t size_of_datatype, uint8_t (*compare_function)(void* elem1, void* elem2));

/******************************************************************
*
* FUNCTION NAME: odd_even_sort     
*
* PURPOSE: Declaration of the odd_even_sort algorithm
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
void odd_even_sort(void** array_of_values, uint64_t size_of_array, uint64_t size_of_datatype, uint8_t (*compare_function)(void* elem1, void* elem2));

/******************************************************************
*
* FUNCTION NAME: comb_sort     
*
* PURPOSE: Declaration of the comb_sort algorithm
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
void comb_sort(void** array_of_values, uint64_t size_of_array, uint64_t size_of_datatype, uint8_t (*compare_function)(void* elem1, void* elem2));

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
void shell_sort(void** array_of_values, uint64_t size_of_array, uint64_t size_of_datatype, uint8_t (*compare_function)(void* elem1, void* elem2));

/******************************************************************
*
* FUNCTION NAME: merge_sort     
*
* PURPOSE: Declaration of the merge_sort algorithm
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
void merge_sort(void** array_of_values, uint64_t size_of_array, uint64_t size_of_datatype, uint8_t (*compare_function)(void* elem1, void* elem2));

/******************************************************************
*
* FUNCTION NAME: gnome_sort     
*
* PURPOSE: Declaration of the gnome_sort algorithm
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
void gnome_sort(void** array_of_values, uint64_t size_of_array, uint64_t size_of_datatype, uint8_t (*compare_function)(void* elem1, void* elem2));

/******************************************************************
*
* FUNCTION NAME: quick_sort     
*
* PURPOSE: Declaration of the quick_sort algorithm
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
void quick_sort(void** array_of_values, uint64_t size_of_array, uint64_t size_of_datatype, uint8_t (*compare_function)(void* elem1, void* elem2));



#ifdef __cplusplus
}
#endif


#endif

