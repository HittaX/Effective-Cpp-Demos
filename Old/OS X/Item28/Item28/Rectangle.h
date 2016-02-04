//
//  Header.h
//  Item28
//
//  Created by SongZhiPing on 2/4/16.
//  Copyright © 2016 SongZhiPing. All rights reserved.
//

#ifndef Header_h
#define Header_h

#include "Point.hpp"
#include <memory>

struct RectData{
    Point ulhc;
    Point lrhc;
};

class Rectangle{
private:
    RectData *pData = new RectData;
public:
    
    Rectangle(Point& c1,Point& c2)
    {
//        pData = new RectData;
        pData->ulhc = c1;
        pData->lrhc = c2;
    }
    Point& upperLeft() const{
        return pData->ulhc;
    }
    
    Point& lowerRight() const{
        return pData->lrhc;
    }
    
    void getRect()
    {
        std::cout << pData->ulhc.getX() << pData->ulhc.getY() << std::endl;
        std::cout << pData->lrhc.getX() << pData->lrhc.getY() << std::endl;
    }
};

#endif /* Header_h */
