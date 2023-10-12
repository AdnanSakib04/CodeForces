#include<iostream>
using namespace std;

int main(){
int n, k, participant_count=0;
cin>>n>>k;
int arr[n];

for(int i=0; i<n; i++){
    cin>>arr[i];
}

for(int i=0; i<n; i++){
    if(arr[i]>0 && arr[i]>=arr[k-1]){
            participant_count++;
    }
}
cout<<participant_count<<endl;

return 0;
}
