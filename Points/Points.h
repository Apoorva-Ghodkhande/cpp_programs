#include <iostream>
#include<ostream>
using namespace std;

class Points{
public:
Points()=default;
Points(int x,int y);
bool operator==(const Points& other);
int xgetXx() ;
void setX(int x);
int getY();
void setY(int y);
 ostream& operator<<(ostream &stream, const Points& point );


private:
int x;
int y;
};