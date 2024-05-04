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

void prefix_sum(vector<int> &v){
    for (int i = 1; i < v.size();i++)
        v[i] = v[i - 1] + v[i];

    return;
}

int main()
{
    make_fast();
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n;i++)
        cin >> v[i];

    prefix_sum(v);

    for (int i = 0; i < n;i++)
        cout<< v[i] <<" ";

    return 0;
}