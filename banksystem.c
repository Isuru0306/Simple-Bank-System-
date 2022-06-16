
						//********* Bank System ********
					
								#include<stdio.h>
								#include<conio.h>
								#include<windows.h>

//These are function***************************************************************************************************************************
		int menu();							void NewEmpDetails();
		int openAccount();					void CheckEmpDetails();
		int deposit();						void EmpBonus();
		int withdraw();						void EmpRemove();
		void checkBalance();				int EmployeeDetails();
		int Remove();					/*	void EmployeeList();*/
		void EditCoustomerD();				int Exit();				
		void CousInterest();
		void CousLess();					void Atm();
		void cousD();						void CDMA();
		void Bonus();						int ICC();
	//	void CoustomerList();							

//globle variables****************************************************************************************************************************
					
  	int acc,dp,w,set=0,Bo;
	int i=0,j=0,co;//loop run				

		struct employee		{
	int emp_Bonus;
		char em_type[15];
	char em_name[25];
		char em_id[15];
	char j_date[15];
		char em_address[30];
	int em_age;
		double em_phone;
	int em_number;
};
struct coustomer add;//structure
										
								struct coustomer			{			
									char  name[25];
								char DATE[20];
									char ID[20];	
								char ADDRESS[40];
									char CITY[15];
								int AGE;
									double PHONE_NUMBER;
								int ACC_NUMBER;
									int AMOUNT;
								float INTEREST;
									int coBonus;
								char acc_type[20];
															};
								struct employee  emp;//structure 
															
//looading**********************************************************************************************************************************

void load(int j){
			int i,k;
			for(i=0;i<=j;i++){
						k=i;
							 }
				}

ICC(){
	
	char b[6],a[6]="union";	//password
	int i,r;
	system("cls");
	char em[1],emp[13]="Employee";
	
					system("COLOR e");
					printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\xB0\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0 Main Menu \xB1\xB0\xB1\xB0");
					printf("\xB0\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\n\n\n");
					printf("\t\t\t\t\t\t\t\t\xB2\t1.Bank Details(staff only).\t\xB2\n\n");
					printf("\t\t\t\t\t\t\t\t\xB2\t2.Employee Details(Staff only).\t\xB2\n\n");
					printf("\t\t\t\t\t\t\t\t\xB2\t3.CDM .................. \t\xB2\n\n");
					printf("\t\t\t\t\t\t\t\t\xB2\t4.ATM .................. \t\xB2\n\n");
					printf("\t\t\t\t\t\t\t\t\xB2\t5.Exit ................. \t\xB2\n\n");
//					printf("\033[1;35m");
					printf("\n\n\t\t\t\t\t\t\t\xB0\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0");
					printf("\xB0\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\n\n");
					printf("\t\t\t\t\t\t\t\t\tENTER YOUR CHOICE:");
					scanf("%d",&co);
					
					switch(co){
					
					case 1:
						system("cls");
						system("COLOR 3");
						printf("\n\n\n\n\n\t\t\t\t\t\t\t\tENTER PASSWORD TO LOGIN:");
						scanf("%s",b);
		
						/*do{
						if(b[i]==a[i])*/
					
						if(strcmpi(a,b)==0)/*if(b[0]==a[0]&&b[1]==a[1]&&b[2]==a[2]&&b[3]==a[3]&&b[4]==a[4])*/{
			
						printf("\n\n\n\n\t\t\t\t\tPASSWORD MATCH! LOADING.");
						for(i=0;i<=10;i++){
							load(100000000);
							printf(".");
							}
							menu();
					
	
				 	}
					else	
					{
					system("color 4");
					printf("\t\t\t\t\t\t\t\tWRONG PASSWORD ..!!!");
					for(i=0;i<=10;i++){//loading
										
					load(10000000);//loading
					printf(".");
					}
					printf("\n\n\t\t\t\t\tTRY AGIN PRESS 1 OR ANY NUMBER EXIT:");
					scanf("%d",&co);
					if(co==1){
					ICC();
					}
					else
					
					Exit();							
					
                    }
					break;
			case 2:	system("cls");
						system("COLOR 3");
						printf("\n\n\n\n\n\t\t\t\t\t\t\t\tENTER PASSWORD TO LOGIN:");
						scanf("%s",em);
		
						/*do{
						if(b[i]==a[i])*/
					
						if(strcmp(emp,em)==0)/*if(b[0]==a[0]&&b[1]==a[1]&&b[2]==a[2]&&b[3]==a[3]&&b[4]==a[4])*/{
			
						printf("\n\n\n\n\t\t\t\t\tPASSWORD MATCH! LOADING.");
						for(i=0;i<=10;i++){
							load(100000000);
							printf(".");
							}
						EmployeeDetails();
						
				 	}
					else	
					{
					system("color 4");
					printf("\t\t\t\t\t\t\t\tWRONG PASSWORD ..!!!");
					for(i=0;i<=10;i++){//loading
										
					load(10000000);//loading
					printf(".");
					}
					printf("\n\n\t\t\t\t\tTRY AGIN PRESS 1 OR ANY NUMBER EXIT:");
					scanf("%d",&co);
					if(co==1){
					ICC( );
					}
					else
					
					Exit();							
					
                    }
			EmployeeDetails();break;
			
			case 3: CDMA(); break;
			
			case 4: Atm();	break;
			
			case 5:Exit();break;
		}
	
}
 
int menu(){
	
    	int user;
		system("cls");//new windows
		system("COLOR 03");//font color
		
		printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\xB0\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0 MENU \xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\n\n");
						
//Menu***************************************************************************************************************************************
							printf("\t\t\t\t\t\t\t\t\t1.OPEN ACCOUNT....... \n");
							printf("\t\t\t\t\t\t\t\t\t2.DEPOSIT........... \n");
							printf("\t\t\t\t\t\t\t\t\t3.WITHDRAW........ \n");
							printf("\t\t\t\t\t\t\t\t\t4.CHECK DETAILS.........\n");
							printf("\t\t\t\t\t\t\t\t\t5.REMOVE ACCOUNT.......... \n");
							printf("\t\t\t\t\t\t\t\t\t6.EDIT COUSTOMER DEATAILS........ \n");
							printf("\t\t\t\t\t\t\t\t\t7.MAIN MENU........ \n");
							printf("\t\t\t\t\t\t\t\t\t8.EXIT PROGRAM...! \n\n");
							printf("  \t\t\t\t\t\t\t\t\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB2\xB2\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0");
							printf("\n\n\t\t\t\t\t\t\tENTER YOUR CHOICE: ");
							scanf("%d",&user);
								
		for(i=0;i<=5;i++){
		load(10000000);
		printf(".");
						 }
do{

	switch(user){

		case 1: openAccount();			 break;
		case 2: deposit();	   		 break;
		case 3: withdraw();		 break;
		case 4:checkBalance();		 break;
		case 5: Remove();			 break;
		case 6: EditCoustomerD();	 break;
		case 7:	ICC();break;
		case 8:							Exit();
		default: printf("INVALIDE\nTRY AGAIN");
	
			     }

}while(i<1);

}

//*******************************************************************************************************************************************

