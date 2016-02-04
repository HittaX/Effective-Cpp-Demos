//
//  main.cpp
//  Item28
//
//  Created by SongZhiPing on 2/4/16.
//  Copyright © 2016 SongZhiPing. All rights reserved.
//

#include <iostream>
#include "Rectangle.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    Point coord1(0,0);
    Point coord2(100,100);
    Rectangle rec(coord1,coord2);
    rec.getRect();
//    rec.upperLeft().setX(50);
    rec.getRect();
    
    return 0;
}
