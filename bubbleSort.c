//Implementation of bubble sort in c programming.
#include<stdio.h>

//bubbleSort function
void bubbleSort(int arr[],int n){
    int temp;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

//printArray elements fuction
void printArray(int arr[],int n){
    for(int i=0; i<n; i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[]={10,1,0,8,-7,5,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    //Unsorted Array
    printf("Unsorted Array\n");
    printArray(arr,size);

    //bubbleSort function applying
    bubbleSort(arr,size);


    printf("Sorted Array\n");
    //Sorted Array
    printArray(arr,size);

    return 0;
}