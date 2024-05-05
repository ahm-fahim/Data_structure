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
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];

        vector<int>v;
        int left=0;
        int right=n-1;
        while(left<right)
        {
            v.push_back(a[left]);
            v.push_back(a[right]);
            left++;
            right--;
        }
        if(n%2==1)
            v.push_back(a[left]);

        for(int i=0;i<n;i++)
            cout<<v[i]<<" ";
        cout<<'\n';
    }

    return 0;
}