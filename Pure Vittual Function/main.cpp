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

virtual void practice()=0;


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
 cout<<"function in student class"<<endl;
}
};

class startUpGitHubProfile:public GitHubProfile{
    public:
    startUpGitHubProfile(string name): GitHubProfile(name){
}
void practice()
{
 cout<<"function in startUp class"<<endl;
}
};

int main(){
    GitHubProfile *a= new startUpGitHubProfile("Apoorva");
    GitHubProfile *b= new studentGitHubProfile("Apoorva");
a->practice();
b->practice();
delete a,b;
a=nullptr;
b=nullptr;
}