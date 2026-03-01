//given number n find out and return the number of digit present in a number 
#include <iostream>
using namespace std;
    int countdigit(int n){
        int count=0;
        while(n>0){
            count=count+1;
            n=n/10;
        }
        return count;
    }

int main() {
    int n;
    cin>>n;
    int digit=countdigit(n);
    cout<<digit;
    return 0;
}
