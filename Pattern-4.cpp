#include<bits/stdc++.h>
using namespace std;
void pattern_4()
{
    int n;
    cout<<"Enter the number of lines of pattern you wana to print:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
}
int main()
{
    pattern_4();
    return 0;
}