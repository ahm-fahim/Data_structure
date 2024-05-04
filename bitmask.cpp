//
// Created by Fahim  on 25/4/24.
//

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
#define br '\n';

int main()
{
    make_fast();
    int n;cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)cin>>arr[i];

    int s; cin>> s;
    int ans = 0;

    for(int mask = 0; mask< (1<<n); mask++){
        int sum = 0;
        for(int i = 0; i < n; i++){
            if((mask >> i) & 1){
                sum += arr[i];
            }
        }
        if(sum == s) ans++;
    }
    cout<<ans<<br;

    return 0;
}