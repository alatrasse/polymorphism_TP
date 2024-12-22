#include <iostream>
#include "Yoshi.h"
  
std::string Yoshi::WhatAmI() const{
  std::string s = std::to_string(crests_) +" crested Yoshi";
  return s;
}

Yoshi::Yoshi(int c) : Character(), crests_(c) {}


void Yoshi::Accelerate(){
if (speed_<max_speed_){
   speed_ += 2;
 }
}
