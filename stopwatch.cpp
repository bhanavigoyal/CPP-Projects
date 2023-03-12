#include<iostream>
#include<cstdlib>
#include<unistd.h>

int main(){

    short minutes, seconds;
    int time;

    do{
        std::cout<<"Enter seconds: ";
        std::cin>>seconds;
    }while(seconds>59);

    do{
        std::cout<<"Enter minutes: ";
        std::cin>>minutes;
    }while(minutes>59);

    time=(minutes!=0)? minutes*60:0;
    time+=seconds;

    for(int i=time; i>0; i--){
        system("clear");
        std::cout<<"The time remaining is 0:"<<minutes<<":"<<seconds<<std::endl;
        minutes = (i%60==0)? --minutes: minutes;
        seconds = (seconds==0)?59:--seconds;
        sleep(1);
    }
    system("clear");
    std::cout<<"*************\nTimer ended!\a \nLasted for "<<time<<" seconds"<<std::endl;

    return 0;
}