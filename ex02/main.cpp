#include "Array.hpp"
#include <iostream>

int main() {
    
	Array<int> arr1;
    
	std::cout << "DEFAULT CONSTRUCTOR\n--> Array<int> arr1" << std::endl;
	std::cout << "-----------------------------------" << std::endl;
    
	std::cout << "Size of arr1: " << arr1.size() << std::endl;
	std::cout << "===================================" << std::endl;

	Array<int> arr2(5);
	std::cout << "PARAMETRIZED CONSTRUCTOR\n--> array<int> arr2(5)" << std::endl;
	std::cout << "-----------------------------------" << std::endl;
    
	std::cout << "Size of arr2: " << arr2.size() << std::endl;
	std::cout << "===================================" << std::endl;

	std::cout << "=======PRE-ASSIGNEMENT-VALUES======" << std::endl;
	std::cout << "-----------------------------------" << std::endl;
    	for (unsigned int i = 0; i < arr2.size(); ++i)
	{
	    if (i % 3 == 0 && i != 0)
		    std::cout << std::endl;
	        std::cout << arr2[i] << " ";
	}
    std::cout << std::endl; 
	std::cout << "======VALUE OVERLOADED= USE========" << std::endl;
	std::cout << "-----------------------------------" << std::endl;
    std::cout << "for (unsigned int i = 0; i < arr2.size(); ++i) {\n\
        arr2[i] = i * 10;\n}" << std::endl;
	std::cout << "-----------------------------------" << std::endl;
    for (unsigned int i = 0; i < arr2.size(); ++i) {
        arr2[i] = i * 10;
    }
	std::cout << "======POST-ASSIGNEMENT-VALUES======" << std::endl;
    std::cout << "Values in arr2: ";
    for (unsigned int i = 0; i < arr2.size(); ++i) {
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;
	std::cout << "-----------------------------------" << std::endl;
    Array<int> arr3(arr2);
    std::cout << "Array<int> arr3(arr2)" << std::endl;
    std::cout << "Size of arr3 (copy from arr2): " << arr3.size() << std::endl;
	std::cout << "-----------------------------------" << std::endl;
    std::cout << "Values in arr3: ";
    for (unsigned int i = 0; i < arr3.size(); ++i) {
        std::cout << arr3[i] << " ";
    }
    std::cout << std::endl;
	std::cout << "==================================" << std::endl;
    std::cout << "Array<int> arr4;\narr4 = arr2;"<< std::endl;
    Array<int> arr4;
    arr4 = arr2;
    std::cout << "Tamaño de arr4 (asignado desde arr2): " << arr4.size() << std::endl;
	std::cout << "-----------------------------------" << std::endl;
    std::cout << "Valores en arr4: ";
    for (unsigned int i = 0; i < arr4.size(); ++i) {
        std::cout << arr4[i] << " ";
    }
    std::cout << std::endl;
	try
	{
		std::cout << "" << std::endl;
		std::cout << "=======FAIL INDEX TESTING==========" << std::endl;
		std::cout << "arr1[1000]-------------------------" << std::endl;
        	std::cout << arr1[1000] << " ";
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		try {
			std::cout << "arr2[-32]--------------------------" << std::endl;
        		std::cout << arr2[-32] << " ";
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
			try
			{
				std::cout << "arr3['a']--------------------------" << std::endl;
        			std::cout << arr3['a'] << " ";
			} catch (std::exception &e) {
				std::cout << e.what() << std::endl;
				try
				{
					std::cout << "I USED 0 CAUSE NULL \
					       	\nDOESN'T COMPILE FOR THE UNSIGNED INT\
						\n USED AS A PARAMETER \
						\nON THE OPERATOR ❤️"<< std::endl;
					std::cout << "arr4[0]----------------------------" << std::endl;
        				std::cout << "VAULE FROM INDEX 0(\"NULL\")--> " << arr4[0] << " ";
				} catch (std::exception &e) {
					std::cout << e.what() << std::endl;
				}
			}
		}
	}
    return 0;
}
