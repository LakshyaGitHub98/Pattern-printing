#include<bits/stdc++.h>
using namespace std;
void pattern_10()
{
    int n,a;
    cout<<"Enter the number of lines of pattern you wana to print:";
    cin>>a;
    a++;
    n=(a/2)+1;
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=((2*i)-1);j++)//For star printing
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n;i>0;i--)
    {
        for(int j=1;j<=((2*i)-1);j++)//For star printing
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
    pattern_10();
    return 0;
}