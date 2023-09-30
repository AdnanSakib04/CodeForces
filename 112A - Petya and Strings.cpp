#include<iostream>
using namespace std;

int main(){
    string s1, s2;
    int s1_greater = 0, s2_greater = 0;
    cin>>s1;
    cin>>s2;

    for (int i = 0; i < s1.size(); i++)
    {
        if(s1[i]<='Z'){
            s1[i] = s1[i]+32;
        }
        if(s2[i]<='Z'){
            s2[i] = s2[i]+32;
        }

    }
    for (int i = 0; i < s1.size(); i++)
    {
        
        if(s1[i]>s2[i]){
          s1_greater = 1;
          break;
        }
        if(s1[i]<s2[i]){
          s2_greater = 1;
          break;
        }    
}

if(s1_greater){
    cout<<"1"<<endl;
}
else if(s2_greater){
    cout<<"-1"<<endl;
}
else{
    cout<<"0"<<endl;
}
}
