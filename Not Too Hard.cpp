#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x, s;
  cin >> n >> x;
  int counter = 0;
  for (int i = 0; i < n; i++){
    cin >> s;
    if(s <= x){
      counter += s;
    }
  }
  cout << counter;
}
