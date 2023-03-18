#include <pntr/pntr.hpp>

#include <iostream>

struct Hello: pntr::IntruderNew<Hello>
{
  Hello()
  {
    std::cout << "Hello World!" << std::endl;
  }
  ~Hello()
  {
    std::cout << "And goodbye!" << std::endl;
  }
};

int
main()
{
  pntr::make_shared<Hello>();
  return 0;
}
