#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
#include<time.h>

int main()
		
   
{
	system("CLS");
	
	char uname,code;
	
    printf("\n  **************************  LOGIN FORM  **************************  ");
    printf(" \n                       ENTER USERNAME:-");
	scanf("%s", &uname); 
	printf(" \n                       ENTER PASSWORD:-");
	scanf("%s", &code); 

	
	
	
	system ("CLS");
	
	 
	printf("                                                                                                         \n");
	printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
	printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
	printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
	printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
	printf("|\t\t\t\t==================================\t\t\t\t\t\t|\n");
	printf("|\t\t\t\t|\t     WELCOME TO \t |\t\t\t\t\t\t|\n");
	printf("|\t\t\t\t|\tANONYMOUS THE HOUSE\t |\t\t\t\t\t\t|\n");
	printf("|\t\t\t\t==================================\t\t\t\t\t\t|\n");
	printf("|\t\t\t\t            Address      \t\t\t\t\t\t\t|\n");
	printf("|\t\t\t\t\t     Number\t\t\t\t\t\t\t\t|\n");
	printf("|\t\t\t\t      \"WE BELIEVE IN QUALITY\"\t\t\t\t\t\t\t|\n");
	printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
	printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
	printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
	printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
	printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
	printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
	printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
	printf("|Press any key to continue.........\t\t\t\t\t\t\t\t\t\t|\n");
	printf("---------------------------------------------------------------------------------------------------------\n");
	                  
	
	printf(" -------------------------------------------------------------------------\n");
	printf("|                                                                         |\n"); 
	printf("|                                                                         |\n"); 
	printf("|                      WELLCOME TO ANONYMOUS YARD                         |\n"); 
	printf("|                                                                         |\n");      
	printf("|                                                                         |\n");
	printf("|  OOOOOO   OOOOOO OOOOOO OOOOOO OOOOOO OOOOOO O      O OOOOOOO  OOOOOO   |\n");
	printf("|  O        O    O O      O        O      O    O O    O O        O        |\n");
	printf("|  O  OOOOO OOOOOO OOOOO  OOOOO    O      O    O  O   O O  OOOOO OOOOOO   |\n");
	printf("|  O    O   O  O   O      O        O      O    O   O  O O    O        O   |\n");
	printf("|  OOOOOO   O   O  OOOOOO OOOOOO   O    OOOOOO O    O O OOOOOO   OOOOOO   |\n");
	printf("|                                                                         |\n");                       
	printf(" -------------------------------------------------------------------------\n");
 	printf("\t\t*************************************************\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*       -----------------------------           *\n");
	printf("\t\t*        WELCOME TO ANONYMOUS HOUSE             *\n");
	printf("\t\t*       -----------------------------           *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*       I AM ONLY TRUE WHEN I AM ALONE          *\n");
	printf("\t\t*       I RESTORE MYSELF WHEN I AM ALONE        *\n");
	printf("\t\t*     CONTACT US:03493237141,03156548541        *\n");
    printf("\t\t*       THIS IS ANONYMOUS ITs Me ZOHAIB         *\n");
	printf("\t\t*************************************************\n\n\n");
	
	int main();
	{     
	int i=0;
	
	time_t t;
	time(&t);
	char customername;
	char choice;
	
		for(i=0;i<80;i++)
		printf("-");
	printf("\n ANONYMOUS ITs Current date and time : %s",ctime(&t));
}
 int a,qty,rate,total;
  printf("\n-----------------------HOME PAGE--------------------------\n");
  
 printf("\n---------------- HOW CAN WE HELP YOU?--------------------\n\n");
 
 	printf("============ Enter Your choice for menu Detail =============");
 
 printf("\nMENU CARD \nSelect your drink \n1.WATER \n2.COFFEE \n3.TEA \n4.COLD COFFEE \n5.MILK SHAKE \n6.STALC\n");
 scanf("%d",&a);
 switch(a)
 {
 	  case 1:
    printf("\nYou have selected WATER.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=5;
    total=qty*rate;
    printf("\n\n your order is successfully !!");
   	printf("\n\n       your bill            !!");
    printf("\nTotal amount :%d",total);
    break;
  case 2:
    printf("\nYou have selected Coffee.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=5;
    total=qty*rate;
    printf("\n\n your order is successfully !!");
   	printf("\n\n       your bill            !!");
    printf("\nTotal amount :%d",total);
    break;
  case 3:
    printf("\nYou have selected Tea.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=10;
    total=qty*rate;
    printf("\n\n your order is successfully !!");
   	printf("\n\n       your bill            !!");
    printf("\nTotal amount :%d",total);
    break;
  case 4:
    printf("\nYou have selected Cold coffee.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=15;
    total=qty*rate;
	printf("\n\n your order is successfully !!");
   	printf("\n\n       your bill            !!");
    printf("\nTotal amount :%d",total);
    break;
  case 5:
    printf("\nYou have selected Milk shake.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=20;
    total=qty*rate;
    printf("\n\n your order is successfully !!");
   	printf("\n\n       your bill            !!");
    printf("\nTotal amount :%d",total);
    break;
  case 6:
    printf("\nYou have selected Stalc.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=15;
    total=qty*rate;
    printf("\n\n your order is successfully !!");
   	printf("\n\n       your bill            !!");
    printf("\nTotal amount :%d",total);
    break;
    
   	printf("\n\n your order is successfully !!");
   	printf("\n\n       your bill            !!");
   	
  default:
    printf("\nSorry Unavailable...%ds",a);
    break;
 }
getch ();
}