/*
Write a function that receives an array and it's size 
Return 1: If the array has some element whose value equals to the sum of both it's neighbours (Right and left)
Return 0 otherwise.
Handle edge cases for the zeroth and last index of array 
Check against (arr[0] = arr[1] + arr[last], arr[last] = arr[last-1] + arr[0])

Example 1: [1,4,7,3,2] -> Return 1
Example 2: [1,2,3,4,6] -> Return 0
*/

#include <stdio.h>

int goodNeighbours(int *arr, int size){
    if(size <= 1) return -1;
    for (size_t i = 0; i < size; i++){
        if(i == 0 && arr[i] == arr[i+1] + arr[size-1]){
            return 1;
        } else if(i == size-1 && arr[i] == arr[i-1] + arr[0]){
            return 1;
        } else if(arr[i] == arr[i+1] + arr[i-1]){
            return 1;
        }
    }
    return 0;
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
    printf("Array has good neighbour: %d\n", goodNeighbours(arr, size));
    return 0;
}