#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  int C = 1;
  for (int i = 0; i < B; i++) {
    C = C * A;
  }
  cout << C << endl;
}
