//
// Created by godfrey on 2024-02-21.
//

#ifndef UNTITLED_BOX_H
#define UNTITLED_BOX_H


class Box {
    int width, height;
    char fill;
public:
    Box(int w, int h) { setSize(w,h); fill = '*'; }
    void setFill(char f) { fill = f; }
    void setSize(int w, int h) { width = w; height = h; }
    void draw();
};


#endif //UNTITLED_BOX_H
