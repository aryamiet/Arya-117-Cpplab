#include<iostream>
 class program
 {
     public : int a;
     public : program(int b) //pass by reference in object as parameter
     {
         a=b;
     }
      public : void display()
      {
         std::cout<<"\n value of a is"<<a;
      }
      
 };
      void modify(program &obj2) //& for class by reference.
     {
         obj2.a=10; //any change inside this function will  modify orignal value of a.
        // this will create reference to obj1.
     }              // this will not create a seprate instanceof program class.
     int main()
     {
         program obj1(9);// orignal object of class with initilization of parameterized
         //constructor
         obj1.display();
         modify(obj1);
         obj1.display();
     }

