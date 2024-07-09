#include<bits/stdc++.h>
using namespace std;
void pattern_7()
{
    int n;
    cout<<"Enter the number of lines of pattern you wana to print:";
    cin>>n;
    for(int i=n;i>0;i--)
    {
        for(int j=n;j>i;j--)//For gap printing
        {
            cout<<" ";
        }
        for(int j=1;j<=((2*i)-1);j++)//For star printing
        {
            cout<<"*";
        }
        for(int j=n;j>i;j--)//For gap printing
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    pattern_7();
    return 0;
}