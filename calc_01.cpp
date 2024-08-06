// WAP to make a calculator for basic operations like +,-,*,/,%

#include<iostream>
#include<process.h>

int main()
{
    char op;
    int n1,n2;

    std::cout<<"Enter the numbers you want to perform operation on"<<"\n";
    std::cin>>n1>>n2;
    while(1)
    {
    std::cout<<"Enter the operator"<<"\n"<<"+ for addition"<<"\n"<<"- for subtraction"<<"\n"<<"* for multiplication"<<"\n"<<"/ for division"
    <<"\n"<<"% for modular division"<<"\n"<<"e for exit"<<"\n";
    std::cin>>op;

    switch(op)
    {
    case'+':
        std::cout<<n1<<" + "<<n2<<" = "<<n1+n2<<"\n";
        break;

    case'-':
        std::cout<<n1<<" - "<<n2<<" = "<<n1-n2<<"\n";
        break;

    case'*':
        std::cout<<n1<<" * "<<n2<<" = "<<n1*n2<<"\n";
        break;

    case'/':
        std::cout<<n1<<" / "<<n2<<" = "<<n1/n2<<"\n";
        break;

    case'%':
        std::cout<<n1<<" % "<<n2<<" = "<<n1%n2<<"\n";
        break;

    case'e':
    case'E':
        exit(0);

    default:
        std::cout<<"ERROR: Wrong operator.Please select from the given operator"<<"\n";
        break;
    }
    }
}
