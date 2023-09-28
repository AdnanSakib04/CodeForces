#include<stdio.h>
#include<string.h>
int main(){
int n;
scanf("%d", &n);
int p,v,t;
int count = 0;
while(n>0){
scanf("%d %d %d", &p, &v, &t);
if((p == 1 && v==1) || (p == 1 && t==1) || (v == 1 && t==1)){
count++;
}
n--;
}
    printf("%d\n", count);
}
