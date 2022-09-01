#incude<conio.h>
int main(void)
{
	int paisa,rupees,chanchun;
	float total;
	printf("Please enter the amount\n");
	sanf("%d",&	chanchun);
	
	rupees=chanchun/100;
	paisa=chanchun%100;//modulo operator.......gives reminder
	total= rupees+paisa;
	printf("the total rupees is=%f",total);
	return 0;
	
}
