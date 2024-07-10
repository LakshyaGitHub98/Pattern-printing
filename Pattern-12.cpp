#include<bits/stdc++.h>
using namespace std;
void pattern_12()
{
    int n;
    cout<<"Enter the number of lines of pattern you wana to print:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        //for space
        for(int j=1;j<=(2*(n-i));j++)
        {
            cout<<" ";
        }
        
        for(int j=i;j>0;j--)
        {
            cout<<j;
        }
        

        cout<<endl;
    }
}
int main()
{
    pattern_12();
    return 0;
}