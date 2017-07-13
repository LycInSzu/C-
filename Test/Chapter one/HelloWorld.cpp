#include <iostream>

int main(){
  std::cout<<"Hello,World"<<std::endl;
  std::cout<<"Are you OK?"<<std::endl;
//  /*This is an annotation of the code below.
//   *I am trying to test what info the compiler will printout if my annotation style is not right.
//   *so /*the program pint Hello,World to the window */
//   * */
  int v1=1,v2=3;
  std::cout <<"The product of "<<v1<<" and "<<v2
            <<" is "<<v1*v2<<std::endl;
  std::cout<<"please input numbers(end with -1), you will get the sum:"<<std::endl;
  int num=0;
  int sum=0;
  std::cin>>num;
  while(num!=-1){
    sum+=num;
    std::cin>>num;
  }
  std::cout <<"The sum of numbers you input is "<<sum<<std::endl;
}