int main(){
	
		system("cls");
		system("COLOR e");
						
		int i,j;
		printf("\n\n\n");
	getch();
	printf("\t\t\t\t\t\t\t\t");

		for(i=17;i<=40;i++){
		for(j=1;j<=40;j++){
			
		if(i==1&&j==28||i==1&&j==29||i==1&&j==30||i==1&&j==34||i==1&&j==35||i==1&&j==36||i==1&&j==37||i==1&&j==38||i==1&&j==39||i==1&&j==40||i==1&&j==33||
		i==2&&j==27||i==2&&j==28||i==2&&j==29||i==2&&j==30||i==2&&j==34||i==2&&j==35||i==2&&j==36||i==2&&j==37||i==2&&j==38||i==2&&j==39||i==2&&j==40||
		i==3&&j==26||i==3&&j==27||i==3&&j==28||i==3&&j==29||i==3&&j==30||i==3&&j==31||i==3&&j==35||i==3&&j==36||i==3&&j==37||i==3&&j==38||i==3&&j==39||i==3&&j==40||
		i==4&&j==25||i==4&&j==26||i==4&&j==27||i==4&&j==28||i==4&&j==29||i==4&&j==30||i==4&&j==31||i==4&&j==32||i==4&&j==36||i==4&&j==37||i==4&&j==38||i==4&&j==39||i==4&&j==40||
		i==5&&j==19||i==5&&j==20||i==5&&j==25||i==5&&j==26||i==5&&j==27||i==5&&j==28||i==5&&j==29||i==5&&j==30||i==5&&j==31||i==5&&j==32||i==5&&j==33||i==5&&j==37||i==5&&j==38||i==5&&j==39||i==5&&j==40||
		i==6&&j==18||i==6&&j==19||i==6&&j==20||i==6&&j==21||i==6&&j==26||i==6&&j==27||i==6&&j==28||i==6&&j==29||i==6&&j==30||i==6&&j==31||i==6&&j==32||i==6&&j==33||i==6&&j==34||i==6&&j==38||i==6&&j==39||i==6&&j==40||
		i==7&&j==17||i==7&&j==18||i==7&&j==19||i==7&&j==20||i==7&&j==21||i==7&&j==22||i==7&&j==27||i==7&&j==28||i==7&&j==29||i==7&&j==30||i==7&&j==31||i==7&&j==32||i==7&&j==33||i==7&&j==34||i==7&&j==35||i==7&&j==39||i==7&&j==40||
		i==8&&j==16||i==8&&j==17||i==8&&j==18||i==8&&j==19||i==8&&j==20||i==8&&j==21||i==8&&j==22||i==8&&j==23||i==8&&j==28||i==8&&j==29||i==8&&j==30||i==8&&j==31||i==8&&j==32||i==8&&j==33||i==8&&j==34||i==8&&j==35||i==8&&j==39||i==8&&j==40||
		i==9&&j==15||i==9&&j==16||i==9&&j==17||i==9&&j==18||i==9&&j==19||i==9&&j==20||i==9&&j==21||i==9&&j==22||i==9&&j==23||i==9&&j==24||i==9&&j==29||i==9&&j==30||i==9&&j==31||i==9&&j==32||i==9&&j==33||i==9&&j==34||i==9&&j==35||i==9&&j==39||i==9&&j==40||
		i==10&&j==14||i==10&&j==15||i==10&&j==16||i==10&&j==17||i==10&&j==18||i==10&&j==19||i==10&&j==20||i==10&&j==21||i==10&&j==22||i==10&&j==23||i==10&&j==24||i==10&&j==25||i==10&&j==29||i==10&&j==30||i==10&&j==31||i==10&&j==32||i==10&&j==33||i==10&&j==34||i==10&&j==38||i==10&&j==39||i==10&&j==40||
		i==11&&j==13||i==11&&j==14||i==11&&j==15||i==11&&j==16||i==11&&j==17||i==11&&j==18||i==11&&j==19||i==11&&j==20||i==11&&j==21||i==11&&j==22||i==11&&j==23||i==11&&j==24||i==11&&j==28||i==11&&j==29||i==11&&j==30||i==11&&j==31||i==11&&j==32||i==11&&j==33||i==11&&j==37||i==11&&j==38||i==11&&j==39||
		i==12&&j==12||i==12&&j==13||i==12&&j==14||i==12&&j==15||i==12&&j==16||i==12&&j==17||i==12&&j==18||i==12&&j==19||i==12&&j==20||i==12&&j==21||i==12&&j==22||i==12&&j==23||i==12&&j==27||i==12&&j==28||i==12&&j==29||i==12&&j==30||i==12&&j==31||i==12&&j==32||i==12&&j==36||i==12&&j==37||i==12&&j==38||
		i==13&&j==11||i==13&&j==12||i==13&&j==13||i==13&&j==14||i==13&&j==15||i==13&&j==16||i==13&&j==17||i==13&&j==18||i==13&&j==19||i==13&&j==20||i==13&&j==21||i==13&&j==22||i==13&&j==26||i==13&&j==27||i==13&&j==28||i==13&&j==29||i==13&&j==30||i==13&&j==31||i==13&&j==35||i==13&&j==36||i==13&&j==37||
		i==14&&j==10||i==14&&j==11||i==14&&j==12||i==14&&j==13||i==14&&j==14||i==14&&j==15||i==14&&j==16||i==14&&j==17||i==14&&j==18||i==14&&j==19||i==14&&j==20||i==14&&j==21||i==14&&j==25||i==14&&j==26||i==14&&j==27||i==14&&j==28||i==14&&j==29||i==14&&j==30||i==14&&j==34||i==14&&j==35||i==14&&j==36||
		i==15&&j==9||i==15&&j==10||i==15&&j==11||i==15&&j==12||i==15&&j==13||i==15&&j==14||i==15&&j==15||i==15&&j==16||i==15&&j==17||i==15&&j==18||i==15&&j==19||i==15&&j==20||i==15&&j==24||i==15&&j==25||i==15&&j==26||i==15&&j==27||i==15&&j==28||i==15&&j==29||i==15&&j==33||i==15&&j==34||i==15&&j==35||
		i==16&&j==8||i==16&&j==9||i==16&&j==10||i==16&&j==11||i==16&&j==12||i==16&&j==13||i==16&&j==14||i==16&&j==15||i==16&&j==16||i==16&&j==17||i==16&&j==18||i==16&&j==19||i==16&&j==23||i==16&&j==24||i==16&&j==25||i==16&&j==26||i==16&&j==27||i==16&&j==28||i==16&&j==32||i==16&&j==33||i==16&&j==34||
		i==17&&j==8||i==17&&j==9||i==17&&j==10||i==17&&j==11||i==17&&j==12||i==17&&j==13||i==17&&j==14||i==17&&j==15||i==17&&j==16||i==17&&j==17||i==17&&j==18||i==17&&j==22||i==17&&j==23||i==17&&j==24||i==17&&j==25||i==17&&j==26||i==17&&j==27||
		i==18&&j==8||i==18&&j==9||i==18&&j==10||i==18&&j==11||i==18&&j==12||i==18&&j==13||i==18&&j==14||i==18&&j==15||i==18&&j==16||i==18&&j==17||i==18&&j==21||i==18&&j==22||i==18&&j==23||i==18&&j==24||i==18&&j==25||i==18&&j==26||
		i==19&&j==8||i==19&&j==9||i==19&&j==10||i==19&&j==11||i==19&&j==12||i==19&&j==13||i==19&&j==14||i==19&&j==15||i==19&&j==16||i==19&&j==20||i==19&&j==21||i==19&&j==22||i==19&&j==23||i==19&&j==24||i==19&&j==25||
		i==20&&j==8||i==20&&j==9||i==20&&j==10||i==20&&j==11||i==20&&j==12||i==20&&j==13||i==20&&j==14||i==20&&j==15||i==20&&j==16||i==20&&j==19||i==20&&j==20||i==20&&j==21||i==20&&j==22||i==20&&j==23||i==20&&j==24||
		i==21&&j==8||i==21&&j==9||i==21&&j==10||i==21&&j==11||i==21&&j==12||i==21&&j==13||i==21&&j==14||i==21&&j==15||i==21&&j==16||i==21&&j==19||i==21&&j==20||i==21&&j==21||i==21&&j==22||i==21&&j==23||i==21&&j==29||i==21&&j==30||
		i==22&&j==8||i==22&&j==9||i==22&&j==10||i==22&&j==11||i==22&&j==12||i==22&&j==13||i==22&&j==14||i==22&&j==15||i==22&&j==16||i==22&&j==27||i==22&&j==28||i==22&&j==29||i==22&&j==30||
		i==23&&j==8||i==23&&j==9||i==23&&j==10||i==23&&j==11||i==23&&j==12||i==23&&j==13||i==23&&j==14||i==23&&j==15||i==23&&j==16||i==23&&j==25||i==23&&j==26||i==23&&j==27||i==23&&j==28||i==23&&j==29||i==23&&j==30||
		i==24&&j==8||i==24&&j==9||i==24&&j==10||i==24&&j==11||i==24&&j==12||i==24&&j==13||i==24&&j==14||i==24&&j==15||i==24&&j==16||i==24&&j==23||i==24&&j==24||i==24&&j==25||i==24&&j==26||i==24&&j==27||i==24&&j==28||i==24&&j==33||i==24&&j==34||
		i==25&&j==11||i==25&&j==12||i==25&&j==13||i==25&&j==14||i==25&&j==15||i==25&&j==16||i==25&&j==21||i==25&&j==22||i==25&&j==23||i==25&&j==24||i==25&&j==25||i==25&&j==26||i==25&&j==31||i==25&&j==32||i==25&&j==33||i==25&&j==34||
		i==26&&j==14||i==26&&j==15||i==26&&j==16||i==26&&j==19||i==26&&j==20||i==26&&j==21||i==26&&j==22||i==26&&j==23||i==26&&j==24||i==26&&j==29||i==26&&j==30||i==26&&j==31||i==26&&j==32||i==26&&j==33||i==26&&j==34||i==26&&j==40||
		i==27&&j==19||i==27&&j==20||i==27&&j==21||i==27&&j==22||i==27&&j==31||i==27&&j==32||i==27&&j==27||i==27&&j==28||i==27&&j==29||i==27&&j==30||i==27&&j==38||i==27&&j==39||i==27&&j==40||
		i==28&&j==19||i==28&&j==20||i==28&&j==25||i==28&&j==26||i==28&&j==27||i==28&&j==28||i==28&&j==29||i==28&&j==30||i==28&&j==36||i==28&&j==37||i==28&&j==38||i==28&&j==39||i==28&&j==40||
		i==29&&j==1||i==29&&j==2||i==29&&j==3||i==29&&j==4||i==29&&j==5||i==29&&j==23||i==29&&j==24||i==29&&j==25||i==29&&j==26||i==29&&j==27||i==29&&j==28||i==29&&j==34||i==29&&j==35||i==29&&j==36||i==29&&j==37||i==29&&j==38||i==29&&j==39||i==29&&j==40||
		i==30&&j==1||i==30&&j==2||i==30&&j==3||i==30&&j==4||i==30&&j==5||i==30&&j==6||i==30&&j==7||i==30&&j==8||i==30&&j==9||i==30&&j==10||i==30&&j==11||i==30&&j==23||i==30&&j==24||i==30&&j==25||i==30&&j==26||i==30&&j==32||i==30&&j==33||i==30&&j==34||i==30&&j==35||i==30&&j==36||i==30&&j==37||i==30&&j==38||i==30&&j==39||
		i==31&&j==1||i==31&&j==2||i==31&&j==3||i==31&&j==4||i==31&&j==5||i==31&&j==6||i==31&&j==7||i==31&&j==8||i==31&&j==9||i==31&&j==10||i==31&&j==11||i==31&&j==12||i==31&&j==13||i==31&&j==14||i==31&&j==15||i==31&&j==16||i==31&&j==17||i==31&&j==18||i==31&&j==19||i==31&&j==20||i==31&&j==23||i==31&&j==24||i==31&&j==30||i==31&&j==31||i==31&&j==32||i==31&&j==33||i==31&&j==34||i==31&&j==35||i==31&&j==36||i==31&&j==37||
		i==32&&j==1||i==32&&j==2||i==32&&j==3||i==32&&j==4||i==32&&j==5||i==32&&j==6||i==32&&j==7||i==32&&j==8||i==32&&j==9||i==32&&j==10||i==32&&j==11||i==32&&j==12||i==32&&j==13||i==32&&j==14||i==32&&j==15||i==32&&j==16||i==32&&j==17||i==32&&j==18||i==32&&j==19||i==32&&j==20||i==32&&j==21||i==32&&j==28||i==32&&j==28|i==32&&j==29||i==32&&j==30||i==32&&j==31||i==32&&j==32||i==32&&j==33||i==32&&j==34||i==32&&j==35||
		i==33&&j==1||i==33&&j==2||i==33&&j==3||i==33&&j==4||i==33&&j==5||i==33&&j==6||i==33&&j==7||i==33&&j==8||i==33&&j==9||i==33&&j==10||i==33&&j==11||i==33&&j==12||i==33&&j==13||i==33&&j==14||i==33&&j==15||i==33&&j==16||i==33&&j==17||i==33&&j==18||i==33&&j==19||i==33&&j==20||i==33&&j==26||i==33&&j==27||i==33&&j==28||i==33&&j==29||i==33&&j==30||i==33&&j==31||i==33&&j==32||i==33&&j==33||
		i==34&&j==1||i==34&&j==2||i==34&&j==3||i==34&&j==4||i==34&&j==5||i==34&&j==6||i==34&&j==7||i==34&&j==8||i==34&&j==9||i==34&&j==10||i==34&&j==11||i==34&&j==12||i==34&&j==13||i==34&&j==24||i==34&&j==25||i==34&&j==26||i==34&&j==27||i==34&&j==28||i==34&&j==29||i==34&&j==30||i==34&&j==31||
		i==35&&j==1||i==35&&j==2||i==35&&j==3||i==35&&j==4||i==35&&j==5||i==35&&j==6||i==35&&j==7||i==35&&j==8||i==35&&j==9||i==35&&j==10||i==35&&j==11||i==35&&j==12||i==35&&j==13||i==35&&j==22||i==35&&j==23||i==35&&j==24||i==35&&j==25||i==35&&j==26||i==35&&j==27||i==35&&j==28||i==35&&j==29||
		i==36&&j==1||i==36&&j==2||i==36&&j==3||i==36&&j==4||i==36&&j==5||i==36&&j==6||i==36&&j==7||i==36&&j==8||i==36&&j==9||i==36&&j==10||i==36&&j==11||i==36&&j==12||i==36&&j==13||i==36&&j==14||i==36&&j==15||i==36&&j==16||i==36&&j==17||i==36&&j==18||i==36&&j==19||i==36&&j==20||i==36&&j==21||i==36&&j==22||i==36&&j==23||i==36&&j==24||i==36&&j==25||i==36&&j==26||i==36&&j==27||
		i==37&&j==1||i==37&&j==2||i==37&&j==3||i==37&&j==4||i==37&&j==5||i==37&&j==6||i==37&&j==7||i==37&&j==8||i==37&&j==9||i==37&&j==10||i==37&&j==11||i==37&&j==12||i==37&&j==13||i==37&&j==14||i==37&&j==15||i==37&&j==16||i==37&&j==17||i==37&&j==18||i==37&&j==19||i==37&&j==20||i==37&&j==21||i==37&&j==22||i==37&&j==23||
		i==38&&j==1||i==38&&j==2||i==38&&j==5||i==38&&j==6||i==38&&j==7||i==38&&j==8||i==38&&j==9||i==38&&j==10||i==38&&j==11||i==38&&j==12||i==38&&j==13||i==38&&j==14||i==38&&j==15||i==38&&j==16||i==38&&j==17||i==38&&j==18||i==38&&j==19||i==38&&j==20||i==38&&j==21||i==38&&j==22||i==38&&j==23||
		i==39&&j==1||i==39&&j==2||i==39&&j==5||i==39&&j==10||i==39&&j==11||i==39&&j==12||i==39&&j==13||i==39&&j==14||i==39&&j==15||i==39&&j==16||i==39&&j==17||i==39&&j==18||i==39&&j==19||i==39&&j==20||i==39&&j==21||
		i==40&&j==1||i==40&&j==2||i==40&&j==3||i==40&&j==4||i==40&&j==5||i==40&&j==14||i==40&&j==15||i==40&&j==16||i==40&&j==17||i==40&&j==18||i==40&&j==19)
		
		printf("$");
		
		else {
			printf(" ");
		}
			
		
		}
		
		printf("\n");
		printf("\t\t\t\t\t\t\t\t");
		}
			
			printf("\n\n");
			printf("\t\t\t\t\t\t");
			for(i=1;i<=8;i++){
			for(j=35;j<=103;j++){
			

			   if(i==1&&j==1||i==1&&j==7||i==1&&j==8||i==1&&j==13||i==1&&j==14||i==1&&j==15||i==1&&j==16||i==1&&j==19||i==1&&j==20||i==1&&j==21||i==1&&j==28||i==1&&j==31||i==1&&j==32||i==1&&j==35||i==1&&j==36||i==1&&j==37||i==1&&j==40||i==1&&j==41||i==1&&j==44||i==1&&j==47||i==1&&j==48||i==1&&j==49||i==1&&j==52||i==1&&j==59||i==1&&j==60||i==1&&j==65||i==1&&j==66||i==1&&j==69||i==1&&j==70||i==1&&j==71||i==1&&j==74||i==1&&j==80||i==1&&j==81||i==1&&j==82||i==1&&j==83||i==1&&j==86||i==1&&j==87||i==1&&j==88||i==1&&j==91||i==1&&j==92||i==1&&j==93||i==1&&j==96||i==1&&j==99||i==1&&j==100||i==1&&j==101||
			   i==2&&j==7||i==2&&j==14||i==2&&j==15||i==2&&j==14||i==2&&j==15||i==2&&j==20||i==2&&j==21||i==2&&j==28||i==2&&j==31||i==2&&j==32||i==2&&j==35||i==2&&j==36||i==2&&j==37||i==2&&j==40||i==2&&j==41||i==2&&j==44||i==2&&j==47||i==2&&j==48||i==2&&j==49||i==2&&j==52||i==2&&j==59||i==2&&j==66||i==2&&j==69||i==2&&j==70||i==2&&j==71||i==2&&j==74||i==2&&j==81||i==2&&j==82||i==2&&j==87||i==2&&j==88||i==2&&j==91||i==2&&j==92||i==2&&j==93||i==2&&j==96||i==2&&j==99||i==2&&j==100||i==2&&j==103||
			   i==3&&j==3||i==3&&j==4||i==3&&j==5||i==3&&j==6||i==3&&j==7||i==3&&j==10||i==3&&j==11||i==3&&j==14||i==3&&j==17||i==3&&j==18||i==3&&j==21||i==3&&j==22||i==3&&j==23||i==3&&j==24||i==3&&j==27||i==3&&j==28||i==3&&j==31||i==3&&j==32||i==3&&j==35||i==3&&j==36||i==3&&j==37||i==3&&j==40||i==3&&j==41||i==3&&j==44||i==3&&j==48||i==3&&j==49||i==3&&j==52||i==3&&j==53||i==3&&j==54||i==3&&j==57||i==3&&j==58||i==3&&j==59||i==3&&j==62||i==3&&j==63||i==3&&j==66||i==3&&j==70||i==3&&j==71||i==3&&j==74||i==3&&j==77||i==3&&j==78||i==3&&j==81||i==3&&j==84||i==3&&j==85||i==3&&j==88||i==3&&j==92||i==3&&j==93||i==3&j==96||i==3&&j==99||i==3&&j==102||i==3&&j==103||
			   i==4&&j==3||i==4&&j==4||i==4&&j==5||i==4&&j==6||i==4&&j==7||i==4&&j==14||i==4&&j==21||i==4&&j==22||i==4&&j==23||i==4&&j==26||i==4&&j==27||i==4&&j==28||i==4&&j==29||i==4&&j==34||i==4&&j==35||i==4&&j==36||i==4&&j==37||i==4&&j==40||i==4&&j==41||i==4&&j==44||i==4&&j==49||i==4&&j==52||i==4&&j==53||i==4&&j==54||i==4&&j==57||i==4&&j==58||i==4&&j==59||i==4&&j==62||i==4&&j==63||i==4&&j==66||i==4&&j==71||i==4&&j==74||i==4&&j==77||i==4&&j==78||i==4&&j==81||i==4&&j==84||i==4&&j==85||i==4&&j==88||i==4&&j==92||i==4&&j==93||i==4&&j==96||i==4&&j==99||i==4&&j==102||i==4&&j==103||
			   i==5&&j==3||i==5&&j==4||i==5&&j==5||i==5&&j==6||i==5&&j==7||i==5&&j==13||i==5&&j==14||i==5&&j==21||i==5&&j==22||i==5&&j==25||i==5&&j==26||i==5&&j==27||i==5&&j==28||i==5&&j==29||i==5&&j==34||i==5&&j==35||i==5&&j==36||i==5&&j==37||i==5&&j==40||i==5&&j==41||i==5&&j==44||i==5&&j==47||i==5&&j==52||i==5&&j==53||i==5&&j==54||i==5&&j==57||i==5&&j==58||i==5&&j==59||i==5&&j==62||i==5&&j==63||i==5&&j==66||i==5&&j==69||i==5&&j==74||i==5&&j==80||i==5&&j==81||i==5&&j==88||i==5&&j==91||i==5&&j==96||i==5&&j==101||i==5&&j==102||i==5&&j==103||
			   i==6&&j==3||i==6&&j==4||i==6&&j==5||i==6&&j==6||i==6&&j==7||i==6&&j==11||i==6&&j==12||i==6&&j==13||i==6&&j==14||i==6&&j==17||i==6&&j==18||i==6&&j==21||i==6&&j==24||i==6&&j==25||i==6&&j==26||i==6&&j==27||i==6&&j==28||i==6&&j==29||i==6&&j==30||i==6&&j==33||i==6&&j==34||i==6&&j==35||i==6&&j==36||i==6&&j==37||i==6&&j==40||i==6&&j==41||i==6&&j==44||i==6&&j==47||i==6&&j==48||i==6&&j==52||i==6&&j==53||i==6&&j==54||i==6&&j==57||i==6&&j==58||i==6&&j==59||i==6&&j==62||i==6&&j==63||i==6&&j==66||i==6&&j==69||i==6&&j==70||i==6&&j==74||i==6&&j==77||i==6&&j==78||i==6&&j==81||i==6&&j==84||i==6&&j==85||i==6&&j==88||i==6&&j==91||i==6&&j==92||i==6&&j==96||i==6&&j==99||i==6&&j==102||i==6&&j==103||
			   i==7&&j==7||i==7&&j==10||i==7&&j==12||i==7&&j==13||i==7&&j==14||i==7&&j==17||i==7&&j==18||i==7&&j==21||i==7&&j==28||i==7&&j==29||i==7&&j==30||i==7&&j==33||i==7&&j==34||i==7&&j==35||i==7&&j==36||i==7&&j==37||i==7&&j==44||i==7&&j==47||i==7&&j==48||i==7&&j==49||i==7&&j==52||i==7&&j==59||i==7&&j==66||i==7&&j==69||i==7&&j==70||i==7&&j==71||i==7&&j==74||i==7&&j==81||i==7&&j==84||i==7&&j==85||i==7&&j==88||i==7&&j==91||i==7&&j==92||i==7&&j==93||i==7&&j==96||i==7&&j==99||i==7&&j==100||i==7&&j==103||
			   i==8&&j==1||i==8&&j==7||i==8&&j==10||i==8&&j==11||i==8&&j==13||i==8&&j==14||i==8&&j==17||i==8&&j==18||i==8&&j==21||i==8&&j==28||i==8&&j==29||i==8&&j==30||i==8&&j==33||i==8&&j==34||i==8&&j==35||i==8&&j==36||i==8&&j==37||i==8&&j==38||i==8&&j==43||i==8&&j==44||i==8&&j==47||i==8&&j==48||i==8&&j==49||i==8&&j==52||i==8&&j==59||i==8&&j==60||i==8&&j==65||i==8&&j==66||i==8&&j==69||i==8&&j==70||i==8&&j==71||i==8&&j==74||i==8&&j==80||i==8&&j==81||i==8&&j==84||i==8&&j==85||i==8&&j==88||i==8&&j==91||i==8&&j==92||i==8&&j==93||i==8&&j==96||i==8&&j==99||i==8&&j==100||i==8&&j==101||
			   i==1&&j==75||i==2&&j==75||i==3&&j==75||i==4&&j==75||i==4&&j==75||i==5&&j==75||i==6&&j==75||i==7&&j==75||i==8&&j==75)
			        {
			   printf(" ");
						
			   continue;
					}
					load(1000000);
					printf("\xB2");
					}
		
					printf("\n");
						printf("\t\t\t\t\t\t");
					}
					
					
					
					
					
//									system("color 3");
					
	printf("\n\n\n\n\t\t\t\xB2 CONTINUE 1 \xB1 ANY NUMBER TO EXIT \xB2 ENTER: ");
	scanf("%d",&i);
	printf("\t\t\tloading");
	
			switch(i){
			
			case 1:
			for(i=0;i<=20;i++){//loading
			load(10000000);//loading
			printf(".");
							  }
												
			ICC( );
			break;
			
			default : 
		
			for(i=0;i<=20;i++){//loading
			load(10000000);//loading
			printf(".");
						      }
			Exit();	
							  }
			//i++;
			//	}while(i<1);
			
				
	getch();
//	ICC(add,c);

return 0;
}

