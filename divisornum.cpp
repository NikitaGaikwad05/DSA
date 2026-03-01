//check the divisor of number
#include<iostream>
using namespace std;
void dividornum(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}
int main(){
    int n;
    cin>>n;
    dividornum(n);
    return 0;
}
