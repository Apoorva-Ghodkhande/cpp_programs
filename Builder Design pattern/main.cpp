#include <iostream>
#include <vector>
#include <sstream>

using namespace std;
int main(){

string text="hello";;
string output;
output +="<p>";
output +=text;
output +="</p>";
cout << output << endl;

string words[]={"Good", "Morning"};
ostringstream oss;
oss << "<ul>" << endl;
for(auto w: words)
{
    oss << "<li>"<< w << "</li>";   
}
oss <<  "</ul>" << endl;
cout << oss.str() << endl;



    return 0;
}