//open new account**************************************************************************************************************************

int openAccount(){
			
		FILE *fstudent;
		fstudent=fopen("customer.txt","w");
		
    	system("cls");
		int c,co;
		int i=0;
		
		
					 	
						system("cls");
		
					    
					    printf("\n\n\t\t\t WARNING.............\n\n\n");
					    printf("\t\t\xB2\xB2\xB2\xB2 USE UNDERSCORE INSTEAD OF SPACE\xB2\xB2\xB2\xB2\n");
						printf("\n\n\tENTER DETAILS");
						
						//input customer details
						
						system("color E");
						printf("\n\n\n\tENTER FULL  NAME :");
						scanf("%s",&add.name);
								
							printf("\tENTER TO DAY DATE:");
							scanf(" %s",&add.DATE);
							
						printf("\tENTER ADDRESS:");
						scanf(" %s",&add.ADDRESS);
									
							printf("\tENTER YOU CITY:");
							scanf(" %s",&add.CITY);
						
						printf("\tENTER ID NUMBER:");
						scanf(" %s",&add.ID);
						
							printf("\tENTER YOUR AGE:");
							scanf("%d",&add.AGE);
						
						printf("\tENTER PHONE NUMBER:");
						scanf("%d",&add.PHONE_NUMBER);
				
							printf("\tENTER AMOUNT TO THE ACCOUNT OPEN:Rs.");
							scanf("%d",&add.AMOUNT);
						
		printf("\n\n\t\tTYPE OF ACCOUNT\n\t\xB2 .SAVING::!!! \xB2\n\t\xB2 .CURRENT::!!! \xB1  \n\t\xB2 .FIXED::!!! \xB1");
	
		printf("\n\n\t %s ENTER ACCOUNT TYPE:",add.name);
		scanf("%s",add.acc_type);
		
		printf("\n\tENTER ACCOUNT NUMBER:");
		scanf("%d",&add.ACC_NUMBER);
		

		fprintf(fstudent,"%s,%s,%s,%s,%s,%s,%d,%d,%d,%s,%d",add.name,add.DATE,add.ADDRESS,add.ADDRESS,add.CITY,add.ID,add.AGE,add.PHONE_NUMBER,add.AMOUNT,add.acc_type,add.ACC_NUMBER);					
		fclose(fstudent);
		printf("\nACCOUNT CREATED SUCCESSFULLY");
									 	
			for(i=1;i<10;i++)
			{
			load(10000000);
			printf(".");
			 }

					do{
						
					printf("\n\n\t\xB1.1.MAIN MENU \n\t\xB1.2.DO THIS AGAIN\n\t\xB1 ANY NUMBER TO EXIT\n\nENTER YOUR CHOICE:");
					scanf("%d",&co);
					
					switch(co){
					case 1:
					for(i=1;i<10;i++){
					load(10000000);
					printf(".");
									 }	
					menu();		break;
								
					case 2:
					for(i=1;i<10;i++){
					load(10000000);
					printf(".");
									 }
					openAccount();		break;
									
		
					default:
					for(i=1;i<10;i++){
					load(10000000);
					printf(".");
									 }	
				    Exit();
			        }
					i++;
					}while(i<3);
					

}

