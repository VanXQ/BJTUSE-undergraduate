
#include<stdio.h>
#include<stdlib.h> 
int main()
{
	float paid,change,check,dollars;
	int dollar_bills,quarter_coins,dime_coins;
	int nickel_coins,pennies_coins;
	//�ֱ�����100���֣�25���֣�10���֣�5���֣�1���ֵ�����
	printf("please type the paid and the check,space between them\n");
	//��ʾ����֧��Ǯ�����˵� 
	scanf("%f %f",&paid,&check);
	//����֧�����˵� 
    change=(paid-check)*100;
    /* determine the amount of the change */
    dollars=change/100;	 
    /* determine the number of dollars in the change */ 
    dollar_bills=(int)(dollars);
    //�����Ԫ�� 
    quarter_coins=(int)((change-dollar_bills*100)/25);
    //���quarter bills������ 
    dime_coins=(int)((change-dollar_bills*100-quarter_coins*25)/10);
    //��� dime coins������ 
	nickel_coins=(int)((change-dollar_bills*100-quarter_coins*25-dime_coins*10)/5);
	//��� nickel_coins������ 
	pennies_coins=(int)((change-dollar_bills*100-quarter_coins*25-dime_coins*10-nickel_coins*5));
	printf("The change is %.2f dollars,\nwhich is %d dollar bills,\n%d quarter coins,\n%d dime coins,\n%d nickel coins,\n%d pennies coins",
	dollars,dollar_bills,quarter_coins,dime_coins,nickel_coins,pennies_coins);
	//�������� 
    system("pause"); 
	return 0; 
}
