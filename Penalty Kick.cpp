#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  for(int i = 1; i < n+1; i++){
    if(i % 3 == 0){
      cout << "x";
    }
    else{
      cout << "o";
    }
  }
}
