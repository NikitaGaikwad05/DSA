// by using the is else statement build the grade-System
#include<iostream>
using namespace std;
int main(){
    int mark;
    cout<<"Enter the marks:";
    cin>>mark;
    if(mark<25){
        cout<<"F";
    }
    else if( mark<=44){
        cout<<"E";
    }
    else if( mark<=49){
        cout<<"D";
    } else if( mark<=59){
        cout<<"C";
    }
    else if(mark<=79){
        cout<<"B";
    }
    else if(mark<=100){
        cout<<"A";
    }
    return 0;
}