//deposit********************************************************************************************************************************

int deposit(){

			FILE *dpa,*newd;
			dpa=fopen("customer.txt","r");
			newd=fopen("updat.txt","w");
			system("cls");		
			system("COLOR 06");
			
			printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\xB0\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0 TRANSACTION \xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\n\n");
			printf("\t\t\t\t\t\tENTER YOUR ACCOUNT NUMBER:");
    		scanf("%d",&acc);
    	while(fscanf(dpa,"%s/%s/%s/%s/%s/%s/%d/%d/%d/%s/%d",&add.name,&add.DATE,&add.ADDRESS,&add.ADDRESS,&add.CITY,&add.ID,&add.AGE,&add.PHONE_NUMBER,&add.AMOUNT,&add.acc_type,&add.ACC_NUMBER)!=EOF);
    		{
			
  
			if(add.ACC_NUMBER==acc){
			if(strcmpi(add.acc_type,"fixed")==0){
						
			printf("\t\t\t\t\t\tYOU CANNOT DEPOSIT THIS IS 1 YEAR FIXED DEPOSIT ACCOUNT... ");	
							printf("\n\nMAIN MENU'1'\xB1 EXIT 0:");
							scanf("%d",&co);
							if(co==1)
								menu();
							if(co==0)
							Exit();
									
												   }				
				
				printf("\n\t\t\t\t\t\tNAME:%s\n\n",add.name);
				printf("\t\t\t\t\t\tENTER DEPOSIT AMOUNT:");
    			scanf("%d",&dp);
    			
				add.AMOUNT+=dp;	
    			set=1;
    			printf("\n\t\t\t\t\t\t\tTRANSACTION SUCCESSFULLY");
						
				for(i=1;i<=5;i++){
    			load(10000000);
    			printf(".");
								 }
				}
			}
				if(set==0)
				printf("\t\t\t\t\t\tNOT FOUND!");
				
	fprintf(newd,"%s,%s,%s,%s,%s,%s,%d,%d,%d,%s,%d",add.name,add.DATE,add.ADDRESS,add.ADDRESS,add.CITY,add.ID,add.AGE,add.PHONE_NUMBER,add.AMOUNT,add.acc_type,add.ACC_NUMBER);					
		fclose(dpa);
		fclose(newd);
		remove("D:/bank details/customer.txt");
		rename("D:/bank details/updat.txt","D:/bank details/customer.txt");
			printf("\n\n\t\t\t\tMAIN MENU'1', ANY NUMBER TO EXIT PROGRAM PRESS:");
			scanf("%d",&co);
	
			switch(co)
			{
				case 1:
				for(i=1;i<=5;i++){
    			load(10000000);
    			printf(".");
								 }
				menu();	break;
			
				default:Exit();
			
			}

			getch();
			return 0;
}
//withdraw***********************************************************************************************************************************
 
