#include <iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int lowercase = 0, uppercase = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]<='Z')
        {
            uppercase++;
        }
        else
        {
            lowercase++;
        }

    }
    if(uppercase<=lowercase){
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] <= 'Z'){
                s[i] = s[i] + 32;
            }
        }
    }
    else{
         for (int i = 0; i < s.size(); i++)
        {
            if(s[i] >= 'a'){
                s[i] = s[i] - 32;
            }
        }
    }
    cout<<s<<endl;
}
