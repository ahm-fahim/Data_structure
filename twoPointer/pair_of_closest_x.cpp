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

// find the pair from two array whose sum is closest to the x.
void twoPointer(int arr[], int n, int x){
    int left = 0;
    int right = n - 1;

    int diff = INT_MAX;
    int idx1, idx2;
    while (left < right)
    {
        int sum = arr[left] + arr[right];

        if(abs(sum-x)<diff){
            idx1 = left;
            idx2 = right;
            diff = abs(sum - x);
        }
        (sum > x) ? right-- : left++;
    }

    cout << arr[idx1] << " " << arr[idx2] << " " << arr[idx1] + arr[idx2] << '\n';
}

int main()
{
    make_fast();
    int t;
    cin >> t;

    while(t--){
        int n,x;
        cin >> n>> x;

        int arr[n + 1];
        for (int i = 0; i < n;i++)
            cin >> arr[i];

        sort(arr, arr + n);

        twoPointer(arr, n, x);
    }

    return 0;
}