// WAP to return the sqrt of the number using function

#include<iostream>
#include<math.h>

int squareroot(int num)
{
    int x;
    x = sqrt(num);
    return x;
}

int square(int num)
{
    int y;
    y = pow(num,2);
    return y;
}

int main()
{
   int n,sq,sqr;
   std::cout<<"Enter the number : ";
   std::cin>>n;
   sq=squareroot(n);
   sqr=square(n);
   std::cout<<"The square root of "<<n<<" = "<<sq;
   std::cout<<"\n"<<"The square of "<<n<<" = "<<sqr;
}
