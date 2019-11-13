/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h
 * @brief Header for assignment week 1
 *
 * Define and implement function in assignment
 *
 * @author Tuan Tran
 * @date Nov 11 2019
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Print statitics
 *
 *  A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * @param data: array in assignment
 * @param n: size of array
 *
 * @return void
 */
void print_statistics(unsigned char *data, int n);

/**
 * @brief Print array
 *
 * Given an array of data and a length, prints the array to the screen
 *
 * @param data: array in assignment
 * @param n: size of array
 *
 * @return void
 */
void print_array(unsigned char *data, int n);


/**
 * @brief Find median
 *
 * Given an array of data and a length, returns the median value
 *
 * @param data: array in assignment
 * @param n: size of array
 *
 * @return median value of data
 */
float find_median(unsigned char *data, int n);


/**
 * @brief Find mean
 *
 * Given an array of data and a length, returns the mean
 *
 * @param data: array in assignment
 * @param n: size of array
 *
 * @return mean value of data;
 */
float find_mean(unsigned char *data, int n);


/**
 * @brief Find maximum
 *
 * Given an array of data and a length, returns the maximum
 *
 * @param data: array in assignment
 * @param n: size of array
 *
 * @return the maximum value of data
 */
unsigned char find_maximum(unsigned char *, int);


/**
 * @brief Find minimum
 *
 * Given an array of data and a length, returns the minimum
 *
 * @param data: array in assignment
 * @param n: size of array
 *
 * @return the minimum value of data
 */

unsigned char find_minimum(unsigned char *, int);


/**
 * @brief Sort array
 *
 * Given an array of data and a length, returns the minimum
 *
 * @param data: array in assignment
 * @param n: size of array
 *
 * @return array ater sorted descending.
 */
unsigned char* sort_array(unsigned char *, int);


#endif /* __STATS_H__ */
