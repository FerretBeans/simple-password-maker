#include <iostream>
#include <string>
#include <fstream>

int main() {
    std::string CharArr = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$*!@#";
    int num;
    std::cout << "Enter the amount: ";
    std::cin >> num;
    std::string password = "";
    for (int i = 0; i < num; i++) {
        int pw = std::rand() % CharArr.length();
        password += CharArr[pw];
    }
    std::cout << password << std::endl;
    std::string passwordtxt = password;
    std::ofstream writer("password.txt", std::ios::app);
    writer << passwordtxt << std::endl;
    writer.close();
    system("PAUSE");
    return 0;
}
