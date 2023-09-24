#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ii = pair<ll, ll>;
vector<int> ab[100001];
int main(){
    int n, m, obs = 0;
    int a, b, flag = 0;

    cin>>n>>m;
    vector<int> hi(n + 1);

    for (int i = 1; i <= n; i++){
        cin>>hi[i];
    }
    for (int i = 0; i < m; i++){

        cin >> a >> b;
        ab[a].push_back(b);
        ab[b].push_back(a);
    }
    for (int i = 1; i <= n; i++){
        flag = 0;
        for (int j = 0; j < ab[i].size(); j++){
            if (hi[i] <= hi[ab[i][j]]){
                flag = 1;
                break;
            }
        }
        if (!flag) obs++;
    }
    cout<<obs<<'\n';
    return 0;
}