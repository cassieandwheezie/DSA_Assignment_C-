#include <iostream>
using namespace std;
int main()
{
    char operation;
    double num1 ,num2,result;
    cout<<"Welcome to this world of programming"<<endl;
    cout<<"This is a menu based calculator!! "<<endl;
    cout<<"1)Enter '+' for addition"<<endl<<"2)Enter '-' for subtraction"<<endl;
    cout<<"3)Enter '*' for multiplication"<<endl<<"4)Enter '/' for division"<<endl;
    cout<<"5) Enter '%' for modulo"<<endl;
    cout<<"Enter the operation to be performed"<<endl;
    cin>>operation;
    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter the second number"<<endl;
    cin>>num2;
    cout<<"Entered operator is: "<< operation <<endl;
    cout<<"Entered numbers are: "<<num1<<" and "<<num2<<endl;
    switch(operation)
    {
    case '+':
    
        cout<<"Addition of the two numbers: "<<num1<<"+"<<num2<<": ";
        result = num1+num2;
        cout<<result<<endl;
        break;
        
    
    case '-':
    
        cout<<"Subtraction of the two numbers: "<<num1<<"-"<<num2<<": ";
        result = num1-num2;
        cout<<result<<endl;
        break;
        
    case '*':
    
        cout<<"Multiplication of the two numbers: "<<num1<<"*"<<num2<<": ";
        result = num1*num2;
        cout<<result<<endl;
        break;
        
    case '%':
    /*Modulus operator does not work with double values. Therefore, we either 
    use typecasting or consider only integer numbers from the user.*/
        if(num2!=0)
        {
            cout<<"Modulus of the two numbers: "<<num1<<"%"<<num2<<": ";
            result = int(num1)%int(num2);
            cout<<result<<endl;
            break;
        }
        else
        {
            cout<<"num 2 is zero. Therefore, not defined";
            break;
            
        }
    
    case '/':
        if(num2!=0)
        {
            cout<<"Division of the two numbers: "<<num1<<"/"<<num2<<": ";
            result = num1/num2;
            cout<<result<<endl;
            break;
        }
        else
        {
            cout<<"num 2 is zero. Therefore, not defined";
            break;
            
        }
    default:
    {
        cout<<"Please check your input.It is not a valid operation";
        break;
        
    }
}
    cout << "\nProgram executed successfully."<<endl;
    cout << "Thank you for using the menu based calculator."<<endl;
    cout << "Have a great day!";
    return 0;


}
