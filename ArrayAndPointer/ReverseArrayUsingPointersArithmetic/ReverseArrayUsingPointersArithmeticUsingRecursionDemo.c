/*
Write a function to reverse an array of charcters using pointer arithmetic and recursion only.
The function should modify the original array in place by swapping elements from start to end using pointers.

Example:
Input: ['a', 'b', 'c', 'd']  
Output (modified array): ['d', 'c', 'b', 'a']

Constraints:
Do not use index-based array access (i.e., no square brackets []).
Use only pointers and pointer arithmetic for accessing array elements.
Use recursion only.
Implement this function and demonstrate it works with sample input.
*/

#include <stdio.h>

void reverseArray(char *arr, int size, int counter){
    if(counter == size/2){
        return;
    }
    char temp = *(arr + counter);
    *(arr+counter) = *(arr+size-counter-1);
    *(arr+size-counter-1) = temp;
    reverseArray(arr, size, counter+1);
}

int main(){
    printf("Enter the size of array: ");
    int size = -1;
    scanf("%d", &size);
    if(size <= 0){
        printf("Size can not be zero or negative. Please enter only positive number greater than 0 as array size.");
        return -1;
    }
    char arr[size];
    for (int i = 0; i < size; i++){
        *(arr+i) = '0';
    }
    
    printf("Enter the elements of array as characters: \n");
    for (int i = 0; i < size; i++){
        printf("%d). ", i);
        scanf(" %c", &*(arr+i));        
    }
    printf("\nOriginal array: \n");
    for (int i = 0; i < size; i++){
        printf("%d). %c\n", i, *(arr+i));
    }
    reverseArray(arr, size, 0);
    printf("\nReversed array: \n");
    for (int i = 0; i < size; i++){
        printf("%d). %c\n", i, *(arr+i));
    }
    return 0;
}