#include <iostream>
#include "List.h"

int main() {
    List<int> list;

    list.push_back(10);
    list.push_back(20);
    list.push_front(5);

    std::cout << "Front: " << list.front() << std::endl;
    std::cout << "Back: " << list.back() << std::endl;

    list.pop_front();
    list.pop_back();

    std::cout << "Front after pop_front: " << list.front() << std::endl;
    std::cout << "Back after pop_back: " << list.back() << std::endl;

    list.clear();

    return 0;
}
