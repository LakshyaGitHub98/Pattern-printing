#include<bits/stdc++.h>
using namespace std;
void pattern_21()
{
    int n;
    cout<<"Enter the number of lines of pattern you wana to print:";
    cin>>n;
    for(int i=0;i<2*n-1;i++)
    {
        for(int j =0;j<2*n-1;j++)
        {
            int top=i;
            int left=j;
            int right=2*(n-1)-j;
            int down=2*(n-1)-i;
            cout<<" "<<(n-min(min(top,down),min(left,right)));
        }
        cout<<endl;
    }    
}
int main()
{
    pattern_21();
    return 0;
}