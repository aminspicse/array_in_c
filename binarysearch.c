#include<stdio.h>
/*
    Linear search  Program
    MD. AL AMIN
    aminspicse@gmail.com
*/
int main(){
    int arr[100], first, middle, last, search, length;
    printf("Enter The Length of array: ");
    scanf("%d",&length);

    printf("Enter the element of array: \n");
    for(int i=0; i<length; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<length; i++){
        printf("%d ",arr[i]);
    }

    printf("\nEnter a Number to Search: ");
    scanf("%d",&search);

    first = 0;
    last = length - 1;
    middle = (first+last)/2;

      while (first <= last) {

        if (arr[middle] < search){
            first = middle + 1;
        }else if (arr[middle] == search) {
            printf("%d found at location %d.\n", search, middle+1);
            break;
        }else{
            last = middle - 1;

            middle = (first + last)/2;
        }
      }

      if (first > last){
            printf("Not found! %d isn't present in the list.\n", search);
      }

    return 0;
}
