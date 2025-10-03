//C program
/*
 Name:Immaculate Nyambura Maingi
 Reg No:CT101/G/26509/25
 Date:21/09/2025
 Description:A program that calculates volume and surface area of a cylinder

 Volume of a cylinder =Π *(r)^2 *h
 surface area =2 *Π *(r)^2 + 2 * Π* r* h
 Π = 3.142
  radius in m
  height in m
 */
 #include<stdio.h>//preprocessor directive scanf(),printf()
 //main function
 int main(){
     float radius;
     float height;
     float volume;
     float surface_area;

     printf("Enter radius(m):\n");
     scanf("%f",&radius);
     printf("Enter height(m):\n");
     scanf("%f",&height);

     //calculate volume of  a cylinder
     volume = 3.142 * radius * radius * height;
     //calculate surface area
     surface_area = 2 * 3.142 * radius *radius + 2 * 3.142 *radius * height;
     //output results
     printf("volume of a cylinder:%f cubic metres\n",volume);

     printf("surface area of a cylinder:%fsquare metres\n",surface_area);

     return 0;
 }





































