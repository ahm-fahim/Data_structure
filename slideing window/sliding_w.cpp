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
        string a, b,c;
        cin >> a;
        cin >> b;

        int ans = 0;

        for (int i = 0; i < b.size();i++){
            c += a[i];
        }

        if(c==b)
            ans++;

        for (int i = b.size(); i < a.size();i++){
            c += a[i];
            c.erase(c.begin());
            if(c==b)
                ans++;
        }
        cout << ans<<'\n';
    }

    return 0;
}