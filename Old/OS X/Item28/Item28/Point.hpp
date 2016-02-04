//
//  Point.hpp
//  Item28
//
//  Created by SongZhiPing on 2/4/16.
//  Copyright © 2016 SongZhiPing. All rights reserved.
//

#ifndef Point_hpp
#define Point_hpp

#include <stdio.h>

class Point{
private:
    int x;
    int y;
public:
    Point(int x,int y):x(x),y(y)
    {};
    void setX(int newVal);
    void setY(int newVal);
    int inline getX()
    {
        return x;
    }
    int inline getY()
    {
        return y;
    }
};
#endif /* Point_hpp */
