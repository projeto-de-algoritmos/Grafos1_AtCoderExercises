#include <bits/stdc++.h>
using namespace std;
int stu[1001];
int cont = 0;

void add_edge(vector<int> g[], int e1, int e2){
    g[e1].push_back(e2);
}

void DFS_visited(vector<int> g[], int visited[], int v){
    visited[v] = -1;
    for (int i = 0; i < g[v].size(); i++) {
        int x = g[v][i];
        if (visited[x] == 0) {
            DFS_visited(g, visited, x);
        } else {
            stu[cont] = x;
            cont++;
            break;
        }
    }
}

void DFS(vector<int> g[], int n){
    for (size_t i = 1; i <= n; i++){
        int visited[n+1] = {0};  
        DFS_visited(g, visited, i);
    }
}

int main(){
    int n, e2;
    cin >> n;
    vector<int> g[n+1];

    for (size_t i = 1; i <= n; i++){
        cin>>e2;
        add_edge(g, i, e2);
    }

    DFS(g, n);
    cout<<stu[0];

    for (size_t i = 1; i <n; i++) cout<<" "<<stu[i];

    return 0;
}