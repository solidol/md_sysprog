#include <iostream>
using namespace std;
int main()
{
    //приклад 1 + 1*2 + 1*3+ ... + 1*n
    int i = 2; 
    int sum = 1; 
    do{
        sum = sum + 1*i;
        i++;
    } while(i<=10);
    cout << sum;
    system("PAUSE");
}