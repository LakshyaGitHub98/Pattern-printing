#include<bits/stdc++.h>
using namespace std;
void pattern_14()
{
    int n;
    char ch;
    cout<<"Enter the number of lines of pattern you wana to print:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        ch='A';
        for(int j=1;j<=(i+1);j++)
        {
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
}
int main()
{
    pattern_14();
    return 0;
}