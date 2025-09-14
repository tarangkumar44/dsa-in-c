/*
Write a function that should receive an array and it's size
The function should find and return the maximum value in the array. 
*/

#include <stdio.h>

int maxValue(int *arr, int size){
    int max = arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i] > max) max = arr[i];
    }
    return max;
}

int main(){
    printf("Enter the size of array: ");
    int size = -1;
    scanf("%d", &size);
    int arr[size];
    for (size_t i = 0; i < size; i++){
        arr[i] = 0;
    }
    
    printf("Enter the elements of array: \n");
    for (size_t i = 0; i < size; i++){
        printf("%ld). ", i);
        scanf("%d", &arr[i]);        
    }
    printf("Biggest Element in the array: %d\n", maxValue(arr, size));
    return 0;
}