#include <iostream>
#include <list>
using namespace std;

class GitHubProfile{
private:
int followers;
list<string> repositeries;

protected:
string name;
int starProject;

public:
GitHubProfile(string pname){
name=pname;
followers=0;
starProject=0;
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

void isStarProject()
{
    if(followers>=5)
    {
        cout<<"Star project count of "<< name<<" is "<<starProject<<endl;
    }else{
        cout<<"Star project count of "<< name<<" is "<<starProject<<endl;
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
    // cout<<name<<" is doing code writing practice!!"<<endl;
    // cout<<"Star project count of "<< name<<"is "<<starProject<<endl;
    starProject++;
}
};

class startUpGitHubProfile:public GitHubProfile{
    public:
    startUpGitHubProfile(string name): GitHubProfile(name){
}
void practice()
{
    cout<<endl;
    // cout<<name<<" is doing code writing practice!!"<<endl;
    // cout<<"Star project count of "<< name<<"is "<<starProject<<endl;
    starProject++;
}
};

int main(){
studentGitHubProfile g1("Apoorva");
startUpGitHubProfile g2("John");
g1.practice();
g1.practice();
g1.practice();
g1.practice();
g1.practice();
g2.practice();

GitHubProfile * y1=&g1;
GitHubProfile * y2=&g2;
y1->isStarProject();
y2->isStarProject();
}