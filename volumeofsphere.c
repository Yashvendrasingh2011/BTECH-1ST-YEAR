#include<stdio.h>
int main (){
  float r;
  printf("enter the radius");
  scanf("%f",&r);
  float v = 4*3.14*r*r*r/3;
  printf("the volume of sphere is : %f", v);
    return 0;
}
