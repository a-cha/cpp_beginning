//
// Created by Антон Чапарин on 05.03.2021.
// Copyright (c) 2021 a-cha. All rights reserved.
//

#ifndef ISQUAD_H
#define ISQUAD_H

#include "ISpaceMarine.hpp"

class ISquad
{
public:
    virtual ~ISquad() {}
    virtual int getCount() const = 0;
    virtual ISpaceMarine* getUnit(int) const = 0;
    virtual int push(ISpaceMarine*) = 0;
};


#endif
