#include <vector>
#include <iostream>
#include "Mario.cpp"
#include "Yoshi.cpp"

int main(){
 
    Character* mario = new Mario();
    Character* yoshi = new Yoshi();

    std::vector<Character*> racers;
    racers.push_back(mario);
    racers.push_back(yoshi);

    for (auto i : racers) {
        i->display();
    }
    std::cout << std::endl << "Here we go!" << std::endl;
    
    for (int i = 0; i < 10 ; i++){
      for (auto r : racers){
        r->Accelerate();
        r->display();
        }
      std::cout << std::endl;
    }
    delete mario;
    delete yoshi;
    
  return EXIT_SUCCESS;
}

