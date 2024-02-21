#include <iostream>
using namespace std;

class Oval{
    int width;
    int height;
public:
    Oval();
    Oval(int a, int b);
    ~Oval();
    void set(int w, int h);
    void show();
    int getWidth();
    int getHeight();
};
Oval::Oval(){
    width = 1;
    height = 1;
}
Oval::Oval(int a, int b){
    width = a;
    height = b;
}
void Oval::set(int w, int h){
    width = w;
    height = h;
}
void Oval::show(){
    cout << "width = " << width << ",\t" << "height = " << height << endl;
};
int Oval::getWidth(){
    return width;
}
int Oval::getHeight(){
    return height;
}
Oval::~Oval(){
    cout << "Oval ¼Ò¸ê : width = " << width << ",  height = " << height << endl;
}

int main(){
    Oval a, b(3, 4);
    a.set(10, 20);
    a.show();
    cout << b.getWidth() << ", " << b.getHeight() << endl;
}