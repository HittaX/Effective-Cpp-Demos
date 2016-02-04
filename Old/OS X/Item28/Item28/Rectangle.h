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

using namespace std;
struct RectData{
    Point ulhc;
    Point lrhc;
    RectData(Point &c1,Point &c2)
    :ulhc(c1),lrhc(c2)
    {}
};

class Rectangle{
private:
    shared_ptr <RectData> pData;
public:
    
    Rectangle(Point& c1,Point& c2)
    {
        pData = make_shared<RectData>(c1,c2);
    }
    const Point& upperLeft() const{
        return pData->ulhc;
    }
    
    const Point& lowerRight() const{
        return pData->lrhc;
    }
    
    void getRect()
    {
        std::cout << pData->ulhc.getX() << "\t"<< pData->ulhc.getY() << std::endl;
        std::cout << pData->lrhc.getX() << "\t"<< pData->lrhc.getY() << std::endl;
    }
};

#endif /* Header_h */
