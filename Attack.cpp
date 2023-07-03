#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int A;
  long long int B;
  cin >> A;
  cin >> B;
  long long int C = A / B;
  int D = A % B;

  if (D == 0) {
    cout << C;
  } else {
    cout << C + 1;
  }
}
