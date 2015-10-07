#include<iostream.h>
#include<conio.h>

void funkZero(int t,...)
    {int *ptr=&t;
    while (*(ptr)!=0)
    cout<<*(ptr++)<<endl;
    }
 

 int main()
{
	funkZero(1,2,3,4,5,45,0);
   getch();
   return 0;
}
