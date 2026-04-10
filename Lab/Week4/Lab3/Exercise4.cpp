#include<iostream>
using namespace std;
#include <stdlib.h>  // atoi 需要这个头文件
#include <string>


enum Day{
    Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
};
enum Weather {
    SUNNY,RAINY,CLOUDY,WINDY,SNOWY
};
// 需要完成一个类型转换函数，输入一个整数，输出对应的Day和Weather枚举值
string getday(Day d){
    switch(d){
        case Monday: return "Monday";
        case Tuesday: return "Tuesday";
        case Wednesday: return "Wednesday";
        case Thursday: return "Thursday";
        case Friday: return "Friday";
        case Saturday: return "Saturday";
        case Sunday: return "Sunday";
    }
    return "Invalid Day";
}

string getweather(Weather w){
    switch(w){
        case SUNNY: return "Sunny";
        case RAINY: return "Rainy";
        case CLOUDY: return "Cloudy";
        case WINDY: return "Windy";
        case SNOWY: return "Snowy";
    }
    return "Invalid Weather";
}

// 传入参数 + 1
// char* [] 表示的是 「字符串数组」，也就是多个字符串放在一起。
int main(int argc, char* argv[]){
    int d = 0;
    int w = 0;
    std::cout << "Number of arguments: " << argc << std::endl;

    for (int i = 0; i < argc; ++i) {
        std::cout << "Argument " << i << ": " << argv[i] << std::endl;
    }
    cout <<"input the Day Value:Monday(1), Tuesday(2), Wednesday(3), Thursday(4), Friday(5), Saturday(6), Sunday(7)"<<endl;
    // 分两种情况
    // 1. 直接输入数字
    // 2. 通过命令行参数输入数字
    // 第一位无需赋值，因为它是程序的名称
     // 情况1：命令行参数
    if(argc >= 3){
        d = atoi(argv[1]);
        w = atoi(argv[2]);
    }
    // 情况2：手动输入
    else{
        cout << "Please input Day (1-7): ";
        cin >> d;
        cout << "Please input Weather (0-4): ";
        cin >> w;
    }
    
    Day dday;
    dday = Day(d-1);
    cout<<"This is "<<getday(dday)<<endl;
    Weather wday;
    wday = Weather(w);
    cout<<"The weather is "<<getweather(wday)<<endl;

    if((dday == Sunday || dday == Saturday)&& (wday == SUNNY)) cout<<"can Travel\n";
    else cout<<"not suitable for travelling\n"; 
    return 0;
}