#include<bits/stdc++.h>
#define ral(i,n) for(int i=0;i<n;i++)
#define mod 1000000007
#define vect vector<int>
#define pb push_back
#define lli long long int
using namespace std;

long long iNum = 0;

void cntInv(vector<int>& a, vector<int>& b, int l, int r){
    if(r - l < 2)
        return;
    int mid = (l + r) / 2;
    cntInv(b, a, l, mid);
    cntInv(b, a, mid, r);
    int i = mid - 1;
    int j = r - 1;
    int k = r - 1;
    while(i >= l && j >= mid){
        if(a[j] >= a[i])
            b[k--] = a[j--];
        else{
            iNum += j - mid + 1;
            b[k--] = a[i--];
        }
    }
    while(i >= l){
        b[k--] = a[i--];
    }
    while(j >= mid){
        b[k--] = a[j--];
    }
}

int main() {
      
    int T;
    cin >> T;
    while(T--){
        vector<int> a;
        int n;
        cin >> n;
        ral(i,n){
            int num;
            cin >> num;
            a.push_back(num);
        }
        vector<int> b(a);
        iNum = 0;
        cntInv(a, b, 0, a.size());

        cout << iNum << endl;
    }
    return 0;
}
