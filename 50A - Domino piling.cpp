#include <iostream >
using namespace std;

int main(){
    int m,n, domino_size = 2, max_dominos;
    cin>>m>>n;
    max_dominos = (m*n) / domino_size;
    cout<<max_dominos<<endl;
}
