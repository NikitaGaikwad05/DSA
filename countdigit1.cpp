//optimal solution of count the all digit of a number
#include <iostream>
#include<cmath>
using namespace std;
    int countdigit(int n)
    {
          int  count=(int)(log10(n)+1);
        return count;
    }

int main()
{
    int n;
    cin>>n;
    int digit=countdigit(n);
    cout<<digit;
    return 0;
}
