#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  int x, y;
  int x1 = 0;
  int y1 = 0;
  cin >> n;
  
  for (int i = 0; i < n; i++){
    cin >> x >> y;
    x1 += x;
    y1 += y;
  }

  if(x1 == y1){
    cout << "Draw";
  }
  else if(x1 > y1){
    cout << "Takahashi";
  }
  else{
    cout << "Aoki";
  }
}
