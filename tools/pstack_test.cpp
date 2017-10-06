#include<unistd.h>
#include<iostream>

using namespace std;

#define abc "abc" 

int main()
{
    string s;
    int n = 86400;
    for (int i = 0; i < n; i++)
    {
        cout << i << endl;
        sleep(1);
    } 

    return 0;
}
