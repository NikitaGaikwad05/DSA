//print the number from 1 to n.
#include<iostream>
using namespace std;
void f1(int i,int n){
    if(i>n){
        return;
    }
    cout<<i<<endl;
    f1(i+1,n);
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    f1(1,n);
}
