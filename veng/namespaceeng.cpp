/*
 * namespaceeng.cpp
 *
 *  Created on: 23 de fev de 2019
 *      Author: hp
 */

#include <cstdint>
#include "namespaceeng.h"

using namespace std;
uint8_t my_u8; // No need for std:: with uint8_t

namespaceeng::namespaceeng() {
	// TODO Auto-generated constructor stub

}

namespaceeng::~namespaceeng() {
	// TODO Auto-generated destructor stub
}

int main()
{
  // 1
  std::cout << this_space::version << std::endl;

  // 3
  std::cout << another_space::version << std::endl;
  //
  my_u8 = UINT8_C(42);

   // 42
   std::cout << unsigned(my_u8) << std::endl;

}

