#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main ()
{
    printf("                           !!WELLCOME TO OUR SOFTWARE!!\n");
    system("COLOR 2F");
    int a,b,c,d,e,f,g,h=0,i,j,k,l,cash_amount[100],bazar_cost[30],total_bazar=0,per_hed[100],total_cash=0,per_meal_rate;
    char name[8][20];
    printf("How many members in your mess?\n");
    scanf("%d",&a);

    for(j=0; j<a; j++)
    {
        printf("Enter the member name:%d\n",j+1);
        scanf(" %s",name[j]);
    }
    for(k=0,j=0; k<a; k++,j++)
    {
        printf("Enter %s cash amount:\n",name[j]);
        scanf("%d",&cash_amount[k]);
    }
    for(l=0; l<30; l++)
    {
        printf("Date %d: Enter total cost in bazar:\n",l+1);
        scanf("%d",&bazar_cost[l]);
        total_bazar=total_bazar+bazar_cost[l];
        //printf("Total bazar month\n",total_bazar);
    }
    for(j=0;j<a;j++)
    {
        printf("Member name: %s\n",name[j]);
        h=0;
        for(i=0;i<30;i++)
        {
            printf("Date %d: Total meal:\n",i+1);
            scanf("%d",&g);
            h=h+g;
        }
        per_hed[j]=h;
        printf("%s total meal : %d\n",name[j],per_hed[j]);

    }
    h=0;
    for(j=0;j<a;j++)
    {
        h=h+per_hed[j];
    }
    //printf("Total meal in mess: %d\n",h);
    for(j=0;j<a;j++)
    {
        total_cash=total_cash+cash_amount[j];
    }
    per_meal_rate=total_cash/h;
            printf("       Per male rate: %d\n",per_meal_rate);
    for(j=0;j<a;j++)
    {
            printf("       %s meal cost: %d\n",name[j],per_meal_rate*per_hed[j]);
    }
    for(j=0;j<a;j++)
    {
        h=per_meal_rate*per_hed[j];
        h=h-cash_amount[j];
        if(h>0)
        {
            printf("       %s due : %d\n",name[j],h);
        }
        else if(h<0)
        {
            printf("       %s get : %d\n",name[j],abs(h));
        }
        else{
            printf("       %s nothing to do\n",name[j]);
        }
    }

    getch();
    return 0;
}
