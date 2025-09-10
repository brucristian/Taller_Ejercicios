#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void coseno(double r, double o){
	double radianes = o * M_PI / 180.0;
	
	double x=r*cos(radianes);
	double y=r*sin(radianes);
	
	cout << fixed << setprecision(2);
	cout<<"las coordenadas cartesiana son= ("<<x<<","<<y<<")."<<endl;
}   



int main() {
   double  x, y;
   
   cout<<"ingrese el radio :"<<endl;
   cin>>x;
   
   cout<<"ingrese el angulo : "<<endl;
   cin>>y;
   
   coseno(x,y);
}

