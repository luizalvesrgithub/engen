/*
 * namespaceeng.cpp
 *
 *  Created on: 23 de fev de 2019
 *      Author: hp
 */

#include "namespaceeng.h"

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
}
