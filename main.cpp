#include <iostream>
#include "md5.h"

using namespace std;

int main()
{
    string s = "";

    int arr1[4] = { 0,21,22,25 };
    for (int i = 0; i < 4; i++) {

        if (i % 2 == 0)continue;
       // cout << arr1[i] << endl;
        s = s + std::to_string(arr1[i]);
    }
    cout << s << endl;
    cout << "md5 of The concatenated string: " << md5("s") << endl;

    return 0;
}
