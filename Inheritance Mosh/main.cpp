#include "Textbox.h"
#include "Checkbox.h"
//#include "Widget.h"
#include<iostream>
#include<vector>

using namespace std;

void showWidget(Widget& w){
    w.draw();
}

// int main(){
// Textbox box;
// // t.enable();
// //box.draw();
// showWidget(box);
//  return 0;
// }

int main(){

vector<Widget> widget;
widget.push_back(Textbox{});
widget.push_back(Checkbox{});
for(auto wid : widget){
showWidget(wid);
}
 return 0;
}