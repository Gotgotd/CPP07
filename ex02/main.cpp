/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 11:09:52 by gdaignea          #+#    #+#             */
/*   Updated: 2024/10/17 15:51:46 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.tpp"


int	main() {

	try {
		Array<int>	intArray1;
		Array<int>	intArray2(4);
		Array<std::string>	stringArray(3);

		std::cout << "Array 1 size : " << intArray1.size() << std::endl;
		std::cout << "Array 2 size : " << intArray2.size() << std::endl;
		std::cout << "string Array size : " << stringArray.size() << std::endl;

		for (unsigned int i = 0; i < intArray2.size(); i++) {
			intArray2[i] = i;
		}
		stringArray[0] = "hello world";
		stringArray[1] = "bonjour le monde";
		stringArray[2] = "hola mundo";

		std::cout << std::endl;
		std::cout << "Array 2, index 3 : " << intArray2[3] << std::endl;
		for (unsigned int i = 0; i < stringArray.size(); i++) {
			std::cout << "string Array, index " << i << ": "<< stringArray[i] << std::endl;
		}
		std::cout <<"Array 1, index 0 : " << intArray1[0] << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	
	return 0;
} 
