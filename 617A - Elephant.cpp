#include <iostream >
using namespace std;

int main()
{
    int n;
    int steps = 0, rem;
    cin>>n;
    if(n>5){
        steps = steps + (n/5);
        rem = n%5;
        if(rem<5 && rem!=0){
            steps++;
        }
    }

    if(n<=5){
        steps++;
    }
    
    cout<<steps<<endl;
    return 0;
}
