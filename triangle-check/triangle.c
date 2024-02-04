#include <stdio.h>

int main(){
    // taking input of three sides
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    // cheacking wheather it is accually a triangle or not
    if(a<0 || b <= 0 || c <= 0) {
        printf("it is not a triangle");
        return 0;
    }
    // determining the types of the triangle
    if(a==b && a==c){
        printf("triangle is Equilateral");
    } else if(a==b || a==c)printf("Triangle is isosceles");
    else{
        printf("Triangle is Scalene");
    }
    return 0;
}