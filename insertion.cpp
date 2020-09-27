#include <iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
void insertsort(int arr[],int n){
    int temp,val,j;
    for(int i=1;i<n;i++){
        val=arr[i];
        j=i-1;
        while(j>-1 && arr[j]>val){
            arr[j+1]=arr[j];
            j--;
        }
         arr[j+1]=val;
    }
    print(arr,n);
}
int main(){
    int arr[5]={2,7,6,1,8};
    insertsort(arr,5);
    return 0;
}