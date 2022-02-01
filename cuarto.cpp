#include<bits/stdc++.h>
using namespace std;
bool visitado[7][7] = {0};
char cuarto[7][7] = {
  {'$','$','$','$','$','$','$'},
  {'$','.','$','.','.','.','$'},
  {'$','.','$','.','$','.','$'},
  {'$','.','$','.','$','.','$'},
  {'$','.','.','.','$','.','$'},
  {'$','.','$','.','$','.','*'},
  {'$','$','$','$','$','$','$'}
};

bool solve(int x, int y){
  if(visitado[x][y] == 1) return 0;
  if(cuarto[x][y] == '$') return 0;
  if(cuarto[x][y] == '*') return 1;

  visitado[x][y] = 1;
  return solve(x-1,y) or solve(x,y+1) or (x+1,y) or (x,y-1);
}
int main(){
  int x = 1;
  int y = 1;
  cout << (solve(x,y) == true ? "Es posible" : "No es posible") << endl;
  return 0;
}
