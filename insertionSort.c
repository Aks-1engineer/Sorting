//Implementation of insertion sort in c language 
#include<stdio.h>

//insertionSort function to sort the array
void insertionSort(int arr[],int n){
    int j,key;
    for(int i=1; i<n; i++){
        key=arr[i];
        j=i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;        
        }
        arr[j+1]=key;
    }

}

//printArray function to print the elements of array
void printArray(int arr[],int n){
    for(int i=0; i<n; i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[]={10,-2,12,3,8,0,25};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("Unsorted Array\n");
    printArray(arr,size);

    printf("Sorted Array\n");
    insertionSort(arr,size);
    printArray(arr,size);
}