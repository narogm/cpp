//
// Created by Mateusz on 09.04.2019.
//

#ifndef ZESTAW_PRZYKLADOWY_ROWER_H
#define ZESTAW_PRZYKLADOWY_ROWER_H

#include "Pojazd.h"

class Rower:public Pojazd{
protected:
    bool amatorski;
public:
    Rower(const Osoba& _wlasciciel, int _przebieg, bool _amatorski);
    virtual float mocKW() const;
};

#endif //ZESTAW_PRZYKLADOWY_ROWER_H
