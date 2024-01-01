#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int main() {
    std::string CharArr = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$*!@#";
    int num;
    std::cout << "Enter the amount: ";
    std::cin >> num;
    std::string password = "";
    std::srand(std::time(0));
    for (int i = 0; i < num; i++) {
        int pw = std::rand() % CharArr.length();
        password += CharArr[pw];
    }
    std::cout << password << std::endl;
    system("PAUSE");
    return 0;
}
