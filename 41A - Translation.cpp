#include<iostream>
#include<string>
using namespace std;
 
int main(){
    string s,t;
    cin>>s;
    cin>>t;
    int status = 1;
 
    if(s.size() != t.size()){
        cout<<"NO"<<endl;
    }
    else{
       for (int i = 0; i < s.size(); i++)
       {
        if(s[i] != t[t.size()-i-1]){
           cout<<"NO"<<endl;
           status = 0;
           break;
        }
 
       }
      if(status)
         cout<<"YES"<<endl;
 
    }
}
