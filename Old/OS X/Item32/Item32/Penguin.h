//
//  Penguin.h
//  Item32
//
//  Created by SongZhiPing on 2/8/16.
//  Copyright © 2016 SongZhiPing. All rights reserved.
//

#ifndef Penguin_h
#define Penguin_h

#include "Bird.h"

#include <exception>

class Penguin : public Bird{
public:
    virtual void fly()
    {
        throw runtime_error("Attempt to make a penguin fly.");
    }
};

#endif /* Penguin_h */
