#include <iostream>
#include <vector> 
#include <queue>

using namespace std; 

int BFS(int N, int M, vector<int>& a, vector<int>& b) {
  vector<vector<int>> adj(N + 1);

  for (int i = 0; i < M; i++) {
    adj[a[i]].push_back(b[i]);
    adj[b[i]].push_back(a[i]);
  }

  queue<int> fila;
  vector<bool> visitado(N + 1, false);

  fila.push(1);
  visitado[1] = true;

  int distancia = 0; 

  while (!fila.empty()) {
    int nivelSize = fila.size(); 

    for (int i = 0; i < nivelSize; i++) {
      int ilha = fila.front();
      fila.pop();

      if (ilha == N)
        return distancia;

      for (int vizinho : adj[ilha]) {
        if (!visitado[vizinho]) {
          visitado[vizinho] = true;
          fila.push(vizinho);
        }
      }
    }

    distancia++; 
  }

  return -1;
}


int main() {
  int N, M; 
  cin >> N >> M; 

  vector<int> a(M); 
  vector<int> b(M); 

  for(int i = 0; i < M; i++)
    cin >> a[i] >> b[i]; 
  
  int result = BFS(N, M, a, b);
  
  if(result != -1 && result <= 2)
    cout << "POSSIBLE\n"; 
  else
    cout << "IMPOSSIBLE\n"; 
}