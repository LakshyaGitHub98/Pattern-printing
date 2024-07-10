#include<bits/stdc++.h>
using namespace std;
void pattern_21()
{
    int n;
    cout<<"Enter the number of lines of pattern you wana to print:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        if(i==0 or i==(n-1))
        {
            for(int j=0;j<n;j++)
            {
                cout<<"*";
            }
        }
        else if(i%2==0)
        {
            for(int j=0;j<n;j++)
            {
                cout<<" ";
            }
        }
        else
        {
            for(int j=0;j<n;j++)
            {
                if(j==0 or j==(n-1))
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
}
int main()
{
    pattern_21();
    return 0;
}