#include <iostream>
#include "Yoshi.h"
  
std::string Yoshi::WhatAmI() const{
  std::string s = "Yoshi ";
  return s;
}

void Yoshi::Accelerate(){
if (speed_<max_speed_){
   speed_ += 2;
 }
}
