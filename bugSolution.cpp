#include <iostream>
#include <vector>
#include <stdexcept>

int main() {
  std::vector<int> vec = {1, 2, 3, 4, 5};

  try {
    // Use at() for bounds checking
    vec.at(5) = 6;  // Throws std::out_of_range exception
  } catch (const std::out_of_range& oor) {
    std::cerr << "Out of Range error: " << oor.what() << '\n';
  }

  //Alternative, manual check
  int index = 5;
  if(index < vec.size()){
    vec[index] = 6;
  } else {
    std::cerr << "Index out of bounds" << std::endl;
  }

  return 0;
}
