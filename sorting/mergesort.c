#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define null 0
void merge(int arr[],int l,int mid,int r){
    int i,j,k;
    int n1=mid-l+1;
    int n2=r-mid;
    int L[n1];
    int R[n2];
    for( i=0;i<n1;i++){
        L[i]=arr[l+i];
    }
    for( j=0;j<n2;j++){
        R[j]=arr[mid+1+j];
    } 
     i=0;
     j=0;
     k=l;

    while(i<n1&&j<n2){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++; 
        }
        else{
            arr[k]=R[j];
            j++; 
        }
        k++; 
    }
    while(i<n1){
        arr[k]=L[i];
        i++; k++;
    }
    while(j<n2){
        arr[k]=R[j];
        j++;
        k++;
    }
    

}
void mergersort(int arr[],int l,int r){
    if(l<r){
        int mid=(l+r)/2;
        mergersort(arr,l,mid);
        mergersort(arr,mid+1,r);
        
        merge(arr,l,mid,r);
    }
}
void printArray(int arr[], int n)
{
    for (int i=0; i<n; i++)
   printf("%d ",arr[i]);
}
int main(){
  int a[]={23,45,64,2,56,90,3};
    int n=sizeof(a)/sizeof(a[0]);
    printf("unsorted array:");
    printArray(a,n);
    mergersort(a,0,n-1);
     printf("\nsorted array:");
    printArray(a,n);   
return 0;
}