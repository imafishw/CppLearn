#include<iostream>

using namespace std;

enum color {WHITE, BLACK, RED, GREEN, BLUE, YELLOW, NUM_COLORS};
enum color pen_color = RED;
// 本质上是整数 可搭配Switch\if 语句使用
int main(){
    pen_color = color(3);
    cout << "We have " << NUM_COLORS << " pens." << endl;
    // pen_color += 1; //error!
    cout <<color(3) << endl;
    int color_index = pen_color;
    color_index += 1;

    cout << "color_index = " << color_index << endl ;
    return 0;
}