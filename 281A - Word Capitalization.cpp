#include<iostream>
#include<string>
using namespace std;
 
int main(){
string name;
cin>>name;
 
if(name[0] >= 97 && name[0] <=122){
    name[0] = name[0] - 32;
    cout<<name<<endl;
}
else{
    cout<<name<<endl;
 
}
 
}
