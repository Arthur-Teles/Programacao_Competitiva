#include <iostream>
#include <string>
#include <vector>
using namespace std;

int n, m;
vector<vector<char>> tabuleiro;
vector<vector<bool>> visitados;
string palavra;

bool dfs(int r, int c, int i) {
    if (i == palavra.length()) return true;
    if (r < 0 || c < 0 || r >= n || c >= m || palavra[i] != tabuleiro[r][c] || visitados[r][c]) 
        return false;

    visitados[r][c] = true;

    bool resp = (dfs(r+1, c, i+1) ||
                 dfs(r-1, c, i+1) ||
                 dfs(r, c+1, i+1) ||
                 dfs(r, c-1, i+1));

    visitados[r][c] = false;
    return resp;
}

int main() {
    cin >> n >> m;

    tabuleiro.assign(n, vector<char>(m));
    visitados.assign(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> tabuleiro[i][j];

    cin >> palavra;

    bool existe = false;
    for (int i = 0; i < n && !existe; i++) {
        for (int j = 0; j < m && !existe; j++) {
            if (dfs(i, j, 0)) {
                existe = true;
            }
        }
    }

    if (existe) cout << "Existe!" << endl;
    else cout << "Não existe!" << endl;

    return 0;
}