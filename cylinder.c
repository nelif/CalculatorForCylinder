#include <stdio.h>
#define PI 3.14

void printResults();
double calculateVolume(double radius, double height);
double calculateBaseArea(double radius);
double calculateCircumference(double radius, double height);
double calculatePerimeter(double radius);

int main (void){
	
	printResults();
}

double calculateVolume(double radius, double height){
	
	double volume, base_area;
	base_area = calculateBaseArea(radius);
	volume = base_area *height;
	return (volume);
}

double calculateBaseArea(double radius){
	
	double base_area;
	base_area = PI*(radius*radius);
	return (base_area);
}

double calculateCircumference(double radius, double height){
	
	double circumference, perimeter, base_area;
	base_area = calculateBaseArea(radius);
	perimeter = calculatePerimeter(radius);
	circumference = (perimeter*height) + (2*base_area);
	return (circumference);
}

double calculatePerimeter(double radius){
	
	double perimeter;
	perimeter = 2*PI*radius;
	return (perimeter);
}

void printResults(){
	
	double radius, height, volume, circumference;
	
	do{
		printf("Enter radius and height: ");
	    scanf("%lf%lf",&radius, &height);
	    
		while(radius>0 && height>0)
	    {
		    circumference = calculateCircumference(radius,height);
            volume = calculateVolume(radius,height);
     	    
			printf("Cylinder has %.2lf volume and %.2lf circumference\n", volume, circumference);
			printf("New Cylinder ***********\n");
			break;
	    }  
		 
	}while(radius!=0 && height!=0);
		printf("Goodbye!");		
}


