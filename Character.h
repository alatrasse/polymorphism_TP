#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>

class Character{

  public:
  Character();
  auto speed() const {return speed_;} 
  void display();
  
  virtual std::string WhatAmI() const = 0;
  
  virtual void Accelerate();
  void Break();
  
  
  protected:
  float speed_;
  static float max_speed_;
  
  
};

#endif
