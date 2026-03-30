// Write a program to create a structure named Complex and define a function 
//incrComplex() to increment the value of both real and imaginary members by 1. 
 
 #include<stdio.h>
 struct complex
 {
 	int real,imag;
 };
 void incrcomplex(struct complex *c)
 {
 	c->real ++;
 	c->imag ++;
 }
 void main(){
 struct complex c;
 printf("Enter a real and imaginary number:");
 scanf("%d%d",&c.real,&c.imag);
 incrcomplex(&c);
 printf("after increment: %d+%di",c.real,c.imag);
 
}
