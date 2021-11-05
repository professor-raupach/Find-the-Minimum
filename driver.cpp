#include <iostream>
#include "findMinimum.cpp"

int main() {
    int list[] = {35, 63,22, 86, 37, 82, 99, 18, 109, 64};
    int min = findMinimum(list, 10);
    std::cout << "The minimum is " << min << std::endl;
    return 0;
}
