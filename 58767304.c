#include<stdio.h>
int main()
{
    int Testcases; //number of Testcases
    scanf("%d\n",&Testcases);
    
    while(Testcases--)
    {
        int Xcredits;  //declaration of variables
        scanf("%d\n",&Xcredits);
        
        if(Xcredits>65)
        {
            printf("OVERLOAD\n");
        }
        else if(Xcredits<35)
        {
            printf("UNDERLOAD\n");
        }
        else
        {
            printf("NORMAL\n");
        }
    }
    return 0;
}
//code by bhumika nayak