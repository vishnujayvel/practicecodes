#include <iostream>
using namespace std;
int main()
{
    char x[256];
    cout  <<  "Enter the string"  <<  endl;
    cin.getline(x,256,'\n');
    int set=0;
    int flag=0;
    char *ptr=x;
    do
    {
          //this would skip over all consecutive white
          //spaces
          if(*(ptr+flag)==' '){
             set=1;
             ptr++;
		 }
           
          while(*(ptr+flag)==' '&&set==1)
             flag++;

          //as long as we get valid characters they are just
          // copied over
          *ptr=*(ptr+flag);  
          set=0;    
             ptr++;

    }while(*(ptr+flag)!=NULL);
    // if there are no white spaces each character would
    //be copied to its own position
    *ptr='\0';

    cout  <<  "Modified string is "  <<  x  <<  endl;
   
    return 0;
}
