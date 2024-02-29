#include <iostream>
#include<thread>
//create a thread function for thread
void Hi() {
    std::cout<<"klohshjj";
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    //pass the pointer of function
    std::thread the(Hi);
    the.join();
    return 0;
}
