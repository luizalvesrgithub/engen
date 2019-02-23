/*
 * namespaceeng.h
 *
 *  Created on: 23 de fev de 2019
 *      Author: hp
 */

#ifndef NAMESPACEENG_H_
#define NAMESPACEENG_H_

#include <cstdint>
#include <iostream>

using namespace std;

uint8_t my_u8; // No need for std:: with uint8_t

namespace this_space
{
  constexpr int version = 1;
}

namespace another_space
{
  constexpr int version = 3;
}


#include <cstdint>
#include <iostream>

using namespace std;

uint8_t my_u8; // No need for std:: with uint8_t

int main()
{
  my_u8 = UINT8_C(42);

  // 42
  std::cout << unsigned(my_u8) << std::endl;
}


class namespaceeng {
public:
	namespaceeng();
	virtual ~namespaceeng();
};

#endif /* NAMESPACEENG_H_ */
