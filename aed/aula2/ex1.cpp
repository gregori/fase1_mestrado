#include <iostream> 
using namespace std;

int main()
{
    int y, *p, x;

    y = 0;
    p = &y;
    x = *p;
    x = 4;
    (*p)++;
    x++;
    (*p) += x;
    cout << y << '\n';
    return 0;
}
