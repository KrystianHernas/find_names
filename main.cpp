#include <list>
#include <string>
#include <iostream>

int main() {
    std::list<std::string> names;
    int N; std::cin >> N;
    for (int a = 0; a < N; a++) {
        std::string firstName; std::string emailID;  std::cin >> firstName >> emailID;
        if (emailID.find("@gmail.com") != std::string::npos) {
            names.push_front(firstName);
        }
    }
    names.sort();
    for (auto& name : names) std::cout << name << std::endl;
    return 0;
}
