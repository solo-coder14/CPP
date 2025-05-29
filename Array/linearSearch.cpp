#include<iostream>
using namespace std;
int main()
{   int n;
    cout<<"Enter the size: ";
    cin>>n;
    int arr[n], index;
    
    for(int i=0; i<n; i++){
        cout << "Element(" << i<<") : ";
        cin>>arr[i];
    }

    int chk=0, j=0, arrTemp[100];

    int num;
    cout<<"\nEnter the Number to Search: ";
    cin>>num;

    for(int i=0; i<n; i++)
    {
        if(arr[i] == num)
        {
            arrTemp[j] = i; // arrTemp is a temporary array list of arr elemets
            j++;
            chk++;
        }
    }
    if(chk > 0)
    {
        cout<<endl<<num <<" Found at Index No. ";
        
        for(int i=0; i<chk; i++)
            cout<<arrTemp[i]<<" ";
    }
    else
        cout<<endl<<num <<" does not Found!";
    cout<<endl;
    return 0;
}
