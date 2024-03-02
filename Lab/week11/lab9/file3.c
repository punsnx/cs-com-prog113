#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct _Point {
	double X;
	double Y;
}Point;

int main(){
	int n,i;
	printf("Number of Points: ");
	scanf("%d",&n);
	Point *point_ptr = (Point *)malloc(sizeof(Point)*n);

	for(i=0;i<n;i++){
		printf("P%d.X: ",i+1);
		scanf("%lf",&point_ptr[i].X);
		printf("P%d.Y: ",i+1);
		scanf("%lf",&point_ptr[i].Y);
	}
	printf("Length:\n");
	for(i=1;i<n;i++){
		double dX,dY,length;
		dX = point_ptr[i-1].X - point_ptr[i].X;
		dY = point_ptr[i-1].Y - point_ptr[i].Y;
		length = sqrt(pow(dX,2)+pow(dY,2));
		printf("Length from P%d(%.2f, %.2f) to P%d(%.2f, %.2f) is %.2f\n",
		i,point_ptr[i-1].X,point_ptr[i-1].Y,
		i+1,point_ptr[i].X,point_ptr[i].Y,
		length);

	}

}