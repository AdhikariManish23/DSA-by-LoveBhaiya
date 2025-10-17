#include <iostream>

using namespace std;

int main() {
  int D, K,N;
  cin >> D >> K >> N;

  int count = 0;
  for (int i = 0; i < D; i++) {
    for (int j = 0; j < D; j++) {
      if ((i ^ j) == K) {
        count++;
      }
    }
  }

  cout << count << endl;

  return 0;
}