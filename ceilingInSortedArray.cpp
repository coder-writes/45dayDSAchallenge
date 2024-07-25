#include <bits/stdc++.h>
using namespace  std;


#define int long long
#define vec(a,n) vector<int>(a)(n,0);
#define vi(a) for(auto &val:a){cin>>val;}
#define vo(a) for(auto &val:a){cout<<val<<" ";}
#define srt(a) sort(a.begin(),a.end())
#define pb(a) push_back(a)
#define f first
#define s second
#define all(a) a.begin(),a.end()
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)

//========================= CODES FOR PRINTING NUMBER==========================================//
#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl
#define yes cout<<"yes"<<endl
#define no cout<<"no"<<endl
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl
#define dbg(var) cout<<#var<<"="<<var<<endl

//=====================================funtions==========================================================//
//written by Rishi Verma
//https://www.linkedin.com/in/rishi-verma-sde/
int gcd(int a,int b) { if (b==0) return a; return gcd(b, a%b); }
int lcm(int a,int b) { return a/gcd(a,b)*b; }
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
bool prime(int a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
  
void solution(){
    
    int n ;
    cin>>n;
    vec(nums,n);
    vi(nums);
    int floor = INT_MIN;
    int ceil = INT_MAX;
    vector<int> arr = {0,1,5,20};
    FOR(i,0,n){

        FOR(j,0,n){
            if(nums[j]<=arr[i] && floor<nums[j]){
                floor = nums[j];
            }
           
        }
        dbg(floor);
    }

    
}

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--) solution();

  return 0;
}