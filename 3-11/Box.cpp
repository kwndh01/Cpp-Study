//
// Created by godfrey on 2024-02-21.
//
#include <iostream>
#include "Box.h"
using namespace std;

void Box::draw(){
    for (int n=0; n < height; n++){
        for (int m=0; m < width; m++){
            cout << fill;
        }
        cout << endl;
    }
}