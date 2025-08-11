// sallary distribution app
#include <stdio.h>
void main()
{
    int total_sal = 20000, distri_sal = 0, sal, e;
    printf("<-----sallary distribute app ------>\n");
    printf("       Total sallary : %d\n", total_sal);
    printf("------------------------------------\n");
    do
    {
        printf("enter emp sallary : ");
        scanf("%d", &sal);
        distri_sal = distri_sal + sal;
        if (distri_sal < total_sal)
        {
            printf("\nsallary distribute succefully\n\n");
        }
        else
        {
            distri_sal = distri_sal - sal;
            printf("\nnot sufficient balence \n");
            printf("you have only %d rs \n\n", total_sal - distri_sal);
        }
        printf("you have more emp press 1 : ");
        scanf("%d", &e);
    } while (e == 1);
    printf("------------------------------------\n");
    printf("total distribute sallary : %d\n", distri_sal);
    printf("remaining belance : %d\n", total_sal - distri_sal);
}