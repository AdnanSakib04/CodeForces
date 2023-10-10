#include<iostream>
using namespace std;
int main(){
    int n, rooms_available = 0;
    cin>>n;
    int person_living[n], max_capacity[n];

    for (int i = 0; i < n; i++){
        cin>>person_living[i]>>max_capacity[i];
    }

    for (int i = 0; i < n; i++){
        if(max_capacity[i] - person_living[i] >= 2){
            rooms_available++;
        }
    }
    cout<<rooms_available<<endl;

return 0;
}
