#include<bits/stdc++.h>
using namespace std;
void pattern_6()
{
    int n;
    cout<<"Enter the number of lines of pattern you wana to print:";
    cin>>n;
    for(int i=n;i>0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
int main()
{
    pattern_6();
    return 0;
}