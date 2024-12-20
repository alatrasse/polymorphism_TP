#include <vector>
#include <iostream>
#include "Mario.cpp"
#include "Yoshi.cpp"

int main(){
  Mario M;
  Yoshi Y;
  std::vector<Character> racers = {M,Y};
  for (auto r : racers){
   
   std::cout << r.display() << ' ';
  }
 
 
  return EXIT_SUCCESS;
}

