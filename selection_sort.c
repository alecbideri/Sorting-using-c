#include<stdio.h>

void selection_sort(int arr [], int n){
    int i , j , min_dx ;
    for (i = 0  ; i < n-1 ; i++){
        min_dx = i ;
        for (j=i+i ; j < n ; j++){
            if(arr[j] < arr[min_dx]){
                min_dx = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min_dx];
        arr[min_dx] = temp;
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

    selection_sort(arr , n);
    

    printf("Array after sorting\n");
    print_array(arr  , n);

    
    printf("\n\n");
    return 0 ;
}