#include<bits/stdc++.h>
using namespace std;
void pattern_13()
{
    int n,a;
    cout<<"Enter the number of lines of pattern you wana to print:";
    cin>>n;
    a=1;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=(i+1);j++)
        {
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
}
int main()
{
    pattern_13();
    return 0;
}