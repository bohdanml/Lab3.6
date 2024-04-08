#include "D3.h"
#include "D1.h"
#include "D2.h"
#include "B1.h"
#include "B2.h"
#include "B3.h"

int main()
{
    B1 o0(777);
    cout << "B1 o0(777);" << endl;
    cout << "sizeof(B1) = " << sizeof(B1) << endl;
    cout << endl << "I. B1: " << endl;
    o0.show_B1();

    B2 o1(111);
    cout << "B2 o1(111);" << endl;
    cout << "sizeof(B2) = " << sizeof(B2) << endl;
    cout << endl << "I. B2: " << endl;
    o1.show_B2();

    B3 o2(1000);
    cout << "B3 o3(1000);" << endl;
    cout << "sizeof(B3) = " << sizeof(B2) << endl;
    cout << endl << "I. B3: " << endl;
    o2.show_B3();

    D1 o3(112,334,234);
    cout << "D1 o3(112,334,234);" << endl;
    cout << "sizeof(D1) = " << sizeof(D1) << endl;
    cout << endl << "I. D1: " << endl;
    o3.show_D1();


    D2 o4(112,23,32);
    cout << "B3 o3(112,23,32);" << endl;
    cout << "sizeof(D2) = " << sizeof(D2) << endl;
    cout << endl << "I. D2: " << endl;
    o4.show_D2();

    D3 o5(1, 2, 3, 4, 5, 6);
    cout << "D3 o3(1, 2, 3, 4, 5, 6);" << endl;
    cout << "sizeof(D3) = " << sizeof(D3) << endl;
    cout << endl << "I. D3: " << endl;
    o5.show_D3();

    return 0;
}