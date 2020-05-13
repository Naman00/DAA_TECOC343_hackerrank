#include<bits/stdc++.h>
#define ral(i,n) for(int i=1;i<=n;i++)
#define mod 1000000007
#define vect vector<int>
#define pb push_back
#define lli long long int
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
            int n;
            cin>>n;
            int a[n]={0},b[n]={0};
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    int x;
                    cin>>x;
                    a[i]+=x;
                    b[j]+=x;
                }
            }
            sort(a,a+n);
            sort(b,b+n);
            int count=0;
            
            for(int i=0;i<n;i++)
            {
               if(a[i]==b[i])
                    count++;
            }
            if(count==n)
                cout<<"Possible"<<endl;
            else
                cout<<"Impossible"<<endl;
    }
}
