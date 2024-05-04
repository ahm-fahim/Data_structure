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

// find the pair whose sum is equal to x
bool twoPointer(int arr[],int x, int n){
    int i = 0;
    int j = n - 1;

    while(i<=j){
        int sum = arr[i] + arr[j];
        if(sum == x)
            return true;
        (sum > x) ? j-- : i--;
    }
    return false;
}

int main()
{
    make_fast();
    int t;
    cin >> t;

    while(t--){
        int n, x;
        cin >> n >> x;
        int arr[n+1];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr, arr + n);

        cout << ((twoPointer(arr, x, n)) ? "YES" : "NO") << '\n';
    }

    return 0;
}