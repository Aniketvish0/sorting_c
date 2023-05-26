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
void selction_sort(int a[],int n)
{
    for(int i=0;i<n-1;i++){
     
    int min_dex=i;
    for(int j=i+1;j<n;j++){
        if(a[j]<a[min_dex]){
            min_dex=j;
        }
        if(min_dex!=i){
            swap(&a[min_dex],&a[i]);
        }

    }
    }
}
int main(){
int a[]={23,45,64,2,56,90,32};
    int n=sizeof(a)/sizeof(a[0]);
    selction_sort(a,n);
    printArray(a,n);
return 0;
}