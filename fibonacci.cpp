include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
  if(n == 1) return 0;
  if(n == 2) return 1;
  f(n) = f(n-1) + f(n-2)
  return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
  for(int i = 1; i <= 10; i++){
    cout << fibonacci(i) << endl;
  }
  return 0;
 }
