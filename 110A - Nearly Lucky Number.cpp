#include<iostream>
using namespace std;
 
int main(){
long long int n;
cin>>n;
int value = 0, rem;
while(n>0){
    rem = n%10;
    n = n/10;
    if(rem == 4 || rem == 7){
        value++;
    }
}
if(value ==4 || value == 7)
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;
}
