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


// find the pair in array whose sum is closest to the x.
void twoPointer(int a[] , int b[], int n,int m, int x){
    int left = 0;
    int right = m - 1;

    int diff = INT_MAX;
    int idx1, idx2;
    while (left <= right && right >= 0)  
    {
        int sum = a[left] + b[right];

        if(abs(sum-x)<diff){
            idx1 = left;
            idx2 = right;
            diff = abs(sum - x);
        }
        (sum > x) ? right-- : left++;
    }

    cout << a[idx1] << " " << b[idx2] << " " << a[idx1] + b[idx2] << '\n';
}

int main()
{
    make_fast();
    int t;
    cin >> t;

    while(t--){
        int n, m, x;
        cin >> n >> m>> x;

        int a[n+1];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);

        int b[m+1];
        for (int i = 0; i < m; i++)
            cin >> b[i];
        sort(b, b + n);

        twoPointer(a, b, n, m, x);
    }

    return 0;
}