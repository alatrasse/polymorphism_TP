#ifndef YOSHI_H
#define YOSHI_H
#include <iostream>
#include "Character.cpp"

class Yoshi : public Character{
  public:
  Yoshi (int c);
  std::string WhatAmI() const override;
  void Accelerate() override;
  
  protected:
  int crests_;

};

#endif
