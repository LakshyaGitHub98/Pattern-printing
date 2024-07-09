#include<bits/stdc++.h>
using namespace std;
void pattern_2()
{
    int n;
    cout<<"Enter the number of lines of pattern you wana to print:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<(i+1);j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
    pattern_2();
    return 0;
}