#include <stdio.h>

int main()
{
    unsigned int ID  = 0 ;
    printf("Enter your ID:");
    scanf("%d",&ID);
    int AhmedID =3241;
    switch(ID)
    {
        default:printf("wrongID\n");break;  
        case AhmedID:printf("Welcome Ahmed\n");break;
        case 3241:printf("Welcome Ahmed\n");break;
        case 3392:printf("Welcome Hesham\n");break;    
        case 4501:printf("Welcome Omar\n");break;
      
    }
}