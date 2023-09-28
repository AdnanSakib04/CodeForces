#include<iostream>
using namespace std;
 
int main(){
int k,n,w;
cin>>k>>n>>w;
int i;
int totalCost = 0;
for(i =1; i<=w; i++){
    totalCost = totalCost + i*k;
}
 
if(totalCost>n){
   int borrow = totalCost - n;
cout<<borrow<<endl;
}else{
 
cout<<0<<endl;}
 
 
}
