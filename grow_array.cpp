int* p;
p = new int[5];
for(int i=0;i<5;i++)
   *(p+i)=i;

// realloc
int* temp = new int[6];
std::copy(p, p + 5, temp); 
delete [] p;
p = temp;
