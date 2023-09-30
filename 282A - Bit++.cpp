#include<iostream>
using namespace std;

int main(){
    int n, x = 0;
    cin>>n;
    string expression;

    for (int i = 0; i < n; i++)
    {
        cin>>expression;
        for (int j = 0; j < expression.size(); j++)
        {
            if (expression[j] == '+')
            {
                x++;
                break;
            }
            if (expression[j] == '-')
            {
                x--;
                break;
            }

        }
    }

    cout<<x<<endl;
}
