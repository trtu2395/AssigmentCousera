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
 * @file stats.c
 * @brief Main file of assignment
 *
 * File include code in assignment
 *
 * @author Tuan Tran
 * @date Nov 13 2019
 *
 */



#include <stdio.h>
#include "stats.h"


/* Size of the Data Set */
#define SIZE (40)



void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  printf("ARRAY \n");
  print_array(test,SIZE);

  printf("SORTED ARRAY \n");
  print_array(sort_array(test, SIZE),SIZE);
  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_statistics(test, SIZE);

}

/* Add other Implementation File Code Here */

void print_statistics(unsigned char *data, int n){
    printf("Mean in array is: %f\n", find_mean(data, n));
    printf("Median in array is: %f\n", find_median(data, n));
    printf("Maximum in array is: %d\n", find_maximum(data, n));
    printf("Minimum in array is: %d\n", find_minimum(data, n));

}

void print_array(unsigned char *data,int n){
    int i;
    for(i=0;i<n;i++){
        if(i == n-1){
            printf("%d\n",*(data+i));

        }
        else{
            printf("%d ",*(data+i));
        }
    }
}
float find_median(unsigned char *data, int n){
    unsigned char* temp = sort_array(data,n);
    float result;
    result = *(temp +n/2) + *(temp + n/2 -1);
    result /=2;
    return result;
}

float find_mean(unsigned char *data, int n){
    float result = 0;
    int i;
    for(i=0;i<n;i++){
        result += *(data + i);
    }
    result /= n;
    return result;

}
unsigned char find_maximum(unsigned char *data, int n){
    unsigned char maximum = *data;
    int i;
    for(i =1;i<n;i++){
        if(*(data+i)>maximum){
            maximum = *(data+i);
        }
    }
    return maximum;
}

unsigned char find_minimum(unsigned char *data, int n){
    unsigned char minimum = *data;
    int i;
    for(i =1;i<n;i++){
       if(*(data+i)<minimum){
           minimum = *(data+i);
       }
    }
    return minimum;
}

unsigned char* sort_array(unsigned char *data, int n){
    int i,j;
    for(i = 0;i<n-1;i++){
        for(j =i+1;j<n;j++){
            if(*(data+i) < *(data+j)){
                unsigned char temp = *(data+i);
                *(data+i) = *(data+j);
                *(data+j) = temp;

            }
        }
    }
    return data;
}

