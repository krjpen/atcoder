#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string W;
  cin >> N;
  bool x = true;
  
  for (int i = 0; i < N; i++) {
    cin >> W;
    if(W != "and" && W != "not" && W != "that" && W != "the" && W != "you"){
      x = false;
    }
    else{
      x = true;
      break;
    }
  }

  if(x == true){
    cout << "Yes" <<endl;
  }
  else{
    cout << "No" << endl;
  }
}
