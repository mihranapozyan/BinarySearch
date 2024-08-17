#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int size{};
    std::cout << "Enter size of arrays: ";
    std::cin >> size;
    std::vector<int> vec(size);
    std::cout << "Enter " << size << " elements";
    for (int i = 0; i < vec.size(); ++i) {
        std::cin >> vec[i];
    }

    int flag = false;
    int right = size - 1;
    int left{};
    int middle{};
    int key{};
    std::cout << "Enter key: ";
    std::cin >> key;

    std::sort(vec.begin(), vec.end());

    while ((left <= right) && (flag == false)) {
        middle = (left + right) / 2;

        if (vec[middle] == key) flag = true;
        if (vec[middle] > key) right = middle - 1;
        else left = middle + 1;
    }

    if (flag) std::cout << "Yes, key is found: " << key << ", index: " << middle << std::endl;
    else std::cout << "No, key is not found: " << key << std::endl;

    return 0;
}
