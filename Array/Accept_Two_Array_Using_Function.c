#include<stdio.h>

void AcceptArr(int Arr[],int Size);
void ConCat(int Arr01[],int Arr02[],int Result[],int Size1,int Size2);

int main()
{
    int Arr01[100], Arr02[100], Result[200];
    int size1, size2;

    printf("\n Enter How Many Elements To Add First Array :");
    scanf("%d",&size1);

    printf("\n Enter Element First Array :");
    AcceptArr(Arr01,size1);

    printf("\n Enter How Many Elements In Second Array :");
    scanf("%d",&size2);

    printf("\n Enter Second Arrayy Elements");
    AcceptArr(Arr02,size2);

    ConCat(Arr01, Arr02, Result, size1, size2);

    printf("\n Concated array :");
    for (int i=0; i<size1+size2;i++) {
        printf("%d \t", Result[i]);
    }


    getch();
    return 0;

}
void AcceptArr(int arr[], int size)
{
    for (int i = 0; i < size; i++) {
        printf("\n Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void ConCat(int arr1[],int arr2[],int result[] ,int size1,int size2)
{
    for (int i = 0; i < size1; i++)
    {
        result[i] = arr1[i];
    }

    for (int i = 0; i < size2; i++)
    {
        result[size1 + i] = arr2[i];
    }
}
