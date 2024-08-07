// WAP to return the sum of three numbers using function

#include<iostream>

int sumOfThree(int num1 , int num2 , int num3)
{
   int sum;

   sum=num1+num2+num3;
   return sum;
}


int main()
{
  int s,n1,n2,n3;
  std::cout<<"Enter three numbers : ";
  std::cin>>n1>>n2>>n3;
  s = sumOfThree(n1,n2,n3);
  std::cout<<n1<<" + "<<n2<<" + "<<n3<<" = "<<s;
}
