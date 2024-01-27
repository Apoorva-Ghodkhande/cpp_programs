#include <iostream>
#include <array>
#include <mutex>
#include <thread>

std::mutex task_mutex; 

void task(const std::string& str)
{
task_mutex.lock();
std::cout << str[0] << str[1] << str[2] << std::endl;
task_mutex.unlock();

}

int main(){
std::thread thr1(task,"abc");
std::thread thr2(task,"def");
std::thread thr3(task,"ghi");

thr1.join();
thr2.join();
thr3.join();

    return 0;
}