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
    int n;
    cin>>n;

    int a[n+4];
    for(int i=0;i<n;i++)
        cin>>a[i];

    ll sum1=0,sum2=0,ans=0;
    int l=0;
    int r=n-1;
    while(l<=r)
    {
        if(sum1<sum2)
        {
            sum1+=a[l];
            l++;
        }
        else{
            sum2+=a[r];
            r--;
        }
        if(sum1==sum2)ans=sum1;
    }
    cout<<ans<<'\n';

    return 0;
}