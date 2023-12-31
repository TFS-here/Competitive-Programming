#include<bits/stdc++.h>
using namespace std;
//int digit=log10(n)+1;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        long long pro=1;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            pro*=a[i];
        }
        int temp= 2023/pro;
        //cout<<temp<<"    "<<temp*pro<<endl;
        if(temp*pro!=2023)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<2023/pro<<" ";
            for(int i=0;i<k-1;i++)
            {
                cout<<1<<" "<<endl;
            }
            cout<<endl;
            
            
        }
    
    }
    return 0;
}
//1, 7, 17, 119, 289 and 2023