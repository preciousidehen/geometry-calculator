/* 
 Precious Idehen
 19-feb-19
 cs203 - Computer Programming I
 
 program: this program calculates the area of a circle,	
 		  rectangle or triangle by telling the user to choose
 		  an option from a menu. With 
 		  1. the area of a cicle
 		  2. the area of a rectangle
 		  3. the area of a triangle
 		  4. quit.
 		  this program also validates if the user enter a value not in the menu.
          
          
 Dictionary: variable name used;
             radius,
             length,
             width,
             base,
             height,
             area,
             choice.
             
             
			 
 Design: *****Raptor flow chat*****.

*/



#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main () {
	
	//decleration of variables
	float radius, length, width, base, height;
	double area;
	
	
	
	//creating a menu
	cout<<"*****Menu*****"<<endl;
	cout<<"1. Area of a circle"<<endl;
	cout<<"2. Area of a rectangle"<<endl;
	cout<<"3. Area of a triangle"<<endl;
	cout<<"4. quit"<<endl;
	cout<<"\n\n";
	
	//choosing an option
	int choice;
	cout<<"Enter a choice base on the index value (that is 1, 2, 3 or 4): ";
	cin>>choice;
	
	//validation of the option choosed
	while(choice <= 0 or choice > 4) 
	{
		
		cout<<"invalid option"<<endl;
		cout<<"Please enter what's on the menu: ";
		cin>>choice;
		cout<<'\n';
			
    }

	
	//begin codition statement
	if (choice == 1)
	{
		cout<<"You have picked circle"<<endl;
		const double PI = 3.14159;
		cout<<"Enter the radius: ";
		cin>>radius;
		
		while(radius < 0) 
	    {
	    	
			cout<<"invalid option"<<endl;
			cout<<"Please enter a positive radius: ";
			cin>>radius;
			
    	}
    	for(int i = 0; i < 2; i++) 
    	{
    		area= PI * pow(radius, 2);
			cout<<i+1<<"."<<"The area of the circle is: "<<area<<endl;
    		radius +=2;
		}
		
		
		//area= PI * pow(radius, 2);
		//cout<<"The area of the circle is: "<<area<<endl;
	} 
	else if (choice == 2)
	{
		
		cout<<"You have picked rectangle"<<endl;
		cout<<"Enter the length: "<<flush;
		cin>>length;
		
		while(length < 0) 
		{
		
			cout<<"invalid option"<<endl;
			cout<<"Please enter a positive length: ";
			cin>>length;
			
    	}
		cout<<"Enter the width: "<<flush;
		cin>>width;
		
		while(width < 0) 
		{
		
			cout<<"invalid option"<<endl;
			cout<<"Please enter a positive width: ";
			cin>>width;
			
    	}
		
		area = length * width;
		cout<<"The area of the rectangle is: "<<area<<endl;
			
	} 
	else if (choice == 3)
	{
		cout<<"You have picked triangle"<<endl;
		cout<<"Enter the height: ";
		cin>>height;
		
		while(height < 0) 
		{
		
			cout<<"invalid option"<<endl;
			cout<<"Please enter a positive height: ";
			cin>>height;
		
    	}
		cout<<"Enter the base: ";
		cin>>base;
		
		while(base < 0) 
		{
		
			cout<<"invalid option"<<endl;
			cout<<"Please enter a positive base: ";
			cin>>base;
			
    	}
		
		area = (base * height)/2.0;
		cout<<"the area of the triangle is: "<<area<<endl;
			
	}
	else if (choice == 4)
	 {
		cout<<"quiting..."<<endl;
	 }
	
		
	
	return 0;
}

/*

*****Test case 1*****

*****Menu*****
1. Area of a circle
2. Area of a rectangle
3. Area of a triangle
4. quit


Enter a choice base on the index value (that is 1, 2, 3 or 4): 1
You have picked circle
Enter the radius: 40.25
The area of the circle is: 5089.57

--------------------------------
Process exited after 33.25 seconds with return value 0
Press any key to continue . . .

*****Test case 2*****

*****Menu*****
1. Area of a circle
2. Area of a rectangle
3. Area of a triangle
4. quit


Enter a choice base on the index value (that is 1, 2, 3 or 4): 1
You have picked circle
Enter the radius: -40.5
invalid option
Please enter a positive radius: 40.5
The area of the circle is: 5152.99

--------------------------------
Process exited after 53.16 seconds with return value 0
Press any key to continue . . .

*****Test case 3*****

*****Menu*****
1. Area of a circle
2. Area of a rectangle
3. Area of a triangle
4. quit


Enter a choice base on the index value (that is 1, 2, 3 or 4): -1
invalid option
Please enter what's on the menu: 1

You have picked circle
Enter the radius: -30
invalid option
Please enter a positive radius: 30
The area of the circle is: 2827.43

--------------------------------
Process exited after 25.65 seconds with return value 0
Press any key to continue . . .

*****Test case 4*****

*****Menu*****
1. Area of a circle
2. Area of a rectangle
3. Area of a triangle
4. quit


Enter a choice base on the index value (that is 1, 2, 3 or 4): 2
You have picked rectangle
Enter the length: 40.1
Enter the width: 25
The area of the rectangle is: 1002.5

--------------------------------
Process exited after 19.38 seconds with return value 0
Press any key to continue . . .

*****Test case 5*****

*****Menu*****
1. Area of a circle
2. Area of a rectangle
3. Area of a triangle
4. quit


Enter a choice base on the index value (that is 1, 2, 3 or 4): 2
You have picked rectangle
Enter the length: -58.45
invalid option
Please enter a positive length: 58.45
Enter the width: 30
The area of the rectangle is: 1753.5

--------------------------------
Process exited after 47.7 seconds with return value 0
Press any key to continue . . .

*****Test case 6*****

*****Menu*****
1. Area of a circle
2. Area of a rectangle
3. Area of a triangle
4. quit


Enter a choice base on the index value (that is 1, 2, 3 or 4): 3
You have picked triangle
Enter the height: 40
Enter the base: 25.73
the area of the triangle is: 514.6

--------------------------------
Process exited after 32.37 seconds with return value 0
Press any key to continue . . .

*****Test case 7*****

*****Menu*****
1. Area of a circle
2. Area of a rectangle
3. Area of a triangle
4. quit


Enter a choice base on the index value (that is 1, 2, 3 or 4): 3
You have picked triangle
Enter the height: -25
invalid option
Please enter a positive height: 25
Enter the base: 30
the area of the triangle is: 375

--------------------------------
Process exited after 23.56 seconds with return value 0
Press any key to continue . . .


*****Test case 8*****

*****Menu*****
1. Area of a circle
2. Area of a rectangle
3. Area of a triangle
4. quit


Enter a choice base on the index value (that is 1, 2, 3 or 4): 3
You have picked triangle
Enter the height: -76
invalid option
Please enter a positive height: 76
Enter the base: -1.37
invalid option
Please enter a positive base: 1.37
the area of the triangle is: 52.06

--------------------------------
Process exited after 35.95 seconds with return value 0
Press any key to continue . . .


*****Test case 9*****

*****Menu*****
1. Area of a circle
2. Area of a rectangle
3. Area of a triangle
4. quit


Enter a choice base on the index value (that is 1, 2, 3 or 4): 5
invalid option
Please enter what's on the menu: 4

quit

--------------------------------
Process exited after 10.53 seconds with return value 0
Press any key to continue . . .

*/




