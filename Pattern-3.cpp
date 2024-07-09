#include<bits/stdc++.h>
using namespace std;
void pattern_3()
{
    int n;
    cout<<"Enter the number of lines of pattern you wana to print:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=(i+1);j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
int main()
{
    pattern_3();
    return 0;
}