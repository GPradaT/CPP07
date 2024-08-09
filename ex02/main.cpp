/*#include "Array.hpp"
#include <string>
#include <iostream>

template<typename T>
void    f(T &ref)
{
        std::cout << ref << std::endl;
}

template<typename J>
void	j(J &ref)
{
	ref = ref + 2;
}*/
#include "Array.hpp"
#include <iostream>

int main() {
    // Test del constructor por defecto
    Array<int> arr1;
    std::cout << "Tamaño de arr1: " << arr1.size() << std::endl;

    // Test del constructor con tamaño
    Array<int> arr2(5);
    std::cout << "Tamaño de arr2: " << arr2.size() << std::endl;

    // Asignación de valores
    for (unsigned int i = 0; i < arr2.size(); ++i) {
        arr2[i] = i * 10;
    }
	std::cout << "LLEGO" << std::endl;
    // Mostrar valores
    std::cout << "Valores en arr2: ";
    for (unsigned int i = 0; i < arr2.size(); ++i) {
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;

    // Test del constructor de copia
    Array<int> arr3(arr2);
    std::cout << "Tamaño de arr3 (copia de arr2): " << arr3.size() << std::endl;

    // Mostrar valores en arr3
    std::cout << "Valores en arr3: ";
    for (unsigned int i = 0; i < arr3.size(); ++i) {
        std::cout << arr3[i] << " ";
    }
    std::cout << std::endl;

    // Test del operador de asignación
    Array<int> arr4;
    arr4 = arr2;
    std::cout << "Tamaño de arr4 (asignado desde arr2): " << arr4.size() << std::endl;

    // Mostrar valores en arr4
    std::cout << "Valores en arr4: ";
    for (unsigned int i = 0; i < arr4.size(); ++i) {
        std::cout << arr4[i] << " ";
    }
    std::cout << std::endl;
	try{
        std::cout << arr1[1000] << " ";
        std::cout << arr2[-32] << " ";
        std::cout << arr3[-1] << " ";
        std::cout << arr4[0] << " ";
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
    return 0;
}
