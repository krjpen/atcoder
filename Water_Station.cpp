#include <iostream>
#include <string>
using namespace std;

int main() {
  int N;
  cin >> N;

  if(N % 5 == 0){
    cout << N;
  }
  else if(N % 5 == 1){
    cout << N-1;
  }
  else if(N % 5 == 2){
    cout << N-2;
  }
  else if(N % 5 == 3){
    cout << N+2;
  }
  else if(N % 5 == 4){
    cout << N+1;
  }
}
