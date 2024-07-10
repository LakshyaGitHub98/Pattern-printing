#include<bits/stdc++.h>
using namespace std;
void pattern_17()
{
    int n;
    char ch;
    cout<<"Enter the number of lines of pattern you wana to print:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        ch='A';
        for(int j=n;j>i;j--)//For gap printing
        {
            cout<<" ";
        }
        for(int j=1;j<=((2*i)-1);j++)//For character  printing
        {
            cout<<ch;
            ch++;
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
    pattern_17();
    return 0;
}