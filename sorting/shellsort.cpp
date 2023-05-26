#include <bits/stdc++.h>
using namespace std;
int shellsort(int arr[],int n)
{
    for(int gap=n/2 ; gap>0; gap/=2)
    {
        for(int i=gap;i<n;i++)
        {
            int temp =arr[i];
            int j;
             for (j=i; j>=gap  &&  arr[j-gap]>temp; j-=gap)
            {
                arr[j]=arr[j-gap];
            }
                arr[j]=temp;
        }
    }
    return 0;
}
void display(int ar[],int n)
{

    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }

}
int main(){
    int i;
  
    int a[]={45,52,62,1,8,23,13};
    int n=sizeof(a)/sizeof(a[0]);
      
    /*cout<<"enter size of array"<<endl;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout>>arr[i];
    }*/
    cout<<"unsorted array:"<<endl; 
     display(a,n);
    cout<<shellsort(a,n)<<endl;
    cout<<"sorted array"<<endl;
    display(a,n);
}
