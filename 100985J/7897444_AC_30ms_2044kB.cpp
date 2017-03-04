#include<bits/stdc++.h>

using namespace std;

typedef struct
{
    int x,y;
} point;

double distance(point p1,point p2)
{
    return sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
}
/*
bool findCircles(point p1,point p2,double radius)
{
    double separation = distance(p1,p2),mirrorDistance;

    if(separation == 0.0)
    {
        radius == 0.0 ? printf("\nNo circles can be drawn through (%.4f,%.4f)",p1.x,p1.y):
        printf("\nInfinitely many circles can be drawn through (%.4f,%.4f)",p1.x,p1.y);
    }

    else if(separation == 2*radius)
    {
        printf("\nGiven points are opposite ends of a diameter of the circle with center (%.4f,%.4f) and radius %.4f",(p1.x+p2.x)/2,(p1.y+p2.y)/2,radius);
    }

    else if(separation > 2*radius)
    {
        printf("\nGiven points are farther away from each other than a diameter of a circle with radius %.4f",radius);
    }

    else
    {
        mirrorDistance =sqrt(pow(radius,2) - pow(separation/2,2));

        printf("\nTwo circles are possible.");
        printf("\nCircle C1 with center (%.4f,%.4f), radius %.4f and Circle C2 with center (%.4f,%.4f), radius %.4f",(p1.x+p2.x)/2 + mirrorDistance*(p1.y-p2.y)/separation,(p1.y+p2.y)/2 + mirrorDistance*(p2.x-p1.x)/separation,radius,(p1.x+p2.x)/2 - mirrorDistance*(p1.y-p2.y)/separation,(p1.y+p2.y)/2 - mirrorDistance*(p2.x-p1.x)/separation,radius);
    }
}
*/
int main()
{

    int N;

    scanf("%d",&N);

    point cases[N+2];

    int Radius[N+1];

    for(int i=0; i<N; i++)
    {
        int a, b,c;
        scanf("%d %d %d",&a,&b,&c);

        cases[i].x=a;
        cases[i].y=b;
        Radius[i] = c;
    }


    set<int>st;
    for(int i=0; i<N; i++)
    {
        for(int j=i+1; j<N; j++)
        {
            double d = distance(cases[i],cases[j]);

            double r = Radius[i]+Radius[j];

            if(r>=d){
                printf("%d %d\n",i+1,j+1);
            }

        }
    }

    return 0;
}