int withdraw(){
	
int set=0;
			system("cls");
			system("COLOR 03");
			printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\xB0\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0 TRANSACTION \xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\n\n");
			printf("\n\n\t\t\t\t\t\t\tENTER YOUR ACCOUNT NUMBER:");
		    scanf("%d",&acc);

		
			
		if(add.ACC_NUMBER==acc){
		if(strcmpi(add.acc_type,"fixed")==0){
						
		printf("\t\t\t\t\t\tYOU CANNOT WITHDRAW THIS IS 1 YEAR FIXED DEPOSIT ACCOUNT... \n");
							
			printf("\n\nMAIN MENU'1'\xB1 ANY NUMBER TO EXIT:");
			scanf("%d",&co);
							if(co==1)
							menu();
							if(co==0)
							Exit();
								
					}
			printf("\n\n\n\t\t\t\t\tNAME:%s\n\n",add.name);
			printf("\t\t\t\t\tBALANCE:%d\n\n",add.AMOUNT);
			
			printf("\t\t\t\t\t\t\t\tEnter the Withdraw Amount: ");
    		scanf("%d",&w);			
				if(add.AMOUNT>w)	{
						add.AMOUNT-=w;
						printf("\n\t\t\t\t\t\t\t\tTransaction Successfully");
						for(i=1;i<=5;i++){
    						load(10000000);
    						printf(".");
							}	
				}else{
					printf("\t\t\t\t\t\t\t\tYour Balance dosent have enough cash..");
				}
									}
						
						printf("\n\t\t\t\t\t\t:::::::::::::::::::::::::::::\n");	
					
						if(set==0) 
						printf("\t\t\t\t\t\t\t\tNOT FOUND!");
					
						printf("\n\n\t\t\t\t\t1.MAIN MENU\tANY NUMBER TO EXIT :");
						scanf("%d",&co);
	
						switch(co){
							case 1:
							for(i=1;i<=5;i++){
    						load(10000000);
    						printf(".");
							}
							menu();
							break;
						
							case 2:
							for(i=1;i<=5;i++){
    						load(10000000);
    						printf(".");
								 }	
							break;
						
							default: Exit();
							 	}
	
	
	
	
	getch();
	return 0;
}
//check balance****************************************************************************************************************************

void checkBalance(){//check coustomer details
        
		system("cls");
    	system("COLOR 8");
    	printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\xB0\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0 COUSTOMER DETAILS MENU \xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\n\n");

    	printf("\t\t\t\t\t\t\t\t\t\t1.CHECK DETAILS\n\t\t\t\t\t\t\t\t\t\t2.CHECK INTEREST\n\t\t\t\t\t\t\t\t\t\t3.Rs.2000 LESS THAN COUSTOMERS\n\t\t\t\t\t\t\t\t\t\t4.BONUS COSTOMERS\n\t\t\t\t\t\t\t\t\t\t5.MAIN MENU\n\t\t\t\t\t\t\t\t\t\tANY NUMBER TO EXIT PROGRAM \n");
    	printf("\n \t\t\t\t\t\t\t\t\t\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB2\xB2\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0");
    	printf("\n\n\t\t\t\t\t\t\t\tENTER YOUR CHOICE:");
		scanf("%d",&w);
    	
	    	switch(w){
	    		
	    		case 1: cousD();	     break;
				case 2: CousInterest(); break;
				case 3: CousLess(); 	 break;
				case 4:Bonus();	   	 break;
//				case 5:CoustomerList(); break;
				case 5:menu();			 break;
//				case 7:						 break;
				
				default :Exit();
					
														
															
				   	 }
  	
	getch();
}
//coustemor details serch*******************************************************************************************************************

