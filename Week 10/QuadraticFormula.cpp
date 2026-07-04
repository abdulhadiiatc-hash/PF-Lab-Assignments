#include <iostream>
#include <cmath>
using namespace std;

float determinant1(float a, float b, float c);

int main()
{
    float determinant, a, b, c, result1, result2;
    cout << "Entet the value of a: ";
    cin >> a;
    cout << "Entet the value of b: ";
    cin >> b;
    cout << "Entet the value of c: ";
    cin >> c;
    determinant = determinant1(a, b, c);

    if (determinant > 0)
    {
        result1 = (0 - b + sqrt(determinant)) / (2 * a);
        result2 = (0 - b - sqrt(determinant)) / (2 * a);

        cout << "Solutions: x = " << result1 << " and x = " << result2;
    }
    else if (determinant == 0)
    {
        result1 = 0 - b / (2 * a);

        cout << "Solution: x = " << result1;
    }
    else if (determinant < 0)
    {
        result1 = (sqrt(0-determinant)) / (2 * a);

        cout << "Complex Solutions: x = " << 0 - b / (2 * a) << " + " << result1 << "i and x = " << 0-b / (2 * a) << " - " << result1 << "i";
    }
    return 0;
}
float determinant1(float a, float b, float c)
{
    float determinant = pow(b, 2) - (4 * a * c);
    return determinant;
}
