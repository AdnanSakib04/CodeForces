#include<iostream>
#include<string>
using namespace std;
 
int main(){
string name;
cin>>name;
int countDistinct = 0;
int len = name.size();
int f[100], i, j;
for (i=0; i<len; i++){
f[i] = 0;
}
 
for (i=0; i<len; i++){
if(f[i] == 0){
    for(j=i+1; j<len; j++){
        if(name[i] == name[j]){
            f[j] = 1;
        }
    }
countDistinct++;
}
}
if(countDistinct%2 ==0){
    cout<<"CHAT WITH HER!"<<endl;
}
else{
    cout<<"IGNORE HIM!"<<endl;
}
 
}
