/* Calloc():
	It is a method used to dynamically allocate the specified number of blocks of memory of specified type; it initialises each block with default value'0'
				ptr = (cast-type*) calloc(n, element size)
				ptr = (float*) calloc (25, sizeof()float)*/

#include <iostream> 
using namespace std;

#include <stdlib.h> 
  
int main() 
{ 
  
    // This pointer will hold the base address of the block created 
    int* ptr; 
    int n, i, sum = 0; 
  
    // Get the number of elements for the array 
    
    cout<<"Enter number of elements: "; 
    cin>>n;

    // Dynamically allocate memory using malloc() 
    ptr = (int*)calloc(n, sizeof(int)); 
  
    // Check if the memory has been successfully allocated by malloc or not 
    if (ptr == NULL) 
    { 
       	cout<<"Memory not allocated.\n"; 
        exit(0); 
    } 
    else { 
 	// Get the elements of the array
	cout<<"Enter the elements ";
	for(i = 0; i < n; ++i)
	{
		cin>>ptr[i];
	}
  
        // Print the elements of the array 
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
