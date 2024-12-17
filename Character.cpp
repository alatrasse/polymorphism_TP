#include <iostream>
#include "Character.h"

float Character::max_speed_ = 10;
Character::Character(){
  speed_=0.;
}

void Character::display(){
  std::cout << "this character goes at " << speed_ << "km/h" << std::endl;

}

void Character::Accelerate(){
 if (speed_<max_speed_){
   speed_ += 1;
 }
 else{
 speed_=max_speed_;
 }
}

void Character::Break(){
  if (speed_ > 1){
    speed_ -= 1;
  }
  else{
  speed_ = 0. ;
  }
}

