#include<iostream>
using namespace std;
int main()
{
    int a,b,n,m,temp;
    cin>>n;
    cin>>m;
    a=n;
    b=m;
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }

    cout<<a<<endl;

    return 0;
}

