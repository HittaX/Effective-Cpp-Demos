//
//  Header.h
//  Item28
//
//  Created by SongZhiPing on 2/4/16.
//  Copyright © 2016 SongZhiPing. All rights reserved.
//

#pragma once

class RectData{
public:
    RectData(Point c1,Point c2)
    :ulhc(c1),lrhc(c2)
    {
    }
    Point ulhc;
    Point lrhc;
};
