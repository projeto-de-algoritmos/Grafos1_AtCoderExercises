#include <iostream>
#include <vector> 
#define MAX 1e6

using namespace std; 
 
void DFS(vector<int> adj[], vector<bool> &visitado, int &caminhos, int u){
  visitado[u] = true; 
  caminhos++;

  if(caminhos >= MAX)
    return; 

  for (int v : adj[u]){
    if(caminhos >= MAX)
      return; 
    if(!visitado[v])
      DFS(adj, visitado, caminhos, v); 
  }

  visitado[u] = false; 
}; 

int main() {
  int n, m, u, v; 
  cin >> n >> m; 

  vector<int> adj[n + 1]; 

  for (int i = 0; i < m; i++){
    cin >> u >> v; 
    u--, v--; 
    adj[u].push_back(v); 
    adj[v].push_back(u); 
  }

  vector<bool> visitado(n, false); 
  
  int caminhos = 0; 
  DFS(adj, visitado, caminhos, 0);

  cout << min(caminhos, (int) MAX) << endl; 
}