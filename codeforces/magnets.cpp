//https://codeforces.com/problemset/problem/344/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, cnt = 0;
    cin >> n;
    vector<int>arr(n+1);

    for(int i=0; i<n; i++)
        cin >> arr[i];

    for(int i=0; i<n; i++){
        if(arr[i]!=arr[i+1]){
            cnt++;
        }
    }

    cout << cnt << "\n";


    return 0;
}
