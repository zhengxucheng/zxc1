#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
void quit()
{
    exit(0);
}
void hello()
{
     printf("welcome\n");
}
void help()
{
    printf("show th help-----\n");
    printf("you can input quit hello help add sub mult square time:\n");
}
void add()
{
    double a,b,sum;
    printf("please input two numbers:\n");
    scanf("%lf %lf",&a,&b);
    sum=a+b;
    printf("%0.2lf+%0.2lf=%0.2lf\n",a,b,sum);
}
void sub()
{
    double a,b,c;
    printf("please input two numbers:\n");
    scanf("%lf %lf",&a,&b);
    c=a-b;
    printf("%0.2lf-%0.2lf=%0.2lf\n",a,b,c);
}
void mult()
{
    double a,b,c;
    printf("please input two numbers:\n");
    scanf("%lf %lf",&a,&b);
    c=a*b;
    printf("%lf*%lf=%lf\n",a,b,c);
}
void square()
{
    double a,s;
    printf("please input number:\n");
    scanf("%lf",&a);
    s=a*a;
    printf("%lf*%lf=%lf\n",a,a,s);
}
int showtime()
{
    time_t rawtime;
    struct tm * timeinfo;
    time(&rawtime);
    timeinfo=localtime(&rawtime);
    printf("The date/time is %s",asctime(timeinfo));
    return 0;
}
int main()
{
    char cmd[128];
    while(1)
    {
        scanf("%s",cmd);
        if(strcmp(cmd,"hello")==0)
        {
            hello();
        }
        else if(strcmp(cmd,"quit")==0)
        {
            quit();
        }
        else if(strcmp(cmd,"help")==0)
        {
            help();
        }
        else if(strcmp(cmd,"add")==0)
        {
            add();
        }
        else if(strcmp(cmd,"sub")==0)
        {
            sub();
        }
        else if(strcmp(cmd,"mult")==0)
        {
            mult();
        }
        else if(strcmp(cmd,"square")==0)
        {
            square();
        }
        else if(strcmp(cmd,"time")==0)
        {
            showtime();
        }  
    }
}
