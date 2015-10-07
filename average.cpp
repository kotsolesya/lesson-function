#include<iostream.h>
#include<conio.h>

int average(int k,...)
    {   int *ptr=&k;
    
        int S=*(++ptr);
       
        for(int i=1; i<=k; i++)
                 S=S+*(++ptr);
                 	cout<<S<<endl;
        return S/k;
    }
 

 int main()
{
	cout<<average(6,2,3,4,5,45,2)<<endl;
	cout<<average(2,5,5)<<endl;
   getch();
   return 0;
}
