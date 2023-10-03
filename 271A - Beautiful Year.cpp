#include <iostream>
using namespace std;

int main() {
    int y;
    cin>>y;
    int arr[4], y_copy, rem, distinct = 0;
    while (true)
    {
        if(distinct == 1){
            break;
        }
        y++;
        y_copy = y;

        //assign the digits into an array
        for(int i = 0; i<4; i++)
        {
            rem =  y_copy%10;
            arr[i] = rem;
            y_copy =  y_copy/10;
        }

        distinct = 1; 

        //check for distinct digits
        //if any digit repeats then set distinct = 0
        for(int i=0; i<3; i++){
                if(distinct == 0){
                    break;
                }
            for(int j = i+1; j<4;j++){
                if(arr[i] == arr[j]){
                    distinct = 0;
                    break;
                }
            }
        }

    }

    cout<<y<<endl;
    return 0;
}
