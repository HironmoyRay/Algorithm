#include <iostream>
using namespace std;
int main(){
    int arr[] = {12,23,34,45,56,67,78,89};
    int lengthOfArray = sizeof(arr)/sizeof(arr[0]);
    // cout<<lengthOfArray<<endl;
    int l=0;
    int h=lengthOfArray-1;
    int mid;
    int x= 67;
    while(l<=h){
        mid = (l+h)/2;
        if(arr[mid]==x){
            cout<<"true"<<endl;
            return true;
        }
        else if (arr[mid]<x){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }

    return false;
}