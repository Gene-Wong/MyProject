#include <iostream>
#include "swap.h"

using namespace std;

int main(int argc, char **argv)
{
    int val1 = 10;
    int val2 = 20;

    cout<<"before"<<val2<<endl;
    swap(val1, val2);
    cout<<"after"<< val1<<endl;
    return 0;
}