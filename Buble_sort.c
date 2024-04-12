#include<stdio.h>

void bubblesort(int arr [] , int n){
    int i , j ;
    for (i = 0 ; i< n-1 ; i++){
        for (j = 0 ; j < n-i-1 ; j++){
            if (arr[j] > arr [j+1]){
                int temp = arr[j];
                arr[j]  = arr[j+1];
                arr[j+1] = temp ; 
            }
        }
    }
}

void print_array(int arr[] , int size){
    int i ;
    for (i = 0 ; i<size ;i++){
        printf("%d " , arr[i]);
    }

    printf("\n");
}

int main(){

    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("\n\n");
    printf("Original array\n");
    print_array(arr , n);

    bubblesort(arr , n);
    

    printf("Array after sorting\n");
    print_array(arr  , n);

    
    printf("\n\n");
    return 0 ;
}