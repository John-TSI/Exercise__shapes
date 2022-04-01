/* https://practity.com/c-2/ --> W3Resource (Exercises: 14,15,16,17,18) */


#include<iostream>
#include<cmath>


using std::cout;
using std::cin;
using std::endl;


// ------ PROTOTYPES ------
int getRequest();
void callRequest(int);

void volume_sphere();
void volume_cube();
void volume_cylinder();
void area_rectangle();
void area_triangle();
void area_circle();


int main()
{

    int request = getRequest();
    while(request != 0)
    {
        callRequest(request);
        request = getRequest();
    }

return 0;
}


// ------ DEFINITIONS ------

// --- utility functions --
int getRequest(){
  int choice;
  cout << "\nSelect a computation:" << endl;
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
  cout << "1  --->  Sphere (volume)" << endl;
  cout << "2  --->  Cube (volume)" << endl;
  cout << "3  --->  Cylinder (volume)" << endl;
  cout << "4  --->  Rectangle (area and perimeter)" << endl;
  cout << "5  --->  Triangle (area using Heron's formula)" << endl;
  cout << "6  --->  Circle (area and circumference)" << endl;
  cout << "-------------------------" << endl;
  cout << "0  --->  QUIT" << endl;
  cout << "\n<< ";
  cin >> choice;
  cout << "\n";
  return choice;
}

void callRequest(int req)
{
    switch(req)
    {
        case 1:
            volume_sphere();
            break;
        case 2:
            volume_cube();
            break;
        case 3:
            volume_cylinder();
            break;
        case 4:
            area_rectangle();
            break;
        case 5:
            area_triangle();
            break;
        case 6:
            area_circle();
            break;
    }
}


// --- computation functions ---
void volume_sphere()
{
    float r, V;
    cout << "Enter the sphere radius:" << endl;
    cin >> r;
    V = (4/3)*(M_PI)*pow(r,3);
    cout << "\nA sphere of radius " << r << " has volume: " << V << endl;
}

void volume_cube()
{
    float l, V;
    cout << "Enter the cube side length:" << endl;
    cin >> l;
    V = pow(l,3);
    cout << "\nA cube of side length " << l << " has volume: " << V << endl;
}

void volume_cylinder()
{
    float r, h, V;
    cout << "Enter the cylinder radius followed by height:" << endl;
    cin >> r >> h;
    V = (h)*(M_PI)*pow(r,2);
    cout << "\nA cylinder of radius " << r << " and height " << h << " has volume: " << V << endl;
}

void area_rectangle()
{
    float l1, l2, A, P;
    cout << "Enter the two rectangle side lengths:" << endl;
    cin >> l1 >> l2;
    A = l1*l2;
    P = 2*(l1 + l2);
    cout << "\nA rectangle of side lengths " << l1 << " and " << l2 << " has area: " << A << endl;
    cout << "It has perimeter: " << P << endl;
}

void area_triangle()
{
    float l1, l2, l3, s, A;
    cout << "Enter the three side lengths of the triangle:" << endl;
    cin >> l1 >> l2 >> l3;
    s = (l1 + l2 + l3)/2;
    A = sqrt(s * (s - l1) * (s - l2) * (s - l3));
    cout << "\nA triangle of side lengths " << l1 << ", " << l2 << ", " << l3 << " has area: " << A << endl;
}

void area_circle()
{
    float r, C, A;
    cout << "Enter the circle radius:" << endl;
    cin >> r;
    C = 2*M_PI*r;
    A = M_PI*pow(r,2);
    cout << "\nA circle of radius " << r << " has area " << A << " and circumference " << C << endl;
}