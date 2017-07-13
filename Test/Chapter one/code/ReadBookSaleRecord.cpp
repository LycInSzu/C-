#include <iostream>
#include "Sales_item.h"

int main(){
  std::cout<<"Please input the book sale record : "<<std::endl;
  Sales_item book;
  std::cin >> book;
  std::cout<<"the record info is : "<< book << std::endl;
}
