#include<iostream>
 class program
 {
     public : int a;
     public : program(int b) //pass by value in object as parameter
     {
         a=b;
     }
      public : void display()
      {
         std::cout<<"\n value of a is"<<a;
      }
      
 };
      void modify(program obj2)
     {
         obj2.a=10; //any change inside this function will not modify orignal value of a.
         std::cout<<"\n latest value of "<<obj2.a;
     }              // this will create a seprate instanceof program class.
     int main()
     {
         program obj1(9);// orignal object of class with initilization of parameterized
         //constructor
         obj1.display();
         modify(obj1);
         obj1.display();
     }

