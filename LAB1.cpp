#include<iostream>
using namespace std;

int search(int arr[], int n , int key){
    for(int i = 0 ; i<n; i++){
        if(arr[i]==key){
        return i;
        }
        else{
            cout<<"invalid"<<endl;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    int key;
    int index;
    cout<<"enter the key to searched:"<<endl;
    cin>>key;
    index =  search(arr,n,key);
    cout<<index<<endl;
}
