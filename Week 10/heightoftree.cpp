#include <iostream>
#include <cmath>
using namespace std;

float heightoftree(float base, float angle);

int main()
{
    float base, angleindegree, angleinradian, height;
    cout << "Enter distance from the tree: ";
    cin >> base;
    cout << "Enter angle in degree: ";
    cin >> angleindegree;
    angleinradian = angleindegree * (1 / 57.2958);
    height = heightoftree(base, angleinradian);
    cout << "The height if tree is " << height;
}

float heightoftree(float base, float angle)
{
    float height = base * tan(angle);
}