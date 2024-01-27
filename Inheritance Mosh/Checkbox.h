

#ifndef ADVANCED_CHECKBOX_H
#define ADVANCED_CHECKBOX_H
#include "Widget.h"

class Checkbox: public Widget{
    public:
    //explicit Textbox(bool enabled);
    Checkbox( );
    ~Checkbox();
    void draw() const override;


};

 #endif