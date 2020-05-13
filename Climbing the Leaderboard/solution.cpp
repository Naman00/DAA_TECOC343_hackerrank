#include<bits/stdc++.h>
#define ral(i,n) for(int i=1;i<=n;i++)
#define mod 1000000007
#define vect vector<int>
#define pb push_back
#define lli long long int
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int r[n]={0};
    // int rank=0;
    r[0]=1;
    for(int i=0;i<n-1;i++)
    {
        if(a[i+1]==a[i])
            r[i+1]=r[i];
        else if(a[i+1]<a[i])
            r[i+1]=r[i]+1;

    }
    int k=n-1;
    for(int i=0;i<m;i++)
    {
       for(int j=k;j>=0;j--)
       {
           if(b[i]<a[j])
           {
            cout<<r[j]+1<<endl;
            k=j;
            break;

           }
            else if(b[i]==a[j])
            {
                cout<<r[j]<<endl;
                 k=j;
                break;
            }
            else if(b[i]>a[j] && j==0)
            {
                cout<<r[j]<<endl;
                // cout<<1;
                break;
            }
       } 
       
    }
    // cout<<1;
}
