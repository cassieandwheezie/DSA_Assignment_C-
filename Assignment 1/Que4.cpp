#include <iostream>
using namespace std;
int main()
{
    int n,length,sum,maximum,minimum,temp;
    double average;
    sum = 0;
    average = 0;
    temp = 0;
    
    cout << "Welcome to the Program" << endl;
    cout << "----------------------" << endl;
    cout << "****Playing with arrays****" << endl;
    cout << "Enter the number of values you want to store in array"<< endl;
    cin >> n;
    
    int array[n];
    
    cout << "Enter the values in the array " << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> array[i];
        
    }
    
    cout << "Thank you for entering in the values "<< endl;
    cout << "You entered- "<< endl;
    
    for(int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
        
    }
    // calculating the sum and the average of the elments
    length = sizeof(array) / sizeof(array[0]);
    cout << " \nNo of elements in the array " << length << endl;
    
    for(int i = 0; i < n; i++)
    {
        sum = sum + array[i];
        
    }
    cout << "The sum of all the elements in th array is " << sum << endl;
    average = (double)sum/length;
    cout << "The average of the elements in the array is " << average << endl;
    
    // calculating the maximum and the minimum values from the array
    maximum = array[0];
    minimum = array[0];
    for(int i = 1; i < n; i++)
    {
        if(maximum < array[i])
        {
            maximum = array[i];
            
        }
        if(minimum > array[i])
        {
            minimum = array[i];
            
        }
        
    }
    cout << "The maximum value of the elements from the given array is " << maximum << endl;
    cout << "The minimum value of the elements from the given array is " << minimum << endl;
    
    // sorting the array in ascending and descending order
    
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
            {
                if(array[i] > array[j])
                {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
    }
    cout << "Array in ascending order: ";
    for(int i = 0;i < n; i++)
    {
        cout << array[i] << " ";
        
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
            {
                if(array[i] < array[j])
                {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
    }
    cout << endl;
    cout << "Array in descending order: ";
    for(int i = 0;i < n; i++)
    {
        cout << array[i] << " ";
        
    }
    return 0;
}
