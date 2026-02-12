#include <iostream>
#include <vector>

int main() {
    int n, h;

    do{
        std::cout << "Enter number of friends: ";
        std::cin >> n;
    }while (n < 1 || n > 1000);

    do{
        std::cout << "Enter height of the fence: ";
        std::cin >> h;
    }while (h < 1 || h > 1000);

    std::vector<int> heights;
    int height;
    for (int i=0; i < n; i++) {
        do {
            std::cout << "Enter the height of " << i+1 << ": ";
            std::cin >> height;
        } while (height < 1 || height > 2*h);
        heights.push_back(height);
    }

    int minimum_width = 0;
    for (const auto ht: heights) {
        if (ht <= h) minimum_width++;
        else minimum_width +=2;
    }

    std::cout << "Minimum possible width is: " << minimum_width;
}