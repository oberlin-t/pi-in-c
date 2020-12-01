#include <stdio.h>
#include <math.h>

float pi;
float x;
float y;
float lastx;
float lasty;
float dist;
float i;
long prec;

int main()
{
  lastx = 0.0;
  lasty = 5.0;
  prec = 300000;
  for (i = 0; i < (prec * 5); ++i) {
    x = i / prec;
    y = sqrt(25 - pow(x,2));
    dist += sqrt(pow((x-lastx),2) + pow((y-lasty),2));
    lastx = x;
    lasty = y;
  }

  dist += sqrt(pow((5-lastx), 2) + pow((0 - lasty),2));
    
    pi = (dist * 4) / 10;
    printf("%1.20f\n",pi);
  
  return 0;
}
