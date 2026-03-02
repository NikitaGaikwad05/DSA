//print n to 1 using recurison
#include<iostream>
using namespace std;
void f1(int i,int n){
    if(i<1){
        return;
    }
    cout<<i<<endl;
    f1(i-1,n);
}
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    f1(n,n);
}
