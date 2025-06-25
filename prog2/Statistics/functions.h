#ifndef FUNCTIONS_H
void displayList (int list[], int count);
void populate(int list[], int count);
float getMean (int list [], int count);
float getMedian (int list [], int count);

int *getMode (int list [], int count, int* ModeCount);               //MALLOC
int getMax (int list [], int count);
int getMin (int list [], int count);
int *sortList (int list [], int count);                              //MALLOC

int countAboveAverage (int list[], int count);
int countEven (int list[], int count);
int countOdd (int list[], int count);

int *getAllNegative (int list[], int count, int *neg_count);           //MALLOC

void graph (int list[], int count); 
int* getAllPositiveAndRemove (int list[], int *count,int *pos_rem_count);
#define FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

void populate(int list[], int count) {
    for (int i = 0; i < count; i++) {
        list[i] = (rand() % 20) + 1;
        if (list[i] != 0 && (rand() % 2) == 0) {
            list[i] *= -1;
        }
    }
}
void displayList (int list [], int count) {
     for (int i = 0; i < count; i++) {
        printf("%d ", list[i]);
    }
    
    
    
}
float getMean (int list [], int count){
    float sum=0;
    for (int i=0;i<count;i++){
        sum+= list[i];
    }
    float avg = sum/count;
    return avg;
}
float getMedian (int list [], int count){
     int i, j, min, temp;
    
    for (i = 0; i < count - 1; i++) {
        min = i;
        for (j = i + 1; j < count; j++) {
            if (list[j] < list[min]) {
                min = j;
            }
        }
      
        temp = list[i];
        list[i] = list[min];
        list[min] = temp;
    }
    
     if (count % 2 == 1) {
        // if odd ni == dili ekwal basta kana;
        return (float)list[count / 2];
    } else {
        // if even ang elements;
        int mid1 = list[(count / 2) - 1];
        int mid2 = list[count / 2];
        return (mid1 + mid2) / 2.0f;
    }
    
    
}
int *getMode (int list [], int count, int* ModeCount){
    
    
    
}
int getMax (int list [], int count){
    int max=0;
    for (int i=0; i<count; i++){
        if (max<list[i]){
           max = list[i] ;
        }
    }
    return max;
    
}
int getMin (int list [], int count){
     int min=list[0];
    for (int i=0; i<count; i++){
        if (min>list[i]){
           min = list[i] ;
        }
    }
    return min;
    
    
    
}
int *sortList (int list [], int count){
    
    
    
}
int countAboveAverage (int list[], int count){
    
    
    
}
int countEven (int list[], int count){
    
    
    
}
int countOdd (int list[], int count){
    
    
    
}
int *getAllNegative (int list[], int count, int *neg_count){
    
    
    
}
void graph (int list[], int count){
    
    
}
int* getAllPositiveAndRemove (int list[], int*count,int *pos_rem_count){
    
    
    
}






#endif