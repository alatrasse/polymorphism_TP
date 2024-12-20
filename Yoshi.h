#ifndef YOSHI_H
#define YOSHI_H
#include <iostream>
#include "Character.cpp"

class Yoshi : public Character{
  public:
  std::string WhatAmI() const override;
  void Accelerate() override;

};

#endif
