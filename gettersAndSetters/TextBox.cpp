#include "TextBox.h"
#include<iostream>
string TextBox::getValue(){
    return value;
}

void TextBox::setValue(const string& value )
{
 this->value=value;
}