void cousD(){
		
				int set=0;
				system("cls");
				printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\xB0\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0 COUSTOMER DETAILS \xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\n\n");   	
    			printf("\t\t\t\t\t\tENTER YOUR ACCOUNT NUMBER:");
    			scanf("%d",&acc);
    			printf("\n\n\t\t\t\t\t\t:::::::::::::::::::::::::::\n\n");
						
				
				if(add.ACC_NUMBER==acc){
								
				printf("\t\t\t\t\t\tAccount type:%s\n",add.acc_type);
				printf("\t\t\t\t\t\tName:%s\n",add.name);
				printf("\t\t\t\t\t\tDate:%s\n",add.DATE);
				printf("\t\t\t\t\t\tID No:%s\n",add.ID);
				printf("\t\t\t\t\t\tAddress:%s\n",add.ADDRESS);
				printf("\t\t\t\t\t\tCity:%s\n",add.CITY);
				printf("\t\t\t\t\t\tAge:%d\n",add.AGE);
				printf("\t\t\t\t\t\tPhone No:%d\n",add.PHONE_NUMBER);
				printf("\t\t\t\t\t\tAccount No:%d\n",add. ACC_NUMBER);
				printf("\t\t\t\t\t\tAmount:%d\n",add.AMOUNT);
				set=1;
										  }
									
								 
					if(set==0){
					printf("\t\t\t\t\t\tCANNOT FOUND..! TRY AGAIN..");
					printf("\n\n\t\t\t\t\t\t:::::::::::::::::::::::::::::::::\n\n\n\n\n");
							  }
										
					printf("\n\n\t\t\t\t\t\t\xB1 1.MAIN MENU\t\xB1 2.CHECK DETAILS\t\xB1 ANY NUMBER TO \tENTER : ");
					scanf("%d",&co);

		switch(co){
		
		case 1:menu();			break;
		case 2:checkBalance();	break;
//		case 3:						break;
		default: Exit();
		
				  }
													
										
}
//coustemor interest***********************************************************************************************************************

void CousInterest(){
	system("cls");
	system("COLOR 03");
	int i=0	;   
			printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\xB0\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0 TYPE OF ACCOUNT \xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\n\n"); 
			printf("\n\n\t\t\t\t\t\t\t\t\t\xB2.1.SAVING\n\t\t\t\t\t\t\t\t\t\xB2.2.CURRENT\n\t\t\t\t\t\t\t\t\t\xB2.3.FIXED1(FOR 1 YEAR)\n\n\t\t\t\t\t\tENTER YOUR CHOICE:");
			scanf("%d",&w);
		
	switch(w){
			
	case 1:
	system("cls");
	printf("\n\n\n\n\n\t\t\t\t\t\t\xB0\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0 INTEREST OF EACH SAVING ACCOUNT PER MONTH  \xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\n\n");
	printf("\n\n\n\t\t\t\t\t NO\t\tAC.NO\t\tAMOUNT\t\t\tINTEREST\tNAME\n\n");
					
	
	if(strcmpi(add.acc_type,"saving")==0){
	printf("\t\t\t\t\t %d\t\t",i+1);
										
	add.INTEREST=(float)add.AMOUNT*0.75/100;
										
										
			
						
				printf("%d\t\t",add.ACC_NUMBER);
				printf("%d\t\t",add.AMOUNT);
				printf("%.2f\t\t",add.INTEREST);
				printf("%s\t",add.name);
											
				printf("\n");
											}
					break;	
	case 2: 
	system("cls");
	printf("\n\n\t\t\t\t\t\txB2 YOU WILL GET NO INTEREST! \xB2");	break;
				
	case 3:
	system("cls");
	printf("\n\n\t\t\t\t\t\t\xB0\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0 INTEREST OF 1 YEAR FIXED DEPOSIT ACCOUNT FOR ANNUALLY  \xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\n\n\n\n");
	printf("\t\t\t\t NO\t\tAC.NO\t\tAMOUNT\tINTEREST\t\tNAME\n\n");
						
					
	
	if(strcmpi(add.acc_type,"fixed")==0){
	
	add.INTEREST=(float)add.AMOUNT*12/100;
	printf("\t\t\t\t %d\t\t",i+1);
										
							
							printf("  %d\t\t",add.ACC_NUMBER);
							printf("  %d\t\t",add.AMOUNT);
							printf(" %.2f\t\t",add.INTEREST);
							printf("%s",add.name);
											
							printf("\n");
							}
					break;	
					 default :Exit();
			}
		
	printf("\n\n\n\n\n\t\t\t\t\t\t\xB2 MAIN MENU'1' \xB2 CHECK DETAILS'2' \xB2 ANY NUMBER TO EXIT\tENTER : ");
	scanf("%d",&co);
	
	switch(co){
	
	case 1:menu();			break;
	case 2:checkBalance(); break;
//	case 3:						break;
	default:Exit();

					
					}	
								
}
//*****************************************************************************************************************************************

void CousLess(){

			    	system("cls");
						system("COLOR 03");
	printf("\n\n\t\t\t\t\t\t\xB0\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0 2000 LESS THAN COUSTOMERS  \xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\n\n\n\n");

						int set=0;
						printf("\n\t\t\t\t NO\tAC.NO\tAMOUNT\tAC.TYPE\tNAME\n\n\n");
			
					
							
							if(add.AMOUNT<2000){
							
							for(j=0;j<1;j++){
							printf("\t\t\t\t %d\t",i+1);	
							printf(" %d\t",add.ACC_NUMBER);
							printf(" %d\t",add.AMOUNT);
							printf("%s\t",add.acc_type);
							printf("%s\t",add.name);
							set=1;
						}
						printf("\n");
						}
						
					  	if(set==0)
						printf("\t\t\t\t\t\tCANNOT FOUND 2000 LESS THEN COUSTOMERS");
									
	printf("\n\n\n\n\n\t\t\t\t\t\t\xB2.1.MAIN MENU \xB2.2.CHECK DETAILS \xB2 ANY NUMBER TO EXIT \tENTER : ");
	scanf("%d",&co);
		
	switch(co){
	case 1:menu();			break;
	case 2:checkBalance(); break;
//	case 3:  					break;
	default:Exit(); 
	
			}
						
}
//coustemer bonus***********************************************************************************************************************************

void Bonus(){
	int set=0;
	system("cls");
	system("COLOR 04");
	printf("\n\n\t\t\t\t\t\t\xB0\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0 BONUS COUSTOMERS  \xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\n\n\n\n");

	printf("\n\t\t\t\tNO \t     ACC__NO \t AMMOUNT \t BONUS \t CUST__NAME");

	
	if(add. AMOUNT>100000&&strcmpi(add.acc_type,"saving")==0){
			add .coBonus=add.AMOUNT*1/100;
			printf("\n\t\t\t\t%d \t\t %d \t %d \t %d \t %s ",i+1, add.ACC_NUMBER,add. AMOUNT,add.coBonus, add. name);
			set=1;	
	}
	
		if(set==0)
		printf("\n\t\t\t\t\t\tYOU HAVN'T BONUS");
	
	
							printf("\n\n\n\n\n\t\t\t\t\t\t\xB2.1.MAIN MENU\t\xB2.2.CHECK DETAILS\t\xB2.ANY NUMBER TO EXIT\tENTER : ");
							scanf("%d",&co);
		
							switch(co){
							case 1:menu();break;
							case 2:checkBalance();break;
//							case 3:break;
							default: Exit();
							}


}
//remove***********************************************************************************************************************************

