#include<iostream>
using namespace std;

int findMin(int a, int b, int c){
if (a<b && a<c)
    return a;
else if (b<a && b<c)
    return b;
else
    return c;
}

int main(){
int  n, k, l, c, d, p, nl, np;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;

int total_ml = k*l;
int max_toast = total_ml/nl;
int total_lime_slices = c*d;
int salt_for_each_glass = p/np;

int result = findMin(max_toast, total_lime_slices, salt_for_each_glass)/n;
cout<<result<<endl;

return 0;
}
