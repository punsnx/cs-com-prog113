#include <stdio.h>

struct vector {
  double x;
  double y;
  double z;
};

int main()
{
    struct vector u,v,uv;
    printf("Enter u: ");
    scanf("%lf %lf %lf",&u.x,&u.y,&u.z);
    printf("Enter v: ");
    scanf("%lf %lf %lf",&v.x,&v.y,&v.z);
    uv.x = u.y*v.z - u.z*v.y;
    uv.y = u.z*v.x - u.x*v.z;
    uv.z = u.x*v.y - u.y*v.x;
    printf("u x v = %.1lf %.1lf %.1lf",uv.x,uv.y,uv.z);
    return 0;
}