#ifndef MARIO_H
#define MARIO_H
#include <iostream>
#include "Character.cpp"

class Mario : public Character{
  public:
  std::string WhatAmI() const override;

};

#endif
