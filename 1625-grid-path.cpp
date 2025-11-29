#include <iostream>
#include <cstdint>
#include <chrono>

using namespace std;

bool visited[7][7] = {false};
int paths = 0, steps = 0;

void solved(int r, int c) {
  if(visited[r][c]) {
    return;
  }

  if(r == 6 && c == 0) {
    // cout << steps << endl;
    if(steps == 48) {
      paths++;
      // cout << paths << " " << endl;
    }
    return;
  }

  visited[r][c] = true;

  if(r < 6 && visited[r + 1][c] == false) {
    steps++;
    solved(r + 1, c);
    steps--;
  }

  if(r > 0 && visited[r - 1][c] == false) {
    steps++;
    solved(r - 1, c);    
    steps--;
  }

  
  if(c < 6 && visited[r][c + 1] == false) {
    steps++;
    solved(r, c + 1);
    steps--;
  }
  
  if(c > 0 && visited[r][c - 1] == false) {
    steps++;
    solved(r, c - 1);
    steps--;
  }

  visited[r][c] = false;
}

int main()
{
  int r = 7;
  int c = 7;  

  auto start = std::chrono::high_resolution_clock::now();
  solved(0, 0);  
  // cout << "Hello, World!" << endl;

  std::cout << paths << std::endl;
  
  auto end = std::chrono::high_resolution_clock::now();

  std::chrono::duration<double, std::milli> ms = end - start;
  std::cout << "Time: " << ms.count() << " ms\n";

  cin.get();
  return 0;
}