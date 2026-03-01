#include <iostream>

int main() {
    int firstNum, secondNum;

    
    std::cin >> firstNum >> secondNum;

   
    if (secondNum < firstNum) {
        std::cout << "Second integer can't be less than the first." << std::endl;
    } else {
        
        for (int i = firstNum; i <= secondNum; i += 5) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
