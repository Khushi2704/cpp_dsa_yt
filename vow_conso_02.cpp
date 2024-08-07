// WAP to check whether the char input is a vowel or consonant

#include<iostream>

int main()
{
    char c;
    bool islower , isupper;

    std::cout<<"Enter an alphabet : ";
    std::cin>>c;

    islower = (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    isupper = (c=='A'||c=='E'||c=='I'||c=='O'||c=='U');

    if(!isalpha(c))
      printf(" ERROR : Non-alphabetic character");
    else if(islower||isupper)
        std::cout<<c<<" is a vowel";
    else
        std::cout<<c<<" is a consonant";
}
