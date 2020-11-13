//bubble sort
#include <iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
void bubble(int arr[],int n){
    int flag,temp;
    for(int i=0;i<n-1;i++){
        flag=0;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                flag=1;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        if(flag==0){
            cout<<i<<endl;
            break;
        }
          
    }
    print(arr,n);
}
int main(){
    int arr[5]={3,6,9,1,2};
    bubble(arr,5);
    return 0;
}