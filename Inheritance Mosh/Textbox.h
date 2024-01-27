#ifndef ADVANCED_TEXTBOX_H
#define ADVANCED_TEXTBOX_H

#include "Widget.h"

class Textbox: public Widget{
    public:
    //explicit Textbox(bool enabled);
    Textbox( );
    ~Textbox();
    void draw() const override;


};

 #endif