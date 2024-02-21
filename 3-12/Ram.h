//
// Created by godfrey on 2024-02-21.
//

#ifndef UNTITLED_RAM_H
#define UNTITLED_RAM_H


class Ram {
    char mem[100*1024];
    int size;
public:
    Ram ();
    ~Ram();
    char read(int address);
    void write(int address, char value);
};


#endif //UNTITLED_RAM_H
