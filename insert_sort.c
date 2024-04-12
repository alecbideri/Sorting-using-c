#include<stdio.h>
void insert(int arr [] , int n){
    int i ,key , j ;

    for(i = 0 ; i<n ;i++){
        key = arr[i];
        j = i-1 ;

        while(j>=0 && arr[j] > key){
            arr[j+1] = arr [j];
            j = j-1 ;
        }

        arr[j+1] = key;
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

    insert(arr , n);
    

    printf("Array after sorting\n");
    print_array(arr  , n);

    
    printf("\n\n");
    return 0 ;
}