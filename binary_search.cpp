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

// recursive binary search function
int recursiveBinarySearch(int arr[], int n, int key){
    int l = 0, r = n;
    int mid = (l + r) / 2;
    
    if(l>r)
        return -1;
    
    if(arr[mid] == key)
        return mid;
    else if(arr[mid]< key)
        return recursiveBinarySearch(arr, mid + 1, key);
    else
        return recursiveBinarySearch(arr, mid - 1, key);
    
    if (l <= r)
        return recursiveBinarySearch(arr, mid, key);

}

// normal binary search function
int binarySearch(int arr[],int n, int key){
    int l = 0, r = n;
    while(l<=r){
        int mid = (l + r) / 2;

        if(arr[mid]== key)
            return mid;
        else if(arr[mid] > key)
            r = mid - 1;
        else if(arr[mid] < key)
            l = mid + 1;
    }
    return -1;
}

int main()
{
    make_fast();
    int n, key;
    cin >> n >> key;

    int arr[n + 1];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    cout << binarySearch(arr, n, key)<< br;

    cout << recursiveBinarySearch(arr, n, key)<< br;

    return 0;
}