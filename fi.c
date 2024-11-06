#include<stdio.h>
void quickSort(int arr[],int low,int high);
void selectionSort(int arr[],int n);
void heapSort(int arr[],int n);
int main()
{
int arr[]={2,12,11,13,5,8,9,20,46,15};
int n = sizeof(arr1)/sizeof(arr1[0]);
int op;
printf(Enter 1-quick sort\n 2-selection sort\n 3-Heap sort\n);
printf("Enter the choice:\n");
scanf("%d",&op);
switch (op)
{
case 1:
    printf("Original array for Quick Sort: ");
    printArray(arr1, n);
    quickSort(arr1, 0, n - 1);
    printf("Sorted array using Quick Sort: ");
    printArray(arr1, n);
    break;

 case 2:   
    printf("\nOriginal array for Selection Sort: ");
    printArray(arr2, n);
    selectionSort(arr2, n);
    printf("Sorted array using Selection Sort: ");
    printArray(arr2, n);
    break;
    
case 3:
    printf("\nOriginal array for Heap Sort: ");
    printArray(arr3, n);
    heapSort(arr3, n);
    printf("Sorted array using Heap Sort: ");
    printArray(arr3, n);
    break;
    }
    return 0;
}
}
