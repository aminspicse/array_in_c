#include<stdio.h>
/*
    Linear search  Program
    MD. AL AMIN
    aminspicse@gmail.com
*/
int main(){

    int arr[10], search, length, temp;
    printf("Enter The Length of Array: ");
    scanf("%d",&length);
    printf("Enter The Element of Array: \n");

    for(int i=0; i<length; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter a Number to Search: ");
    scanf("%d",&search);
    for(int i=0; i<length; i++){

        if(arr[i] == search){
            //printf("%d",arr[i]);
            temp = arr[i];
            break;
        }
    }

    if(search == temp){
        printf("%d ",temp);
    }else{
        printf("%d dose\'t found in list", search);
    }
    //printf("%d",length);
    return 0;
}
