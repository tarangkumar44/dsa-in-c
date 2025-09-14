/*
Write a function that receives an array and it's size
The function should calculate and return the average value of the array. 
*/

#include <stdio.h>

double avgValue(int *arr, int size){
    if(size <= 0) return -1;
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum+=arr[i];
    }
    return (double)sum/size;
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
    printf("Average value of the array: %f\n", avgValue(arr, size));
    return 0;
}