int Remove(){
	
	/*	system("cls");
		system("COLOR 04");
		printf("\n\n\t\t\t\t\t\t\xB0\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0 ROMOVE COUSTOMERS  \xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\n\n\n\n");

			int set=0;
			printf("\n\n\n\t\t\t\t\t\tENTER ROMOVE ACCOUNT NUMBER:");
			scanf("%d",&w);
//						for(i=0;i<=5;i++){
//						load(10000000);
//						printf(".");
//							             }
//						printf("\t\t\t\t\t\t.");
						for(i=0;i<c;i++){
						if(add.ACC_NUMBER==w){
						add.ACC_NUMBER=add.ACC_NUMBER;	
						printf("\t\t\t\t\t\tREMOVE SUCCESSFULLY......");
						for(i=0;i<=5;i++){
						load(10000000);
						printf(".");
							}
						set=1;
							}
							}
						if(set==0)
						printf("\t\t\t\t\t\tINVALIDE ! ACCOUNT NUMBER");
					
//					for(i=0;i<c;i++){
//						if(w!=)
//						continue;		
//					}
	*/
					printf("\n\n\t\t\t\t\t\t1.MAIN MENU\tANY NUMBER TO EXIT\tENTER : ");
					scanf("%d",&co);
					
					switch(co){
					case 1:menu();	break;
//					case 2:				break;
					default: Exit();

					}
				
	getch();
	return 0;
}
//******************************************************************************************************************************************
void EditCoustomerD(){
	int k;
	set=0;
	system("cls");
	system("COLOR 02");
	printf(" \n\n\t\t\t\t\t\tENTER YOUR ACCOUNT NUMBER: ");
	scanf("%d",&w);
	
		
		if(add.ACC_NUMBER==w){
		printf("\n\n\t\t\t\t\t\tTHESE CAN BE ONLY UPDATE!");
		printf("\n\n\n\t\t\t\t\t\t1.FULL NAME\n\t\t\t\t\t\t2.ADDRESS\n\t\t\t\t\t\t3.PHONE NUMBER\n\t\t\t\t\t\t4.AGE\n\t\t\t\t\t\t5.ENTER ANY NUMBER TO MENU\n\n\t\t\t\t\t\tENTER YOUR CHOICE:");
		scanf("%d",&k);
			set=1;
			switch(k){
							
				case 1:
					system("cls");
				printf("\n\n\t\t\t\t\t\tPREVIOUS NAME:%s",add.name);
				printf("\n\n\t\t\t\t\t\tENTER UPDATE FULL NAME:");
				scanf("%s",&add.name);	
				break;	
							
				case 2:
					system("cls");
				printf("\n\n\t\t\t\t\t\tPREVIOUS ADDRESS:%s",add.ADDRESS);
				printf("\n\n\t\t\t\t\t\tENTER UPDATE ADDRESS:");
				scanf(" %s",&add.ADDRESS);
				break;
							
				case 3:
					system("cls");
				printf("\n\n\t\t\t\t\t\tPREVIOUS PHONE NUMBER:%d",add.PHONE_NUMBER);
				printf("\n\n\t\t\t\t\t\tENTER UPDATE PHONE NUMBER:");
				scanf("%d",&add.PHONE_NUMBER);
				break;
							
				case 4:
					system("cls");
				printf("\n\n\t\t\t\t\t\tPREVIOUS AGE:%d",add.AGE);
				printf("\n\n\t\t\t\t\t\tENTER UPDATE AGE:");
				scanf("%d",&add.AGE);
				break;
				default:menu();
							
						}	
					
						} 
			
						
					if(set==0)
						("\t\t\t\t\t\tINVALIDE ! ACCOUNT NUMBER");
	
		printf("\n\n\t\t\t\t\t\t1.MAIN\t2.Do This again\t3.Any number to Exit\t\tEnter : ");
		scanf("%d",&co);
	
		switch(co){
		case 1:menu(); 			break;
		case 2:EditCoustomerD();	break;
//		case 3:							break;			
		default: Exit();break;
				
				}
		
}
//*************************************************************************************************************************************************
int EmployeeDetails(){

	system("cls");
	system("color e");
		int user;
			printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\xB0\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0 EMPLOYEE MENU \xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\n\n");
			printf("\n\t\t\t\t\t\t\t\t\t1.ENTER EMPOYEES DETAILS\n\t\t\t\t\t\t\t\t\t2.CHECK EMPLOYEES DETAILS\n\t\t\t\t\t\t\t\t\t3.EMPLOYEES BONUS\n\t\t\t\t\t\t\t\t\t4.REMOVE EMPLOYEES\n\t\t\t\t\t\t\t\t\t5.MAIN MENU\n\t\t\t\t\t\t\t\t\tANY NUMBER TO EXIT PROGRAM\n\n");
			printf("\t\t\t\t\t\t\t\t\xB0\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB0\xB1\xB0\xB1\xB0\xB1:\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\n\n");
			printf("\t\t\t\t\t\tENTER YOUR CHOICE: ");
			scanf("%d",&user);
					
			for(i=0;i<=5;i++)
			{
			load(10000000);
			printf(".");
			}
				
			switch(user){
					
						case 1 :NewEmpDetails();			break;
						case 2:CheckEmpDetails();	break;
						case 3:EmpBonus();			break;
						case 4:EmpRemove();			break;
					//	case 5:EmployeeList();		break;
						case 5:	ICC();				break;
//						case 7:						Exit();
						default : Exit();break;
						
							}
	
	getch();
	return 0;
}
//************************************************************************************************************************************************

void NewEmpDetails(){
	
		int ch,i=0;
    	system("cls");	
 		system("COLOR 6");
		
	
	printf("\t\t\t\t\t\t\xB2\xB2\xB2\xB2 USE UNDERSCORE INSTEAD OF SPACE\xB2\xB2\xB2\xB2\n");
				//input employee details
	
		
				system("cls");
				printf("\n\n\n\t\t\t\t%d.Details",i+1);
				
				printf("\n\n\n\t\t\t\t\t\tEnter Type of Employee :");
				scanf("%s",&emp.em_type);
	
				printf("\n\t\t\t\t\t\tEnter Full Nmae :");
				scanf("%s",&emp.em_name);

				printf("\n\t\t\t\t\t\tEnter join Date:");
				scanf(" %s",&emp.j_date);
		
				printf("\n\t\t\t\t\t\tEnter address :");
				scanf(" %s",&emp.em_address);
	
				printf("\n\t\t\t\t\t\tEnter ID number:");
				scanf(" %s",&emp.em_id);
	
				printf("\n\t\t\t\t\t\tEnter age:");
				scanf("%d",&emp.em_age);
	
				printf("\n\t\t\t\t\t\tEnter Phone Number:");
				scanf("%d",&emp.em_phone);
	
				printf("\n\t\t\t\t\t\tEnter Employee Number:");
				scanf("%d",&emp.em_number);
				
				printf("\n\n\n\t\t\t\t\t\t:::::::::::::::::::::::::::::::::::::\n\n");

	
					printf("\n\n\t\t\t\t\t\t 1.Menu\t2.Employee Menu\tAny number to exit");
					scanf("%d",&co);
	
						switch(co){
					case 1:ICC();						break;
					case 2:EmployeeDetails();	break;
//					case 3:									break;
					default: Exit();break;
						}
				
}
//****************************************************************************************************************************************************

void CheckEmpDetails(){
	
					printf("\n\n\n\t\t\t\t\t\tEnter Account number:");
    				scanf("%d",&acc);
	int set=0;
			
			if(acc==emp.em_number){
			
			printf("\n\n\n\t\t\t\t\t\tType of Employee :%s",emp.em_type);
			printf("\n\t\t\t\t\t\tYour Full Name :%s",emp.em_name);
			printf("\n\t\t\t\t\t\tJoin Date:%s",emp.j_date);	
			printf("\n\t\t\t\t\t\tAddress: %s",emp.em_address);
			printf("\n\t\t\t\t\t\tId number:%s",emp.em_id);
			printf("\n\t\t\t\t\t\tYour Age:%d",emp.em_age);
			printf("\n\t\t\t\t\t\tYour TEL.No:%d",emp.em_phone);
			printf("\n\t\t\t\t\t\tEmployee Number:%d",emp.em_number);
			set=1;
									}
			

			printf("\n\n\t\t\t\t\t\t================================\n\n");
									
		if(set==0)
		printf("\n\t\t\t\t\t\tCannot Found..!");
				printf("\n\n\t\t\t\t\t\t 1.Menu\t2.Employee Menu\tAny number to exit");
				scanf("%d",&co);
				switch(co){
					case 1:ICC();						break;
					case 2:EmployeeDetails();	break;
//					case 3:									break;
					default: Exit();;
					   	  }

}
//***************************************************************************************************************************************************

void EmpBonus(){
	
				int set=0;
				system("cls");
				system("COLOR 03");
	
				printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\xB0\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0 EMPLOYEE BONUS \xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\n\n");
		
				printf("\n\n\t\t\t\t\t\tEnter SAP number:");
				scanf("%d",&w);
				printf("\t\t\t\t\t\tEnter No of Years :");
				scanf("%d",&acc);
				
				printf("\n\n\t\t\t\t\tNo\tSap__No\t\tBonus\tName\n\n");
			
				if(w==emp.em_number){
			
					if(w==emp.em_number&&acc>=5)
					emp.emp_Bonus=20000*25/100;
					else if(w==emp.em_number&&acc>=4)
					emp.emp_Bonus=20000*15/100;
					else if(w==emp.em_number&&acc>=3)
					emp.emp_Bonus=20000*10/100;
					else 
					emp.emp_Bonus=20000*5/100;	
					set=1;
					printf("\t\t\t\t\t%d\t",i+1);	
					printf("%d\t\t",emp.em_number);
					printf("%d\t",emp.emp_Bonus);
					printf("%s\t",emp.em_name);		
							   	 }
								 
					if(set==0)
					printf("\t\t\t\t\t\tCannot Found");
		

					printf("\n\n\t\t\t\t\t\t 1.Menu\n 2.Employee Menu\n Any number to exit");
					scanf("%d",&co);
					switch(co){
					case 1:ICC();						break;
					case 2:EmployeeDetails();	break;
//					case 3:									break;
					default: Exit();break;
						  }
	
	
}
//****************************************************************************************************************************************************************************

