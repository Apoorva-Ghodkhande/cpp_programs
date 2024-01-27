#include <iostream>
#include <thread>

void hello(){
    using namespace std::literals;
    std::this_thread::sleep_for(2s);
    std::cout << "hello";
}

void func(std:: thread thr){
    std::cout << "Received thread id: " << thr.get_id()<< std::endl;
    thr.join();
}

int main(){

std::thread thr(hello);
func(std::move(thr));
    return 0;
}
