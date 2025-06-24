// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int* init (int size);
void InsertFront (int arr[], int *size, int *count, int value);
void display (int arr[], int *size);


int main() {
    int size, value;
    int count=0;
   printf ("Enter size: ");
   scanf ("%d",&size);
    
   int* arr = init( size);



    for (int i = 0; i < size; ++i) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &value);
        InsertFront (arr, &size, &count, value);
    }


display (arr, &size);


    return 0;
    
    
}
int* init ( int size) {
    int *arr = malloc(sizeof(int) * size);
    return arr;
}

void  InsertFront (int arr[], int *size, int *count, int value){
    
    for (int i = *count; i>0;i--){
        arr[i] = arr[i-1];
    }
    
    arr[0] = value;
        (*count)++;
}


void display (int arr[], int *size){

for (int i=0; i<*size; i++){
    printf ("%d ", arr[i]);
}


}