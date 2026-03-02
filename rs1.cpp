//print name n times by using the recurison
#include<iostream>
using namespace std;
void f1(int i,int n){
    if(i>n){
        return;//base condition 
    }
    cout<<"Nikita"<<endl;
        f1(i+1,n); //recursive call
}
int main(){
    int n;
    cin>>n;
    f1(1,n);
}
