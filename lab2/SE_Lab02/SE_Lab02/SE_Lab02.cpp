#include <iostream>
using namespace std;

int main()
{
    bool t = true, f = false;
    cout << "bool = " << sizeof(t) << endl;
    char soname = 'A';
    char soname_rus = 'А';
    cout << "char = " << sizeof(soname) << endl;
    wchar_t yra = 'B';
    wchar_t yra_rus = 'Б';
    cout << "wchar_t = " << sizeof(yra) << endl;
    short x = 10;
    short x_min = -10;
    short max_o = 0x7fff;
    short min_o = -0x8000;
    cout << "short = " << sizeof(x) << endl;
    unsigned short min_un_o = 0x0000;
    unsigned short max_un_o = 0xffff;
    cout << "unsigned char = " << sizeof(min_un_o) << endl;
    int y = 11;
    int y_min = -11;
    int y_o = 0x0000000b;
    int y_min_o = 0xfffffff5;
    cout << "int = " << sizeof(y) << endl;
    unsigned int min_un_int = 0x00000000;
    unsigned int max_un_int = 0xffffffff;
    cout << "unsigned int = " << sizeof(min_un_int) << endl;
    long z = 12;
    long z_min = -12;
    cout << "long = " << sizeof(z) << endl;
    unsigned long max_long = 0xffffffff;
    unsigned long min_long = 0x0000000000000000;
    cout << "unsigned long = " << sizeof(max_long) << endl;
    float s = 2.0;
    float s_min = -2.0;
    cout << "float = " << sizeof(s) << endl;

    char* psoname = &soname;
    wchar_t* p_yra = &yra;
    short* px = &x;
    int* py = &y;
    float* ps = &s;
    cout << "char* = " << sizeof(psoname) << endl;

    char* psoname3 = psoname + 3;
    wchar_t* p_yra3 = p_yra + 3;
    short* px3 = px + 3;
    int* py3 = py + 3;
    float* ps3 = ps + 3;
    
}