#include<iostream>
#include <bits/stdc++.h>
using namespace std;


int jumpsearch(int arr[], int n, int key){
    int step = sqrt(n);
    while(arr[min(step,n)-1]<key){
        prev = step;
        step = step + sqrt(n);
        if(prev>=n){
            return -1;
        }
    }
    while(arr[prev]<key){
        prev = prev + 1;
        if(prev = min(step,n))
        return -1;
    }
    if(arr[prev]==key){
        return prev;
    }
}

int main(){
    int arr[] = {23,90,240,400,500,530};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 240;
    int index = jumpsearch(arr,n,x);
    cout<<"key found in index:"<<index<<endl;
}