#include<iostream>

using namespace std;
int main()
{
    int n,a=1;
    cout<<"Enter a Number To find Factorial : ";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        a=a*i;
    }
    cout<<a;

    return 0;
}