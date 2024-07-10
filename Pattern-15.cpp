#include<bits/stdc++.h>
using namespace std;
void pattern_15()
{
    int n;
    char ch;
    cout<<"Enter the number of lines of pattern you wana to print:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        ch='A';
        for(int j=n;j>i;j--)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}
int main()
{
    pattern_15();
    return 0;
}