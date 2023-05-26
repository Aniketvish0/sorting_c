#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define null 0
 void swap(int* a,int* b){
    int t=*a;
    *a= *b;
    *b=t;
 }
 void printArray(int arr[], int n)
{
    for (int i=0; i<n; i++)
        printf("%d  ",arr[i]);
}
 void bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
    int  flag=0;
        for( int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
                flag=1;
            }
        }
        if (flag==0)break;
    }
 }

int main(){
int a[]={23,45,-64,2,-56,90,32};
    int n=sizeof(a)/sizeof(a[0]);
    bubblesort(a,n);
    printArray(a,n);
return 0;
}