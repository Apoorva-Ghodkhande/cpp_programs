#include "Checkbox.h"
#include <iostream>
using namespace std;

// Textbox::Textbox(bool enabled): Widget(enabled){
//     cout << "Textbox constructed" << endl;
// }

Checkbox::Checkbox(){
    cout << "Checkbox constructed" << endl;
}
Checkbox::~Checkbox(){
    cout << "Checkbox destructed" << endl;
}

void Checkbox::draw() const{
    cout << "Checkbox method" << endl;
}