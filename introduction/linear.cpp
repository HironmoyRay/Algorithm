#include<iostream>
using namespace std;
int main(){
    int arr[] = {12, 23, 45, 56, 67, 78, 89};
    int x = 69;

    int length = sizeof(arr)/sizeof(arr[0]);
    // cout << length << endl;

    for (int i = 0; i < length; i++)
    {
        if(x== arr[i]){
            cout<<"true"<<endl;
            return true;
        }
    }
    
    cout<<"false"<<endl;
    return false;
}