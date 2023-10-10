#include<iostream>
using namespace std;
int main(){
    int n, hard = 0;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++){
        if(arr[i] == 1){
            hard = 1;
            break;
        }
    }
    if(hard){
        cout<<"HARD"<<endl;
    }
    else{
        cout<<"EASY"<<endl;
    }

return 0;
}
