#include"periodic.h"
int main()
{
	int i=999,option;
	do
	{
		option=get_option();
		char ch1,ch2;
		switch (option)
		{
			case 1: 
                    i=atomic_number();
					break;
			case 2: 
                    i=atomic_symbol();
					break;
			case 3: 
                    i=atomic_name();
					printf("%d",i);
					break;
			case 4: 
                    i=atomic_weight();
					break;
			case 5: 
                    printf("Exiting...\n");
                    return (0);
			default: 
					 printf("\n\n\n\t\t\t\tWrong Choice!\n");
					 printf("\n\t\t\t\tLet's try it again, Shall we ?\n\n");
		}
		if (i== -1)
		{
			printf("\n\t\t\t\t\t\tOops ! \n\t\t\t\t\tNo Such element present !\n");
			printf("\t\t\t\t     Make a right choice this time !\n\n");
		}
		else
		{
			ch1=block(i);
			ch2=property(i);
			show(i,ch1,ch2);
		}
	}
	while (1);
    return 0;
}