#include <iostream>

using namespace std;

int main()
{
    int A[5];
    A[0] = 12;
    A[1] = 15;
    A[2] = 25;
    A[3] = 25;
    A[4] = 25;

    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", A[i]);
    }

    cout<<sizeof(A)<<endl;
    cout<<A[1]<<endl;
    printf("%d \n",A[2]);
    
    return 0;
}