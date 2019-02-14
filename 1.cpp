#include <iostream> 
using namespace std;

#include <stdlib.h> 
  
int main() 
{ 
 
    int* ptr; 
    int n, i, sum = 0; 
  
    
    
    cout<<"Enter number of elements: "; 
    cin>>n;

    
    ptr = (int*)calloc(n, sizeof(int)); 
  
    
    if (ptr == NULL) 
    { 
       	cout<<"Memory not allocated.\n"; 
        exit(0); 
    } 
    else { 
 	
	cout<<"Enter the elements ";
	for(i = 0; i < n; ++i)
	{
		cin>>ptr[i];
	}
  
        
        cout<<"\n\nThe elements of the array are: \n"; 
        for (i = 0; i < n; ++i) 
	{ 
            cout<<ptr[i]<<"\n"; 
        } 

	
        // Memory has been successfully allocated 
        cout<<"Memory successfully allocated using calloc.\n"; 
  
    } 
  
    return 0; 
}
