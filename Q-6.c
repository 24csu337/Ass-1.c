// WAP to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.
#include <stdio.h>

int main() {
    float x,y;
    printf("enter coordinates (x,y)\n:");
    scanf("%f%f",&x,&y);
    if (x==0&&y==0){
        printf("point lies at origin\n");
    }
    else if (x>0&&y==0){
        printf("point lies on x axis\n");
    }
    else if (x==0&&y>0){
        printf("point lies on y axis\n");
    }
    else if (x<0&&y==0){
        printf("point lies on negative x axis\n");
    }
    else if (x==0&&y<0){
        printf("point lies on negative y axis\n");
    }
    else if (x>0&&y>0){
        printf("point lies in first quadrant\n");
    }
    else if (x>0&&y>0){
        printf("point lies in second quadrant\n");
    }
    else if (x>0&&y>0){
        printf("point lies in third quadrant\n");
    }
    else if (x>0&&y>0){
        printf("point lies in fourth quadrant\n");
    }

    return 0;
}