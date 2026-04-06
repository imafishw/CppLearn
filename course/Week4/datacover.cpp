#include <iostream>
#include <cstdint>
using namespace std;

// 你的共用体
union Data {
    int8_t  data8[3];   // 1字节
    int16_t data16[3];  // 2字节
    int32_t data32[3];  // 4字节
    int64_t data64[3];  // 8字节
};

int main() {
    Data d;

    // 第一步：给 data8 赋值
    d.data8[0] = 0x11;
    cout << "第一步：给 data8[0] = 0x11" << endl;
    cout << "data8[0] = " << hex << (int)d.data8[0] << endl;
    cout << "------------------------------------" << endl;

    // 第二步：给 data16 赋值 → 覆盖 data8
    d.data16[0] = 0x2222;
    cout << "第二步：给 data16[0] = 0x2222" << endl;
    cout << "data8[0] 现在变成：" << hex << (int)d.data8[0] << endl;
    cout << "data16[0] = " << hex << d.data16[0] << endl;
    cout << "【原来的 0x11 已经被覆盖消失！】" << endl;
    cout << "------------------------------------" << endl;

    // 第三步：给 data32 赋值 → 覆盖前面所有
    d.data32[0] = 0x33333333;
    cout << "第三步：给 data32[0] = 0x33333333" << endl;
    cout << "data8[0] = " << hex << (int)d.data8[0] << endl;
    cout << "data16[0] = " << hex << d.data16[0] << endl;
    cout << "【data8、data16 全部被覆盖！】" << endl;
    cout << "------------------------------------" << endl;

    return 0;
    
}