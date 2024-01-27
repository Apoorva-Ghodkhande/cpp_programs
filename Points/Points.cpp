#include "Points.h"
Points::Points(){
    this->x=x;
    this->y=y;
}
Points::Points(int x,int y){
    this->x=x;
    this->y=y;
}

bool Points::operator==(const Points& other){
return (x==other.x && y==other.y);

}


int Points::xgetXx(){
    return x;
}
void Points::setX(int x)  {
    this-> x=x;
}
int Points::getY(){
    return y;
}
void Points::setY(int y) {
    this-> y=y;
}


ostream& operator<<(ostream &stream,const Points &point ){
    stream << "("<< point.xgetXx() <<","<< point.getY() <<")"<<endl;
     return stream;
}