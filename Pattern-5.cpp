#include<bits/stdc++.h>
using namespace std;
void pattern_5()
{
    int n;
    cout<<"Enter the number of lines of pattern you wana to print:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>i;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
    pattern_5();
    return 0;
}