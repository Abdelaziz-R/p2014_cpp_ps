#include <iostream>
using namespace std;

const float PI = 3.141f;

float area(char shape, float dimensions[]);


int main()
{
    char shape;
    float dimensions[2] = { 0, 0 };

    // Prompting user for shape
    while (true) 
    {
        cout << "Enter shape (r for rectangle, s for square, c for circle): ";
        cin >> shape;
        shape = tolower(shape);

        if (shape == 'r' || shape == 's' || shape == 'c') 
        {
            break;
        }
        cout << "Invalid shape. Please try again.\n";
    
    }

    // Prompting user for dimensions
    if (shape == 'r') 
    {
        cout << "Enter length and width of rectangle: ";
        cin >> dimensions[0] >> dimensions[1];
    }
    else if (shape == 's') 
    {
        cout << "Enter side length of square: ";
        cin >> dimensions[0];
    }
    else 
    { // circle
        cout << "Enter diameter of circle: ";
        cin >> dimensions[0];
    }

  

    // Calculating and outputting area for the shape
    float result = area(shape, dimensions);
    if (result < 0) 
    {
        cout << "Error: Unable to calculate area.\n";
        return 1;
    }

    cout << "The area is: " << result << endl;

    return 0;
}

float area(char shape, float dimensions[])
{
    switch (shape) 
    {
    case 'r':
        return dimensions[0] * dimensions[1];
    case 's':
        return dimensions[0] * dimensions[0];
    case 'c':
        return PI * pow(dimensions[0] / 2, 2);
    default:
        return -1; // Error case
    }
}
