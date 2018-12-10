#include <math.h>
#include <program.h>
#define PI 3.14159265
float a1;
float a2;
float a3;
float a4;
float a5;
int i;
float numberArray[626];


float func1a1 (float a){
        float tot;
        tot=0.0;
        for(i=0;i<627;i++){
                tot+=pow(numberArray[i]-(a*pow((i/12),2)+a2*(i/12)+a3+a4*sin(2*PI*((i/12)+a5))),2);
        }
        return tot/627;
}

float func1a2 (float a){
        float tot;
        tot=0.0;
        for(i=0;i<627;i++){
                tot+=pow(numberArray[i]-(a1*pow((i/12),2)+a*(i/12)+a3+a4*sin(2*PI*((i/12)+a5))),2);
        }
        return tot/627;
}

float func1a3 (float a){
        float tot;
        tot=0.0;
        for(i=0;i<627;i++){
                tot+=pow(numberArray[i]-(a1*pow((i/12),2)+a2*(i/12)+a+a4*sin(2*PI*((i/12)+a5))),2);
        }
        return tot/627;
}

float func1a4 (float a){
        float tot;
        tot=0.0;
        for(i=0;i<627;i++){
                tot+=pow(numberArray[i]-(a1*pow((i/12),2)+a2*(i/12)+a3+a*sin(2*PI*((i/12)+a5))),2);
        }
        return tot/627;
}

float func1a5 (float a){
        float tot;
        tot=0.0;
        for(i=0;i<627;i++){
                tot+=pow(numberArray[i]-(a1*pow((i/12),2)+a2*(i/12)+a3+a4*sin(2*PI*((i/12)+a))),2);
        }
        return tot/627;
}

float func2a1 (float a){
        float tot;
        tot=0.0;
        for(i=0;i<627;i++){
                tot+=pow(numberArray[i]-(a*pow((i/12),a2)+a3+a4*sin(2*PI*((i/12)+a5))),2);
        }
        return tot/627;
}

float func2a2 (float a){
        float tot;
        tot=0.0;
        for(i=0;i<627;i++){
                tot+=pow(numberArray[i]-(a1*pow((i/12),a)+a3+a4*sin(2*PI*((i/12)+a5))),2);
        }
        return tot/627;
}

float func2a3 (float a){
        float tot;
        tot=0.0;
        for(i=0;i<627;i++){
                tot+=pow(numberArray[i]-(a1*pow((i/12),a2)+a+a4*sin(2*PI*((i/12)+a5))),2);
        }
        return tot/627;
}

float func2a4 (float a){
        float tot;
        tot=0.0;
        for(i=0;i<627;i++){
                tot+=pow(numberArray[i]-(a1*pow((i/12),a2)+a3+a*sin(2*PI*((i/12)+a5))),2);
        }
        return tot/627;
}

float func2a5 (float a){
        float tot;
        tot=0.0;
        for(i=0;i<627;i++){
                tot+=pow(numberArray[i]-(a1*pow((i/12),a2)+a3+a4*sin(2*PI*((i/12)+a))),2);
        }
        return tot/627;
}

float func3a1 (float a){
        float tot;
        tot=0.0;
        for(i=0;i<627;i++){
                tot+=pow(numberArray[i]-(a+a2*exp(a3*(i/12))+a4*sin(2*PI*((i/12)+a5))),2);
        }
        return tot/627;
}

float func3a2 (float a){
        float tot;
        tot=0.0;
        for(i=0;i<627;i++){
		tot+=pow(numberArray[i]-(a1+a*exp(a3*(i/12))+a4*sin(2*PI*((i/12)+a5))),2);
        }
        return tot/627;
}

float func3a3 (float a){
        float tot;
        tot=0.0;
        for(i=0;i<627;i++){
		tot+=pow(numberArray[i]-(a1+a2*exp(a*(i/12))+a4*sin(2*PI*((i/12)+a5))),2);
        }
        return tot/627;
}

float func3a4 (float a){
        float tot;
        tot=0.0;
        for(i=0;i<627;i++){
		tot+=pow(numberArray[i]-(a1+a2*exp(a3*(i/12))+a*sin(2*PI*((i/12)+a5))),2);
        }
        return tot/627;
}

float func3a5 (float a){
        float tot;
        tot=0.0;
        for(i=0;i<627;i++){
		tot+=pow(numberArray[i]-(a1+a2*exp(a3*(i/12))+a4*sin(2*PI*((i/12)+a))),2);

        }
        return tot/627;
}


float gss(float (*f)(float),float a, float b, int k){
        float y,g,x1,x2,f1,f2,a11,b1;
        int i;
        g=(pow(5,0.5)-1)/2;
        x1 = a+(1-g)*(b-a);
        x2 = a+g*(b-a);
        f1 = f(x1);
        f2 = f(x2);
        a11=a;
        b1=b;
        for(i=1;i<k;i++){
                if(f1<f2){
                        b1=x2;
                        x2=x1;
                        x1=a11+(1-g)*(b1-a11);
                        f2=f1;
                        f1=f(x1);
                }else{
                        a11=x1;
                        x1=x2;
                        x2=a11+g*(b1-a11);
                        f1=f2;
                        f2=f(x2);
                }
        }
        y=(a11+b1)/2;
        return y;
}
