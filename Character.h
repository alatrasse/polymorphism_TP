#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>

class Character{

  public:
  Character();
  auto speed() const {return speed_;} 
  void display();
  
  void Accelerate();
  void Break();
  
  
  private:
  float speed_;
  static float max_speed_;
  
  
};

#endif
