#include <iostream>
#include <vector>

int main() {
  std::vector<char> vec;
  vec.push_back(1); // true
  vec.push_back(0); // false
  bool b = vec[0]; //Now works as expected
  std::cout << std::boolalpha << b << std::endl; //Output: true
  return 0;
}