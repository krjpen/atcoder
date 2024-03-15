#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, i;
  cin >> n;
  
  int counter = 1;
  cin >> a;
  int k = a;
  
  for (i = 0; i < n-1; i++) {
    cin >> a;
    if(k != a) counter = 0;
  }
  if(counter == 0){
    cout << "No";
  }
  else{
    cout << "Yes";
  }
}
