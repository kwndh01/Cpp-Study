//
// Created by godfrey on 2024-02-21.
//
#include <iostream>
#include "Ram.h"
using namespace std;

Ram::Ram(){
    mem[100*1024] = {0};
    size = 100*1024;
}
Ram::~Ram(){
    cout << "�޸� ���ŵ�";
}
char Ram::read(int address){
    return mem[address];
}
void Ram::write(int address, char value){
    mem[address] = value;
}
