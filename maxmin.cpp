#include <iostream> 
using namespace std;
int getmin( int arr[],int n)
{
    int res =  arr[0];
    for (int i=1;i<n;i++)
        res = min(res,arr[i]);
    return res;

}

int getmax(int arr[],int n)
{
    int res =  arr[0];
    for(int i=0; i<n;i++)
        res= max(res,arr[i]);
    return res;
}

int main()
{
    
    int arr[]= {23,544,76,4543,66};
    int n = sizeof(arr)/ sizeof(arr[0]);
    cout<< "min no:-"<< getmin(arr,n)<< "\n";
    cout<< "max no:-"<< getmax(arr,n);
    return 0;

}