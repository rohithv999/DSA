#include <iostream>
using namespace std;

int main()
{
     cout<<"By VISHAL AGGARWAL\nUID 20BCS1119\n\n";
    int  element=11, ind, flag = 0;
    int num=10;
    int arr[10]={0,1,2,4,5,6,8,9,3,7};
 
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == element)
        {
            ind = i;
            flag=1;
            break;
        }
        
    }

    if (flag == 0)
    {
        cout << "\nElement not found in your array";
    }

    else
        cout << "\nElement found at index " << ind << " position " << ind + 1;
}
