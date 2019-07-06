
#include <iostream>
using namespace std;

class Fibonacci{

    public:
    int a , b, c;
    long long fib_recur(int n);
    void fib_dp(int n);
};

long long Fibonacci::fib_recur(int n){
    if ( n==0 || n == 1)
       return n;
    
    return fib_recur(n-1) + fib_recur(n-2);

}

void Fibonacci::fib_dp(int n){
    long long f1 = 0, f2 = 1;

    if (n < 1)
     return;

     for (int i = 1; i <=n ; ++i)
     {
         cout << f2 <<" ";
         long long  next = f1 + f2;
         f1 = f2;
         f2 = next;
     }

}

int main()
{
    int n;
    cout << "Enter the number of Fibonacci Series: " << endl;
    cin >> n;

    Fibonacci fibObj;

    cout << "calculate " << n << " Fibonacci Series using DP" << endl;
    fibObj.fib_dp(n);

    cout << endl;


    cout << "calculate " << n << " Fibonacci Series using recursion" << endl;
    for (int i = 1; i <=n; ++i)
      cout << fibObj.fib_recur(i) << " ";

    cout << endl;

    

   return 0;


}