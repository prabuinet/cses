#include <iostream>
#include <vector>
#include <sstream>
#include <utility>
#include <stack>

typedef long long ll;

using namespace std;

vector<pair<int, int>> path;

void tower(int source, int dest, int use, int n) {

  if(n == 1) {
    path.emplace_back(source, dest);
  }
  else {
    tower(source, use, dest, n - 1);
    path.emplace_back(source, dest);
    tower(use, dest, source, n - 1);
  }
}

struct Employee {
  int id;
  int age;
  int salary;

  Employee(int a, int b, int c) :
    id(a),
    age(b),
    salary(c)
  {

  }
};

int main()
{
  int n;
  cin >> n;

  tower(1, 3, 2, n);

  cout << path.size() << endl;

  for(auto [a, b] : path)
    cout << a << " " << b << endl;



  vector<Employee> employees;

  Employee e1 { 100, 50, 110000 };
  Employee e2 { 100, 50, 110000 };
  Employee e3 { 100, 50, 110000 };

  employees.push_back(e1);
  employees.push_back(e2);
  employees.push_back(e3);
  employees.emplace_back(100, 50, 110000);

  return 0;
}