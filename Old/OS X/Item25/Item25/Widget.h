//
//  Widget.h
//  Item25
//
//  Created by SongZhiPing on 2/1/16.
//  Copyright © 2016 SongZhiPing. All rights reserved.
//

#ifndef Widget_h
#define Widget_h

class Widget{
private:
    WidgetImpl* pImpl;
    
public:
    void swap(Widget& other)
    {
        using std::swap;
        swap(pImpl,other,pImpl);
    }
};

namespace std {
    template typename<T>
    void swap(Widget<T>& a,Widget<T>& b)
    {
        a.swap(b);
    }
}
#endif /* Widget_h */