void EmpRemove(){
		
		/*	int set=0;
			system("cls");
			system("COLOR 4");
			
				printf("\n\n\n\n\t\t\t\t\t\tEnter Employee Number:");
				scanf("%d",&w);
		
				for(i=0;i<ch;i++){
				if(emp.em_number==w){
				emp.em_number=emp[i+1].em_number;	
						set=1;
				}	
				}
				if(set==0)
				printf("\t\t\t\t\t\tWrong Employee Number..!");
			do{
			
				printf("\n\n \t\t\t\t\t\t1.Menu\n 2.Employee Menu\n Any number to exit");
				scanf("%d",&co);
				switch(co){
					case 1:ICC(add,c);						break;
					case 2:EmployeeDetails(add,c,emp,ch);	break;
//					case 3:									 Exit();
					default: Exit();
							}
						}while(i=1);
}
//**************************************************************************************************************************************************

/*void CoustomerList(struct coustomer add[],int c){
	
			system("cls");
			system("COLOR 03");
			printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\xB0\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0 COUSTOMER LIST \xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\n\n");
			printf("No\tAccount No\tAmount\t  Date\t\t ID No\t\tAge\tCity\tPhone No \tAccount type\tName\t\t\n");
			
			for(i=0;i<c;i++){
				
				printf("%d\t%d\t\t%d\t %s\t%s\t%d\t%s\t%d\t%s\t\t%s\n",i+1,add[i].ACC_NUMBER,add[i].AMOUNT,add[i].DATE,add[i].ID,add[i].AGE,add[i].CITY,add[i].PHONE_NUMBER,add[i].acc_type,add[i].name);
				
					}*/

				printf("\n\n\xB1 MAIN MENU '1'\n\xB1 CHECK DETAILS'2'\n\xB1 EXIT PROGRAM '3'\n\nENTER : ");
				scanf("%d",&co);
	
				switch(co){
					case 1:menu();			break;
					case 2:checkBalance();	break;
					case 3:					 Exit();
					default: printf("INVALIDE\nTRY AGAIN");
					}
	
}
//**************************************************************************************************************************************************

void EmployeeList(){
	
	
	
	system("cls");
	system("COLOR 03");
		printf("\n\nNO TYPE\t\tEMP NO \t\tFULL NAME\t\t\tADDRESS\t\t\tID NUMBER\tAGE\tJOIN DATE\tPHONE NO\n\n");
		
		
			printf("%d %s\t%d\t%s\t%s\t%s\t%d\t%s\t %d\n",i+1,emp.em_type,emp.em_number,emp.em_name,emp.em_address,emp.em_id,emp.em_age,emp.j_date,emp.em_phone);
						
			
			printf("\n\n 1.MENU PRESS \n 2.EMPLOYEE MUNU PRESS\n 3.EXIT PROGRAM PRESS'3'");
			scanf("%d",&co);
			switch(co){
					case 1:menu();						break;
					case 2:EmployeeDetails();	break;
					case 3:								 Exit();
					default: printf("INVALIDE..!!TRY AGAIN");
						}
							
}
int Exit(){
	
	system("cls");
	system("color 3");

	printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\xB0\xB0\xB0\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB0\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0");
	printf("\xB0\xB0\xB0\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB0\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB0\xB0\xB0\n\n");
	printf("\t\t\t\t\t\t\t\xB0\t Union Bank Developed By Isuru\t  \xB1\n\n");
	printf("\t\t\t\t\t\t\t\xB0\xB0\xB0\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB0\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0");
	printf("\xB0\xB0\xB0\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB0\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB0\xB0\xB0\n\n\n\n");


return 0;
}
void Atm(){
	
	int set=0;
			system("cls");
			system("COLOR 03");
			printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\xB0\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0 TRANSACTION \xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\xB1\xB0\n\n");
			printf("\n\n\t\t\t\t\t\t\tEnter your account number:");
		    scanf("%d",&acc);

	
			
		if(add.ACC_NUMBER==acc){
		if(strcmpi(add.acc_type,"fixed")==0){
						
		printf("\t\t\t\t\t\t\t\t Cannot Withdraw thid is 1 year fixed deposit account.. \n");
							
			printf("\n\n\t\t\t\t\t\t\t\t1.Main_Menu \t Any No to exit:");
			scanf("%d",&co);
							if(co==1)
							ICC();
							if(co==0)
							Exit();
								
					}
			
			
			printf("\n\n\n\t\t\t\t\t\t\t\tNAME:%s\n\n",add.name);
			printf("\t\t\t\t\t\t\t\tBalance:%d\n\n",add.AMOUNT);
			set=1;
			printf("\t\t\t\t\t\t\t\tEnter the Withdraw Amount: ");
    		scanf("%d",&w);			
				if(add.AMOUNT>w)	{
						add.AMOUNT-=w;
						printf("\n\t\t\t\t\t\t\t\tTransaction Successfully");
						for(i=1;i<=5;i++){
    						load(10000000);
    						printf(".");
							}	
				}else{
					printf("\t\t\t\t\t\t\t\tYour Balance dosent have enough cash..");
				}
						
    				
					
									}
						
						printf("\n\t\t\t\t\t\t\t\t:::::::::::::::::::::::::::::\n");	
					
						if(set==0) 
						printf("\t\t\t\t\t\t\t\tNot found!");
					
	
					
						printf("\n\n\t\t\t\t\t1.Main_Menu \t Any No to exit:");
						scanf("%d",&co);
	
						switch(co){
							case 1:
							for(i=1;i<=5;i++){
    						load(10000000);
    						printf(".");
							}
							ICC();
							break;
							
							default: Exit();
							 	}
	
	
	
	
	
}
void CDMA( ){
		system("cls");
			int F;		
			const int a=5000;
			const int b=1000;
			const int d=500;
			const int e=100;
			int cd,total=0;	
			int z,x,q,l;
			int sum1,sum2,sum3,sum4,set=0;
				printf("\n\n\n\t\t\t\t\t\t\tEnter account number : ");
				scanf("%d",&cd);
				
				
					if(add.ACC_NUMBER==cd){
						set=1;
						printf("\n\n\t\t\t\t\t\t\tName: %s",add.name);	
						printf("\n\n\t\t\t\t\t\t\t1.Correct\t2.Wrong\t Enter:");
						scanf("%d",&co);
						switch(co){
							case 1:
								printf("\n\n\n\t\t\t\t\t\t\t\t%d\tX\t",a);
								scanf("%d",&z);
							sum1=a*z;
								printf("\n\t\t\t\t\t\t\t\t%d\tX\t",b);
								scanf("%d",&x);
							sum2=b*x;
								printf("\n\t\t\t\t\t\t\t\t%d\tX\t",d);
								scanf("%d",&q);
							sum3=d*q;
								printf("\n\t\t\t\t\t\t\t\t%d\tX\t",e);
								scanf("%d",&l);
							sum4=e*l;
							total=sum1+sum2+sum3+sum4;
							printf("\n\n\t\t\t\t\t\t\tConst value\tQuantity\tTotal\n");
							printf("\n\t\t\t\t\t\t\t\t%d\t  %d\t\t%d",a,z,sum1);
							printf("\n\t\t\t\t\t\t\t\t%d\t  %d\t\t%d",b,x,sum2);
							printf("\n\t\t\t\t\t\t\t\t%d\t  %d\t\t%d",d,q,sum3);
							printf("\n\t\t\t\t\t\t\t\t%d\t  %d\t\t%d",e,l,sum4);
							printf("\n\t\t\t\t\t\t\t\t\t\t    -----------");
							printf("\n\t\t\t\t\t\t\t\t\t\t\t%d",total);
							printf("\n\t\t\t\t\t\t\t\t\t\t    -----------");
						printf("\n\n\n\t\t\t\t\t\t\t1.Correct\t2.Wrong\t Enter:");
						scanf("%d",&F);
						switch(F){
							
						case 1:add.AMOUNT+=total;
						printf("\n\n\t\t\t\t\t\t\tTransaction Successfully\n\n\t\t\t\t\t\t\tThanks For Using Union Bank"); 
						
						printf("\n\n\t\t\t\t\t\t\t1.Main_Menu \t 2.Exit:");
						scanf("%d",&co);
							
							if(co==1){
								ICC();
							}else if(co==2){
								Exit();
							}else{
								printf("Invalide");
							}
					/*	switch(co){
							case 1:
							for(i=1;i<=5;i++){
    						load(10000000);
    						printf(".");
							}
							ICC(add,c);
							break;
							case 2:Exit(); break;
							default: Exit();
							 	}*/
							 	
							break;
							
						case 2:CDMA();			 break;
						default:ICC();			 break;		
								
						}
						
						case 2:CDMA();			 break;
						default:ICC();			 break;	
					
						}	
						
					}
				
			if(set==0)
			printf("Not Found...!");
			
				printf("\n\n\t\t\t\t\t1.Main_Menu\t 2.exit :");
						scanf("%d",&co);
	
						switch(co){
							case 1:
							for(i=1;i<=5;i++){
    						load(10000000);
    						printf(".");
							}
							ICC();
							break;
							case 2:Exit();break;
							default: Exit();break;
							 	}
	
}
