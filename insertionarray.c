#include<stdio.h>
/*
    Linear search  Program
    MD. AL AMIN
    aminspicse@gmail.com
*/

int main(){
    int arr[100], n, position, value;
    printf("Enter the element of array: ");
    scanf("%d", &n);

    printf("Enter element: \n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Array: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    printf("\nEnter the location where you wish to insert an element: ");
    scanf("%d", &position);

    printf("\nEnter the value to insert: ");
    scanf("%d", &value);

    for (int i = n - 1; i >= position - 1; i--){
        arr[i+1] = arr[i];

    }
    arr[position-1] = value;

    printf("\nAfter insertion Array: ");
    for(int i=0; i<=n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
