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
    vector<int> v(n+1);
    for(int i = 0;i<n;i++)cin>> v[i];
    int x = 4;
    if(binary_search(v.begin(), v.end(), x)){
        cout << "YES" << br;
    }else{
        cout << "NO" << br;
    }

    auto it = upper_bound(v.begin(),v.end(),x);
    cout<< (it-v.begin())<<br;
    it = lower_bound(v.begin(),v.end(),x);
    cout<< (it-v.begin())<<br;

    return 0;
}