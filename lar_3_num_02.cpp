// WAP to print the largest of three numbers

#include<iostream>

int main()
{
    int n1,n2,n3;
    std::cout<<"Enter the three numbers : ";
    std::cin>>n1>>n2>>n3;

    if(n1>n2)
    {
        if(n1>n3)
            std::cout<<n1<<" is the largest";
        else
            std::cout<<n3<<" is the largest";
    }
    else
    {
        if(n2>n3)
            std::cout<<n2<<" is the largest";
        else
            std::cout<<n3<<" is the largest";
    }
}
