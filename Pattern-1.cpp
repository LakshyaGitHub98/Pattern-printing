#include<bits/stdc++.h>
using namespace std;
void pattern_1()
{
    int n;
    cout<<"Enter the number of lines of pattern you wana to print:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
    pattern_1();
    return 0;
}