/*
 * namespaceeng.h
 *
 *  Created on: 23 de fev de 2019
 *      Author: hp
 */

#ifndef NAMESPACEENG_H_
#define NAMESPACEENG_H_


#include <iostream>

namespace this_space
{
  constexpr int version = 1;
}

namespace another_space
{
  constexpr int version = 3;
}
class namespaceeng {
public:
	namespaceeng();
	virtual ~namespaceeng();
};

#endif /* NAMESPACEENG_H_ */
