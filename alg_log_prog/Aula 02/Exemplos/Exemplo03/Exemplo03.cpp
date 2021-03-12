//C++:
//Limites do Tipo de dados INT

#include <iostream>
#include <limits>
int main() {
    // Change the template parameter to the various different types.
    std::cout << std::numeric_limits<int>::min() << std::endl;
    std::cout << "\n";
   std::cout << std::numeric_limits<int>::max() << std::endl;
}
