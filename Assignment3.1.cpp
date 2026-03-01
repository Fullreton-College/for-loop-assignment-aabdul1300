#include <iostream>
#include <vectors>
#include <string>

int main() {

  std::vectors<int> salesData(5)

for (int i = 0; i < 5; ++i) {
        std::cout << "Enter today's sales for store " << (i + 1) << ": ";
        std::cin >> salesData[i];
    }

    std::cout << "\nSALES BAR CHART" << std::endl;
    std::cout << "(Each * = $100)" << std::endl;

  
    for (int i = 0; i < 5; ++i) {
       
        int numAsterisks = salesData[i] / 100;
        std::cout << "Store " << (i + 1) << ": " 
                  << std::string(numAsterisks, '*') << std::endl;
    }

return 0;

}
