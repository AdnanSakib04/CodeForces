#include<iostream>
using namespace std;

int main(){
    int n,a,b,capacity = 0, max_capacity = 0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;
        capacity = capacity + (b-a);
        if(capacity>max_capacity){
            max_capacity = capacity;
        }

    }
    cout<<max_capacity<<endl;
    
}
