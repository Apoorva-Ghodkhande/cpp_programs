#include <iostream>
#include <thread>
//**Passing the function to the thread

// void hello(){
//     std::cout << "hello" << std::endl;
// }

// int main(){
// std::thread th(hello);
// th.join();
//     return 0;
// }

//** Functor class with overload () operator

// class Hello{
//     public:
//     void operator()() {
//         std::cout << "hello" << std::endl;
//     }
// };

// int main(){
//  Hello hello;

// std::thread th(hello);
// th.join();
// return 0;
// }

//** Use lamda expression as threads entry point

int main(){

std::thread th([](){
    std::cout << "Use lamda expression" << std::endl;
});

th.join();
    return 0;
}
