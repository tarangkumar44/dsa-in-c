/*
Find the min and max value in an array of integer and return them by passing through pointer
*/

#include <stdio.h>

void minMax(int *arr, int size, int *min, int *max){
    *min = arr[0];
    *max = arr[0];
    for(int i = 0; i < size; i++){
        if(*min > arr[i]) *min = arr[i];
        if(*max < arr[i]) *max = arr[i];
    }    
}

int main(){
    printf("Enter the size of array: ");
    int size = -1;
    scanf("%d", &size);
    int arr[size];
    int min = -1, max = -1;
    for (size_t i = 0; i < size; i++){
        arr[i] = 0;
    }
    
    printf("Enter the elements of array: \n");
    for (size_t i = 0; i < size; i++){
        printf("%ld). ", i);
        scanf("%d", &arr[i]);        
    }
    minMax(arr, size, &min, &max);
    printf("Min: %d,  Max: %d\n", min, max);
    return 0;
}