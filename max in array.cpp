#include<iostream>
using namespace std;

void printmax(int arr[5])
{
    //initializing 1 element as max for comparison
    int max = arr[0];

    for(int i=0; i<5; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
            
        }
    }
    cout<<"The first element is maximun number::"<<max<<endl;
    

}

int main(){

    int arr1[5] = {3,4,1,5,60};
    printmax(arr1);
 }