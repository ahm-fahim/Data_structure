/****~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~****\
 |  Problems! Problems! Problems! I Don't Like It, I Avoid.             |
 |  But Problems Likes Me! I can't Avoid!                               |
 |                                                                      |
 |  * A.H.M. Fahim Morshed  *                                           |
 |  Github   - ahm-fahim                                                |
 |  Linkedin - https://www.linkedin.com/in/md-fahim-morshed-5b2126233/  |
 |  Gmail    - contactahmfahim@gmail.com                                |
\****~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~****/

#include <bits/stdc++.h>
using namespace std;
#define make_fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long int

int main()
{
    make_fast();
    int t;
    cin >> t;

    while(t--){
        ll n, m, k;
        cin >> n >> m >> k;

        ll a[n],b[m];
        map<ll,ll>mp1,mp2;

        for(ll i=0;i<n;i++) 
            cin>>a[i];

        for(ll i=0;i<m;i++) {
            cin >> b[i];
            mp1[b[i]]++;
        }

        ll cnt = 0;
        for(ll i=0;i<m;i++){
            mp2[a[i]]++;
            if(mp1[a[i]] && (mp2[a[i]] <= mp1[a[i]])) cnt++;
        }
        
        ll ans = 0;
        if(cnt>=k) ans++;
        
        for(ll i=1,j=m;j<n;i++,j++){
            mp2[a[i-1]]--;
            if(mp1[a[i-1]] && mp2[a[i-1]] < mp1[a[i-1]])
                cnt--;
            
            mp2[a[j]]++;
            if(mp1[a[j]] && mp2[a[j]] <= mp1[a[j]] ) 
                cnt++;
        
            if(cnt>=k) 
                ans++;
        }
        
        cout<<ans<<'\n';
    }

    return 0;
}