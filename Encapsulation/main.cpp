#include <iostream>
#include <list>
using namespace std;

class GitHubProfile{
private:
string name;
int followers;
list<string> repositeries;
public:
GitHubProfile(string pname){
name=pname;
followers=0;
}

void info(){
cout<<name<<endl;    
cout<<followers<<endl;
for(string repo:repositeries)
{
cout<<repo<<" ";
}

}
void follow()
{
    followers++;
}

void unfollow()
{
    if(followers>0)
    {
        followers--;
    }
}

void addRepo(string repo){
repositeries.push_back(repo);
}


};

int main(){
GitHubProfile g("Apoorva");
g.follow();
g.addRepo("cppPractcePrograms");
//g.repositeries={"cppPractcePrograms", "java autmation","QDPm","Insurance_calculator"};
g.info();
}