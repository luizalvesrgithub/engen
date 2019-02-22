/*
 * cled.cpp
 *
 *  Created on: 22 de fev de 2019
 *      Author: hp
 */

#include "cled.h"

#include <cstdint>
#include <iostream>
#include "variaveislocais.h"

using namespace std;

// This has *exactly* 16-bits signed.
constexpr std::int16_t value16 = INT16_C(0x7FFF);

// This has *at least* 32-bits unsigned.
constexpr std::uint_least32_t value32 = UINT32_C(4'294'967'295);

class led final
{
public:
  // The led class constructor.
  led() : is_on(false) { }

  ~led() = default;

  void toggle() const
  {
    // Toggle the LED in the PC simulation.
    is_on = (!is_on);

    std::cout << (is_on ? "LED is on" : "LED is off") << std::endl;
  }

private:
  // Private member variables of the class.
  mutable bool is_on;
};

namespace
{
  // Create led_b5 (simulated on a PC).
  const led led_b5;
}

int main()
{

  for(int i = 0; i<50;i++) //for(;;) Toggle led_b5 in a loop forever.
  {
    led_b5.toggle();
  }
  // 1
  std::cout << this_space::version << std::endl;

  // 3
  std::cout << another_space::version << std::endl;

  do_something();
   cout << "Hello World!" << endl;


   my_u8 = UINT8_C(42);

   // 42
   std::cout << unsigned(my_u8) << std::endl;
   return 0;
}
