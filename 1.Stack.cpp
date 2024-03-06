
/****~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~****\
 |  Problems! Problems! Problems! I Don't Like It, I Avoid.             |
 |  But Problems Likes Me! I can't Avoid!                               |
 |                                                                      |
 |  A.H.M. Fahim Morshed                                                |
\****~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~****/

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl '\n';
#define ll long long int
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()

bool isBalanced(char c1, char c2){
    return ((c1 == '(' && c2 == ')') || (c1 == '[' && c2 == ']') || (c1 == '{' && c2 == '}'));
}

int main()
{
    optimize();

    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        stack<char> st;

        bool ok = 1;
        for (auto u : s)
        {
            if(u =='(' || u =='{' || u =='[' )
                st.push(u);
            else{
                if(st.empty()){
                    ok = 0;
                    break;
                }else{
                     if(isBalanced(st.top(),u)){
                         st.pop(); 
                     }else{
                         ok = 0;
                         break;
                     }
                }
            }
        }

        if(!st.empty())
            ok = 0;
        cout << (ok ? "Yes" : "No") << endl;
    }

    return 0;
}

