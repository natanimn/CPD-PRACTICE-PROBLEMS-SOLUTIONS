#include <iostream>

int main() {
    int l_weight, b_weight;

    do {
        std::cout << "Enter Limak's wight: ";
        std::cin >> l_weight;
    } while (l_weight < 1 || l_weight > 10);

    do {
        std::cout << "Enter Bob's weight: ";
        std::cin >> b_weight;
        if (b_weight < l_weight)
            std::cout << "Bob's weight must be greather than Limak's" << std::endl;
    } while (b_weight < l_weight);

    int years_taken = 0;

    while (l_weight <= b_weight) {
        l_weight*=3;
        b_weight*=2;
        years_taken++;
    }

    std::cout << "It takes " << years_taken << " years";

    return 0;
}