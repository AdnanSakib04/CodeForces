
#include <iostream >
using namespace std;

int main(){
    int m[5][5],i,j, found = 0, steps = 0, steps_row = 0, steps_col = 0;
    for (i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            cin>>m[i][j];
        }

    }

     for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            if(m[i][j] == 1){
                found = 1;
                break;
            }
        }
        if(found == 1){
            break;
        }

    }
    if(i==2 & j==2){
     cout<<steps<<endl;
    }
    else{
        steps_row = i - 2;
        if(steps_row<0){
            steps_row = - steps_row;
        }
        steps_col = j - 2;
        if(steps_col<0){
            steps_col = - steps_col;
        }
        steps = steps_row + steps_col;
        cout<<steps<<endl;
    }
}
