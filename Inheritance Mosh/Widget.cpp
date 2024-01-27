#include "Widget.h"
#include <iostream>
using namespace std;

void Widget::enable(){
    enabled=true;
}

void Widget::disable(){
    enabled=false;
}

bool Widget::isEnabled() const{
    return enabled;
}

//  Widget::Widget(bool enabled){
//     cout << "Widget constructed" << endl;
// }

 Widget::Widget(){
    cout << "Widget constructed" << endl;
}

 Widget::~Widget(){
    cout << "Widget destructed" << endl;
}

void Widget::draw() const{
    cout << "Widget method" << endl;
}