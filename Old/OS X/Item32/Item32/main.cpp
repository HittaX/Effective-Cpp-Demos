//
//  main.cpp
//  Item32
//
//  Created by SongZhiPing on 2/8/16.
//  Copyright © 2016 SongZhiPing. All rights reserved.
//
#include "Bird.h"
#include "Penguin.h"
#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    Penguin* p1 = new Penguin();
    try {
        p1->fly();
    } catch (exception& e) {
        cout << e.what() << endl;
    }
}
