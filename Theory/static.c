

// C program with structure static member 
struct Record { 
    static int x; 
}; 
  
// Driver program 
int main() 
{ 
    return 0; 
} 
/* 6:5: error: expected specifier-qualifier-list  
   before 'static' 
     static int x; 
     ^*/
