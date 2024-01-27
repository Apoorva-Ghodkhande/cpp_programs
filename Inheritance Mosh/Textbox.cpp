#include "Textbox.h"
#include <iostream>
using namespace std;

// Textbox::Textbox(bool enabled): Widget(enabled){
//     cout << "Textbox constructed" << endl;
// }

Textbox::Textbox(){
    cout << "Textbox constructed" << endl;
}
Textbox::~Textbox(){
    cout << "Textbox destructed" << endl;
}

void Textbox::draw() const{
    cout << "Textbox method" << endl;
}