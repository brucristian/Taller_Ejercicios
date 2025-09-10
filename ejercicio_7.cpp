#include <iostream>
#include <cmath>
using namespace std;

void coseno(float r, float o){
	float radianes = o * M_PI / 180.0;
	
	float x=r*cos(radianes);
	float y=r*sin(radianes);
	
	cout<<"las coordenadas cartesiana son= ("<<x<<","<<y<<")."<<endl;
}   



int main() {
   int x, y;
   
   cout<<"ingrese el radio :"<<endl;
   cin>>x;
   
   cout<<"ingrese el angulo : "<<endl;
   cin>>y;
   
   coseno(x,y);
}
