//
// Created by Антон Чапарин on 05.03.2021.
// Copyright (c) 2021 a-cha. All rights reserved.
//

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"

class Squad : public ISquad
{
public:
    Squad();
    Squad(const Squad & other);
    ~Squad();

    Squad& operator=(const Squad &other);

    int getCount() const;
    ISpaceMarine* getUnit(int) const;
    int push(ISpaceMarine*);

private:
    ISpaceMarine **	marArray;
    int				lenArray;
};


#endif
