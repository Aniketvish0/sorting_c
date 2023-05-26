#include<bits/stdc++.h>
using namespace std;
 void swap(int* a,int* b){
    int t=*a;
    *a= *b;
    *b=t;
 }
int part(int a[],int low ,int high){
    int  pivot =a[high];
    int  i=(low-1);
    int j;
     for (  j = low; j <= high-1; j++)
     {
        if (a[j]<pivot)
        {
            i++;
            swap(&a[i],&a[j]);
        }
     }
     swap(&a[i+1],&a[high]);
     return (i+1);
}
void  qs(int a[],int low,int high){
    if(low < high){
        int pi=part(a,low,high);
        qs(a,low,pi-1);
        qs(a,pi+1,high);
    }
}
void printArray(int arr[], int n)
{
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
}
int main(){
    int a[]={23,45,64,2,56,90,32};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"unsorted array:";
    printArray(a,n);
    qs(a,0,n-1);
    cout<<"sorted array:";
    printArray(a,n);  
}   