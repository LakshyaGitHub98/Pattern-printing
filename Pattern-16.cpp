#include<bits/stdc++.h>
using namespace std;
void pattern_16()
{
    int n;
    char ch;
    cout<<"Enter the number of lines of pattern you wana to print:";
    cin>>n;
    ch='A';
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>i;j--)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
        ch++; 
    }
}
int main()
{
    pattern_16();
    return 0;
}