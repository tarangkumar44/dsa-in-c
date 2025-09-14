/*
Write a function to check if the array is "Really Sorted", "Sorted" or "Not Sorted".
The function should Return 1 and Pass 1 by reference if the array is "Really Sorted".
The function should Return 1 and Pass 0 by reference if the array is "Sorted". 
The function should Return 0 and Pass 0 by reference if the array is "Not Sorted".
Example 1: [1,2,5,7,20] -> Really Sorted  (for any pair: left element < right element)
Example 2: [1,2,2,5,7]  -> Sorted  (for any pair: left element <= right element)
Example 3: [1,2,5,3,10] -> Not Sorted  
*/

#include <stdio.h>

int checkSorted(int *arr, int size, int *isReallySorted){
    for(size_t i = 0; i < size-1; i++) {
        if(arr[i] > arr[i+1]) {
            *isReallySorted = 0;
            return 0; 
        }
        if(arr[i] == arr[i+1]){
            *isReallySorted = 0;
        }
    }
    return 1;
}

int main(){
    printf("Enter the size of array: ");
    int size = -1;
    scanf("%d", &size);
    int arr[size], isReallySorted = 1;
    for (size_t i = 0; i < size; i++){
        arr[i] = 0;
    }
    
    printf("Enter the elements of array: \n");
    for (size_t i = 0; i < size; i++){
        printf("%ld). ", i);
        scanf("%d", &arr[i]);        
    }
    int result = checkSorted(arr, size, &isReallySorted);
    if(result == 1 && isReallySorted == 1){
        printf("Array is really sorted\n");
    } else if(result == 1 && isReallySorted == 0){
        printf("Array is sorted\n");
    } else if(result == 0 && isReallySorted == 0){
        printf("Array is not sorted\n");
    } else {
        printf("What the heck you have entered in the array?\n");
    }
    return 0;
}