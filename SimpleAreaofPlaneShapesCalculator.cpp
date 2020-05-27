/*Programmer: Carlos Matriano | 5/26/2020 */
#include <iostream>
#include <cmath>

using namespace std;

main() {

string chosen = "\nYou have chosen ";
string chosen_name;
int shape_number; // User's choice for the plane shape
float area; // Variable area
float width; // Width for rectangle
float height; // Height for rectangle
float vertical_height; // Vertical Height
float base, base_2; // Variable for Triangle, Parallelogram and Trapezoid
float area_length; // Variable for Area Length for Square

//Variable for Ellipse
float semi_minor_axis; //  Variable for Semi Minor Axis of Ellipse
float semi_major_axis; // Variable for Semi Major Axis of Ellipse

//Variable for Ellipse and Circle
float pi = 3.14159; // Value of Pi mathematical constant

//Variable for Sector
float radius; //Variable for Radius of Sector
float angle; //Variable for the Angle in Radians for Sector


cout<<"\tArea of Plane Shapes" <<endl;
cout<<"Choose one" <<endl;
cout<<"(1). Triangle \t" <<"(2.) Square " <<endl;
cout<<"(3). Rectange \t" <<"(4.) Parallelogram " <<endl;
cout<<"(5). Trapezoid \t" <<"(6.) Circle " <<endl;
cout<<"(7). Ellipse \t" <<"(8.) Sector " <<endl;

cout<<"Enter the number corresponding shape from the choices above: " <<endl <<endl <<"\t";
cin>> shape_number;

switch(shape_number) {
    case 1 :
        cout<<chosen <<"Triangle" <<endl <<endl;
        cout<<"Please enter the base of the Triangle: " <<endl <<"\t";
        cin>>base;
        cout<<"Please enter the Vertical Height of the Triangle: " <<endl <<"\t";
        cin>>vertical_height;
        area = base * .5 * vertical_height;
        chosen_name = "Triangle";
        break;
    case 2 :
        cout<<chosen <<"Square" <<endl <<endl;
        cout<<"Please enter the base of the Square: " <<endl <<"\t";
        cin>>area_length;
        area = pow(area_length,2);
        chosen_name = "Square";
        break;
    case 3 :
        cout<<chosen <<"Rectangle" <<endl <<endl;
        cout<<"Please enter the base of the Rectangle: " <<endl <<"\t";
        cin>>width;
        cout<<"Please enter the Vertical Height of the Rectangle: " <<endl <<"\t";
        cin>>height;
        area = width * height;
        chosen_name = "Rectangle";
        break;
    case 4 :
        cout<<chosen <<"Parallelogram" <<endl <<endl;
        cout<<"Please enter the Base of the Parallelogram: " <<endl <<"\t";
        cin>>base;
        cout<<"Please enter the Vertical Height of the Parallelogram: " <<endl <<"\t";
        cin>>vertical_height;
        area = base * vertical_height;
        chosen_name = "Parallelogram";
        break;
    case 5 :
        cout<<chosen <<"Trapezoid" <<endl <<endl;
        cout<<"Please enter the First Base of the Trapezoid: " <<endl <<"\t";
        cin>>base;
        cout<<"Please enter the Second Base of the Trapezoid: " <<endl <<"\t";
        cin>>base_2;
        cout<<"Please enter the Vertical Height of the Trapezoid: " <<endl <<"\t";
        cin>> vertical_height;
        area =  .5 * (base + base_2) * vertical_height;
        chosen_name = "Trapezoid";
        break;
    case 6 :
        cout<<chosen <<"Circle" <<endl <<endl;
        cout<<"Please enter the Radius of the Circle: " <<endl <<"\t";
        cin>>radius;
        area = pow(radius,2) * pi;
        chosen_name = "Circle";
        break;
    case 7 :
        cout<<chosen <<"Ellipse" <<endl <<endl;
        cout<<"Please enter the Semi Major Axis of the Ellipse: " <<endl <<"\t";
        cin>> semi_major_axis;
        cout<<"Please enter the Semi Minor Axis of the Ellipse: " <<endl <<"\t";
        cin>>semi_minor_axis;
        area = pi * semi_minor_axis * semi_major_axis;
        chosen_name = "Ellipse";
        break;
    case 8 :
        cout<<chosen <<"Sector" <<endl <<endl;
        cout<<"Please enter the Radius of the Sector: " <<endl <<"\t";
        cin>>radius;
        cout<<"Please enter the Angle of the Sector: " <<endl <<"\t";
        cin>>angle;
        area = pow(radius,2) * .5 * angle;
        chosen_name = "Sector";
        break;
    default :
        cout<<"Invalid Number"<<endl;
}

cout<<"\n\nThe area of " <<chosen_name <<" is " <<area <<endl;
return 0;

}
