#include <iostream>
using namespace std;

int main(){
int n;
cin>>n;
int count_bill = 0;

while (n>0)
{
    if (n>=100)
    {
        count_bill = count_bill +  n/100;
        n = n%100;
    }
    else if(n>=20){
        count_bill = count_bill +  n/20;
        n = n%20;
    }
    else if(n>=10){
        count_bill = count_bill +  n/10;
        n = n%10;
    }
    else if(n>=5){
        count_bill = count_bill +  n/5;
        n = n%5;
    }
    else{
        count_bill = count_bill +  n;
        break;
    }
}

cout<<count_bill<<endl;
    return 0;
}
