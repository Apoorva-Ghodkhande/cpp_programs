#include <iostream>
#include <list>
using namespace std;

class GitHubProfile{
public:
string name;
int followers;
list<string> repositeries;

};

int main(){
GitHubProfile g;
g.name="Apoorva";
cout<<g.name<<endl;
g.followers=1;
cout<<g.followers<<endl;
g.repositeries={"cppPractcePrograms", "java autmation","QDPm","Insurance_calculator"};
for(string repo:g.repositeries)
{
cout<<repo<<" ";
}
}