#include <iostream>
#include <list>
using namespace std;

class GitHubProfile{
private:
int followers;
list<string> repositeries;

protected:
string name;

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

class studentGitHubProfile:public GitHubProfile{
    public:
    studentGitHubProfile(string name): GitHubProfile(name){
}
void practice()
{
    cout<<endl;
    cout<<name<<" is doing code writing practice!!"<<endl;
}
};


int main(){
studentGitHubProfile g("Apoorva");
g.follow();
g.addRepo("cppPractcePrograms");
//g.repositeries={"cppPractcePrograms", "java autmation","QDPm","Insurance_calculator"};
g.info();
g.practice();
}