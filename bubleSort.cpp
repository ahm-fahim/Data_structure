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

int arr[101];

int main()
{
    make_fast();

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> arr[i];
    }
 
    for (int i = 1; i <= n; i++){
        for (int j = 1; j < n;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j + 1]);
            }
        }
        for (int i = 1; i <= n;i++){
            cout << arr[i] << " ";
        }
        cout << br;
    }

    cout << "BUBLE SORT" << br;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << br;

    return 0;
}