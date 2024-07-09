#include<bits/stdc++.h>
using namespace std;
void pattern_11()
{
    int n;
    cout<<"Enter the number of lines of pattern you wana to print:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<(i+1);j++)
        {
            if(j%2==0)
            cout<<"1";
            else
            cout<<"0";
        }
        cout<<endl;
    }
}
int main()
{
    pattern_11();
    return 0;
}