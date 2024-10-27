//Final project
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#define M 100
void loadingBar()
{
    // 0 - black background,
    // A - bright white font
    system("color 0F");
    // Initialize char for printing
    // loading bar
    char a = 177, b = 219;
    
    printf("\n\n\n\n\n");
    printf("\t\t\t$$\\   $$\\ $$\\                   $$\\                         $$\\                 \n");
    Sleep(30);
	printf("\t\t\t$$ | $$  |$$ |                  $$ |                        $$ |                \n");
	Sleep(30);
	printf("\t\t\t$$ |$$  // $$$$$$$\\  $$\\   $$\\ $$$$$$\\    $$$$$$\\  $$\\   $$\\ $$ |  $$\\  $$$$$$\\  \n");
	Sleep(30);
	printf("\t\t\t$$$$$  /  $$  __$$\\ $$ |  $$ |\\_$$  _|  $$  __$$\\ $$ |  $$ |$$ | $$  |$$  __$$\\ \n");
	Sleep(30);
	printf("\t\t\t$$  $$<   $$ |  $$ |$$ |  $$ |  $$ |    $$ |  \\__|$$ |  $$ |$$$$$$  / $$$$$$$$ |\n");
	Sleep(30);
	printf("\t\t\t$$ |\\$$\\  $$ |  $$ |$$ |  $$ |  $$ |$$\\ $$ |      $$ |  $$ |$$  _$$<  $$   ____|\n");
	Sleep(30);
	printf("\t\t\t$$ | \\$$\\ $$ |  $$ |\\$$$$$$  |  \\$$$$  |$$ |      \\$$$$$$  |$$ | \\$$\\ \\$$$$$$$\\ \n");
	Sleep(30);
	printf("\t\t\t\\__|  \\__|\\__|  \\__| \\______/    \\____/ \\__|       \\______/ \\__|  \\__| \\_______|\n");
	Sleep(30);
	printf("\n\n");
	printf("\t\t   /$$   /$$ /$$                     /$$       /$$   /$$ /$$   /$$               /$$      \n");
	Sleep(30);
	printf("\t\t  | $$  | $$|__/                    | $$      | $$  /$$/|__/  | $$              | $$      \n");
	Sleep(30);
	printf("\t\t  | $$  | $$ /$$  /$$$$$$$  /$$$$$$ | $$$$$$$ | $$ /$$/  /$$ /$$$$$$    /$$$$$$ | $$$$$$$ \n");
	Sleep(30);
	printf("\t\t  | $$$$$$$$| $$ /$$_____/ |____  $$| $$__  $$| $$$$$/  | $$|_  $$_/   |____  $$| $$__  $$\n");
	Sleep(30);
	printf("\t\t  | $$__  $$| $$|  $$$$$$   /$$$$$$$| $$  \\ $$| $$  $$  | $$  | $$      /$$$$$$$| $$  \\ $$\n");
	Sleep(30);
	printf("\t\t  | $$  | $$| $$ \\____  $$ /$$__  $$| $$  | $$| $$\\  $$ | $$  | $$ /$$ /$$__  $$| $$  | $$\n");
	Sleep(30);
	printf("\t\t  | $$  | $$| $$ /$$$$$$$/|  $$$$$$$| $$$$$$$/| $$ \\  $$| $$  |  $$$$/|  $$$$$$$| $$$$$$$/\n");
	Sleep(30);
	printf("\t\t  |__/  |__/|__/|_______/  \\_______/|_______/ |__/  \\__/|__/   \\___/   \\_______/|_______/ \n");
	Sleep(30);
    printf("\n\n\n\n\t\t\t\t\tLoading...\n\n");
    printf("\t\t\t\t\t");
    int i;
    // Print initial loading bar
    for ( i = 0; i < 50; i++)
    {
    	printf("%c", a);
	}
    // Set the cursor again starting
    // point of loading bar
    printf("\r");
    printf("\t\t\t\t\t");
    // Print loading bar progress
    for ( i = 0; i < 50; i++)
	 {
        printf("%c", b);
        // Sleep 
        Sleep(15);
     }
}
void CreatingBar()
{
    system("color 0F");
    char a = 177, b = 219;
    printf("\n\n\n\n");
    printf("\n\n\n\n\t\t\t\t\tCreating...\n\n");
    printf("\t\t\t\t\t");
    int i;
    for ( i = 0; i < 50; i++)
    {
    	printf("%c", a);
	}
    printf("\r");
    printf("\t\t\t\t\t");
    for ( i = 0; i < 50; i++)
	 {
        printf("%c", b);
        Sleep(15);
     }
}
int inside=0;
/*Encrypting Username*/
void encrypt_name_2(char *ptr_2)
{
	int b;
	for(b=0; ptr_2[b]!='\0'; b++)
	{
		ptr_2[b]=ptr_2[b]-5;
	}
	ptr_2[b]='\0';
}
void decrypt_username(char *ptr_1)
{
	int a;
	for(a=0; ptr_1[a]!='\0'; a++)
	{
		ptr_1[a]=ptr_1[a]-17;
	}
	ptr_1[a]='\0';
}
/*encrypting Username*/
void encrypt_name_1(char *ptr_1)
{
	int a;
	for(a=0; ptr_1[a]!='\0'; a++)
	{
		ptr_1[a]=ptr_1[a]+17;
	}
	ptr_1[a]='\0';
}
char* one(int num)
{
	static char ah[18];
	switch(num)
	{
		case 0: 
		    sprintf(ah,"");   return ah;
		case 1:
			sprintf(ah,"One");   return ah;
		case 2:
			sprintf(ah,"Two");   return ah;
		case 3:
			sprintf(ah,"Three");   return ah;
		case 4:
			sprintf(ah,"Four");   return ah;
		case 5:
			sprintf(ah,"Five");   return ah;
		case 6:
			sprintf(ah,"Six");   return ah;
		case 7:
			sprintf(ah,"Seven");   return ah;
		case 8:
			sprintf(ah,"Eight");   return ah;
		default:
			sprintf(ah,"Nine");   return ah;
	}
}
char* ten(int ch)
{
	static char ah[18];
	switch(ch)
	{
		case 1: 
		sprintf(ah,"Ten");   return ah;
		case 2:
			sprintf(ah,"Twenty");   return ah;
		case 3:
			sprintf(ah,"Thirty");   return ah;
		case 4:
			sprintf(ah,"Fourty");   return ah;
		case 5:
			sprintf(ah,"Fifty");   return ah;
		case 6:
			sprintf(ah,"Sixty");   return ah;
		case 7:
			sprintf(ah,"Seventy");   return ah;
		case 8:
			sprintf(ah,"Eighty");   return ah;
		default:
			sprintf(ah,"Ninety");   return ah;
	}
}
char* ten_one(char ch[])
{
	int m,n;
	static char kh[100];
	switch(ch[0])
	{
		case '1':
			switch(ch[1])
			{
				       case '0':
					        sprintf(kh,"Ten");   return kh;
                       case '1':
		                  	sprintf(kh,"Eleven");   return kh;
		               case '2':
		                	sprintf(kh,"Twelve");   return kh;
	                   case '3':
			                sprintf(kh,"Thirteen");   return kh;
	                   case '4':
			                sprintf(kh,"Fourteen");   return kh;
		               case '5':
			                sprintf(kh,"Fifteen");   return kh;
		               case '6':
			                sprintf(kh,"Sixteen");   return kh;
		               case '7':
		                	sprintf(kh,"Seventeen");   return kh;
		               case '8':
		 	                sprintf(kh,"Eignteen");   return kh;
	                   default:
		            	    sprintf(kh,"Nineteen");   return kh;
	       }
	    default:
	    	//Converting character to number
			m= ch[0]-'0';
			n= ch[1]-'0';
			//calling function for converting character to word
			char *dh=ten(m), *eh=one(n);
			
			if(m>0 && n==0)
			{
				sprintf(kh,"%s",dh);
				return kh;
			}
	    	
	    	sprintf(kh,"%s %s",dh,eh);
	    	return kh;  	
	}
}
char* hundred_one(int num)
{
	static char kh[10];
	switch(num)
	{
		 case 0:
			sprintf(kh,"Ten");   return kh;
		case 1:
			sprintf(kh,"Eleven");   return kh;
		case 2:
			sprintf(kh,"Twelve");   return kh;
		case 3:
			sprintf(kh,"Thirteen");   return kh;
		case 4:
			sprintf(kh,"Fourteen");   return kh;
		case 5:
			sprintf(kh,"Fifteen");   return kh;
		case 6:
			sprintf(kh,"Sixteen");   return kh;
		case 7:
			sprintf(kh,"Seventeen");   return kh;
		case 8:
			sprintf(kh,"Eighteen");   return kh;
		default:
			sprintf(kh,"Nineteen");   return kh;	
	}
}
char* hundred(char ch[])
{
	int m=ch[0]-'0',n=ch[1]-'0',o=ch[2]-'0';
	int mn=0;
	static char kh[100];
	static char gh[15];
	if(m>0 && n==0 && o==0)
	{
		mno: ;
		char *dh=one(m);
		sprintf(kh,"%s Hundred",dh);
		if(mn==1)
		{
			strcpy(gh, kh);
			goto mnoo;
		}
		return kh;
	}
	else if(m>0 && n==0 && o>0)
	{
		char *dh=one(m);
		static char fh[15];
		strcpy(fh, dh);
		char *eh=one(o);
		sprintf(kh,"%s Hundred %s",fh,eh);
		return kh;
	}
	else if(m>0 && n==1)
	{
		static char fh[15];
		char *dh=one(m);
		strcpy(fh, dh);
		sprintf(kh,"%s Hundred %s",fh,hundred_one(o));
		return kh;
	}
	else
	{
		mn++;
		goto mno;
		mnoo: ;
		static char dh[15];
		strcpy(dh, gh);
		char *jh=ten(n);
		static char ih[10];
		strcpy(ih, jh);
		char *eh=one(o);
		sprintf(kh,"%s %s %s",dh,jh,eh);
		return kh;
	}
}
char* thousand(char ch[])
{
	int no=0, mo=0, oo=0;
	static char kh[50];
	    static char c;
		c=ch[0];
		char d;
		d=ch[1];
		char *dh=strchr(ch, d);
		static char eh[3];
		int n=c-'0';
		strcpy(eh, dh);
		static char lh[9]="Thousand";
		static char ji[15];
		if(ch[1]=='0' && ch[2]=='0' && ch[3]=='0')
		{
			mon: ;
			monn: ;
			monnn: ;
			char *e=one(n);
			sprintf(kh,"%s %s",e,lh);
			if(no==1)
			{
				strcpy(ji, kh);
				goto mnoo;
			}
			if(mo==1)
			{
				strcpy(ji, kh);
				goto monno;
			}
			if(oo==1)
			{
				strcpy(ji, kh);
				goto monnno;
			}
	    	return kh;
		}
		else
		{
			int num=0, i;
			for(i=0; i<3; i++)
			{
				num=num*10+(eh[i]-'0');
			}
			char mh[4];
			sprintf(mh,"%d",num);
			int len=strlen(mh);
			
			if(len==3)
			{
				char* hi=hundred(mh); 
				static char gi[50];
				strcpy(gi, hi);
				no++;
				goto mon;
				mnoo: ;
				sprintf(kh,"%s %s",ji, gi);
				return kh;
			}
			else if(len==2)
			{
				char* hi=ten_one(mh); 
				static char ki[50];
				strcpy(ki, hi);
				mo++;
				goto monn;
				monno: ;
				sprintf(kh,"%s %s",ji, ki);
				return kh;
			}
			else if(len==1)
			{
				int nn=mh[0]-'0';
				char* hi=one(nn); 
				static char li[50];
				strcpy(li, hi);
				oo++;
				goto monnn;
				monnno: ;
				sprintf(kh,"%s %s",ji, li);
				return kh;
			}
	       	return kh;
		}		
}
char* ten_thousand(char ch[])
{
	static char kh[70];
	int l=ch[0]-'0', m=ch[1]-'0', n=ch[2]-'0', o=ch[3]-'0', p=ch[4]-'0',i,y=2,sum=0,num;
	static char ah[3], bh[4];
        for(i=0; i<2; i++)
       	  {
		    ah[i]=ch[i];
	      }	
	      ah[i]='\0';
	      static char eh[25];
	      char *dh=ten_one(ah);
	      strcpy(eh, dh);
	      char fh[10]=" Thousand";
	      strcat(eh, fh);
	      for(i=0; i<3; i++)
	      {
	      	num=ch[y]-'0';
	      	sum=sum*10+num;
	      	y++;
		  }
		  char nh[4];
		  sprintf(nh,"%d",sum);
		  int hum=strlen(nh);
		  if(hum==3)
		  {
		  	char *mh=hundred(nh);
		    static char ih[30];
		    strcpy(ih, mh);
		    sprintf(kh,"%s %s",eh, ih);
		    return kh;
		  }
		  else if(hum==2)
		  {
		  	char *mh=ten_one(nh);
		    static char ih[30];
		    strcpy(ih, mh);
		    sprintf(kh,"%s %s",eh, ih);
		    return kh; 
		  }
		  else
		  {
		  	char *mh=one(p);
		    static char ih[30];
		    strcpy(ih, mh);
		    sprintf(kh,"%s %s",eh, ih);
		    return kh; 
		  }
}
int log_watch=0;
int reset();
void open_log_sheet();
char *samaiF();
void main()
{
	int check=0,number;
	char setup_user_name_1[M],setup_user_name_2[M];
	char setup_user_password_1[M],setup_user_password_2[M];
	int equality_1,equality_2,count;
	loadingBar();
    PlaySound(TEXT("welcome.wav"),NULL,SND_ASYNC);
    Sleep(850);
    system("cls");
	printf("\n\n\n\n\n\n\t\t\t\t\t\tWelcome To HisabKitab\n\n\n");
	next_part: ; 
	next_part_3: ;
	number_3: ;
	number_4: ;
	same_ID: ;
	menu: ;
	henu: ;
	first: ;
	not_welcome: ;
	printf("\t\t\t\t\t\t0: Sign In\n\n\t\t\t\t\t\t1: Create Account\n\n\t\t\t\t\t\t2: Exit Process\n\n");
	printf("\t\t\t\t\t\tEnter Number: ");
	scanf("%d",&number);
	if(number==0)
	{
		system("cls");
		goto Number_0;
	}
	else if(number==1)
	{
		system("cls");
		goto Number_1;
	}
	else if(number==2)
	{
		system("cls");
		printf("\n\n\n\n\n\n");
	  	printf("\t\t\t\t\t#####    ##  ##   ######   #####    ##  ##   ######\n");
    	printf("\t\t\t\t\t##  ##   ##  ##   ##       ##  ##   ##  ##   ##    \n");
    	printf("\t\t\t\t\t##  ##   ##  ##   ##       ##  ##   ##  ##   ##    \n");
    	printf("\t\t\t\t\t#####     ####    ######   #####     ####    ######  \n");
    	printf("\t\t\t\t\t##  ##     ##     ##       ##  ##     ##     ##    \n");
    	printf("\t\t\t\t\t##  ##     ##     ##       ##  ##     ##     ##    \n");
    	printf("\t\t\t\t\t#####      ##     ######   #####      ##     ###### \n");
	  	printf("\t\t\t\t\t---------------------------------------------------\n\n");
	  	exit(0);
	}
	else
	{
		system("cls");
		printf("\n\n\n\n\n\n");
		goto first;
	}
	move_1: ;
	if(inside==2)
	{
		system("cls");
		check=-1;
		goto last_part;
	}
	move_2: ;
	if(inside==1)
	{
		system("cls");
		int reset_bit=reset();
		if(reset_bit==-1 || reset_bit==0 )
		{
			goto number_3;
		}
		else
		{
			goto number_4;
		}
	}
	Number_1: ;
	printf("\n\n\n\n");
	setup_user_id: ;
	int equality_0; 
	type_new_user_name: ;
	retype_user_id: ;
	printf("\n\n\t\t\t\t\t\tEnter User ID\n");
	printf("\n\n\t\t\t\t\t\tUser ID: ");
	scanf("%s",setup_user_name_1);
	int a=strlen(setup_user_name_1);	 
	printf("\t\t\t\t\t\tRetype User ID: ");
	scanf(" %s",setup_user_name_2);
	int b=strlen(setup_user_name_2);
	if(b!=a)
	{
		printf("\n\n\t\t\t\t\t\tUser ID length din't Match");
		goto retype_user_id;
	}
	int t=b;
	equality_1=strcmp(setup_user_name_1,setup_user_name_2);
	if(equality_1!=0)
	{
		printf("\n\t\t\t\t\t\tEntered User Name did't matched\n");
		printf("\t\t\t\t\t\tPlese Enter User Name again\n\n");
		goto setup_user_id;
	}
	printf("\n\n\t\t\t\t\t\tCreate Password\n\n");
	setup_user_password: ;
	retype_password_length: ;
	printf("\t\t\t\t\t\tPassword: ");
	char kh;
	int aaa=0;
	while((kh=getch())!=13)
	{
		if(aaa>0 && kh==8)
		{
			aaa--;
			    printf("\b \b");
		}
		else if(kh==8 && aaa==0)
		{
			printf(" \b");
		}
		else
		{
			setup_user_password_1[aaa]=kh;
	    	printf("*");
	    	aaa++;
		}
	}
	setup_user_password_1[aaa]='\0';
	int c=strlen(setup_user_password_1);
	printf("\n\t\t\t\t\t\tRetype Password: ");
	char kkh;
	int bbb=0;
	while((kkh=getch())!=13)
	{
		if(bbb>0 && kkh==8)
		{
			bbb--;
			    printf("\b \b");
		}
		else if(kkh==8 && bbb==0)
		{
			printf(" \b");
		}
		else
		{
			setup_user_password_2[bbb]=kkh;
	    	printf("*");
	    	bbb++;
		}
	}
	setup_user_password_2[bbb]='\0';
	int d=strlen(setup_user_password_2);
	if(c!=d)
	{
		printf("\n\n\t\t\t\t\t\tYour Entered Password Length Didn't Matched\n\n");
		goto retype_password_length;
	}
	int u=d;
	equality_2=strcmp(setup_user_password_1,setup_user_password_2);
	if(equality_2!=0)
	{
		printf("\n\n\t\t\t\t\t\tPassword didnot match\n");
		printf("\t\t\t\t\t\tPlease Enter Password Correct\n\n");
		goto setup_user_password;
	}
	else
	{
		// Encrypting user name for reset account name and account opening
		encrypt_name_1(setup_user_name_2);
		
		//question list for security question
        char ques_1[30];
        char ques_2[30];
        char ques_3[30];
        printf("\n\n");
        printf("\t\t\t\t\t\tWhat is your Favourite Food: ");
        scanf(" %[^\n]s",ques_1);
        printf("\n\n");
        printf("\t\t\t\t\t\tWho is your Favourite Person: ");
        scanf(" %[^\n]s",ques_2);
        printf("\n\n");
        printf("\t\t\t\t\t\tWhere is your Favourite Place: ");
        scanf(" %[^\n]s",ques_3);
        
        //checking for this user id our data base
        char id_check[100],temp_user_check[15],match_check[15];
        strcpy(match_check, setup_user_name_2);
        FILE *file_check;
        file_check=fopen("ID_check.txt","a+");
        rewind(file_check);
        while((fscanf(file_check,"%s",id_check))!=EOF)
	    {
		   if(strcmp(match_check, id_check)==0)
		   {
		   	   system("cls");
		   	   printf("\n\n\n\n\n\n\t\t\t\t\t\tUser ID exist in Our Database\n\n");
		   	   fclose(file_check);
		   	   goto same_ID;
		   }
     	}
	   fclose(file_check);
        
        //Security question account for user
        FILE *security;
        char security_1[t+8];
        sprintf(security_1,"%s.sec.txt",setup_user_name_2);
        security=fopen(security_1,"w");
        if(security==NULL)
        {
        	system("cls");
        	printf("\n\n\t\t\t\t\t\tUnable to Create Account\n\n");
        	exit(0);
		}
		
		//copying security answer to file
		fputs(ques_1, security);
        fprintf(security,"\n");
        fputs(ques_2, security);
        fprintf(security,"\n");
        fputs(ques_3, security);
        fclose(security);
        
		// Opening Hisabkitab  Account for User for next login to check is there this file or not
	    FILE *record;
	    char temprecord[11+t];
			sprintf(temprecord,"%s_HisabKitab.txt",setup_user_name_2);
			record=fopen(temprecord,"w");
			fclose(record);
	
			// Encrypting User password
			encrypt_name_2(setup_user_password_2);
			
			// Creating User Encrpted User and Password details account
			FILE *record_login_password;
	        char temprecord_1[t+12];
			sprintf(temprecord_1,"%s_details.txt",setup_user_name_2);
			record_login_password=fopen(temprecord_1,"w");
			fprintf(record_login_password,"%s",setup_user_password_2);
			fclose(record_login_password);
			
			
			// opening log sheet account for user
			char log1[t+13];
			sprintf(log1,"%s_logsheet.txt" ,setup_user_name_2);
			FILE *log_sheet;
			log_sheet = fopen(log1,"a");
			// Initializing for time function for date of creatin for log sheet
			log_watch=1;
			fprintf(log_sheet,"\n\n\t\t\t\t\t\tDate of Creation : %s\n\n\n",samaiF());
			fclose(log_sheet);
			//Initializing for return back to normal tie function
			log_watch=0;
			
			
			
			//writing encrypted user id into file_ckeck record for check details for next user id
			FILE *hello;
			hello=fopen("ID_check.txt","a");
			fputs(match_check, hello);
			fprintf(hello,"\n");
			fclose(hello);
			close(file_check);
			system("cls");
			CreatingBar();
			PlaySound(TEXT("account.wav"),NULL, SND_ASYNC);
			system("cls");
			
			printf("\n\n\n\n\n\n\t\t\t\t\t\tAccount created sucessfully\n\n\n");
			goto next_part_3;
	}
      Number_0: ;
      printf("\n\n\n");
      move_3: ;
      printf("\n\n\n\t\t\t\t\t\t0: Keep Record\n\n\t\t\t\t\t\t1: Reset Password\n\n\t\t\t\t\t\t2: Break Khutruke\n\n\t\t\t\t\t\t3: Main Menu\n\n\t\t\t\t\t\t4: Exit\n\n");
      printf("\t\t\t\t\t\tEnter Number: ");
      scanf("%d",&inside);
      if(inside==0)
      {
      	system("cls");
      	check=0;
      	goto move_0;
	  }
	  else if(inside==1)
	  {
	  	system("cls");
	  	goto move_2;
	  }
	  else if(inside==2)
	  {
	  	system("cls");
	  	goto move_1;
	  }
	  else if(inside==3)
	  {
	  	system("cls");
	  	printf("\n\n\n\n\n\n");
	  	goto menu;
	  }
	  else if(inside==4)
	  {
	  	system("cls");
	  	printf("\n\n\n\n\n\n");
    	printf("\t\t\t\t\t#####    ##  ##   ######   #####    ##  ##   ######\n");
    	printf("\t\t\t\t\t##  ##   ##  ##   ##       ##  ##   ##  ##   ##    \n");
    	printf("\t\t\t\t\t##  ##   ##  ##   ##       ##  ##   ##  ##   ##    \n");
    	printf("\t\t\t\t\t#####     ####    ######   #####     ####    ######  \n");
    	printf("\t\t\t\t\t##  ##     ##     ##       ##  ##     ##     ##    \n");
    	printf("\t\t\t\t\t##  ##     ##     ##       ##  ##     ##     ##    \n");
    	printf("\t\t\t\t\t#####      ##     ######   #####      ##     ###### \n");
	  	printf("\t\t\t\t\t---------------------------------------------------\n\n");
	  	exit(0);
	  }
	  else
	  {
	  	system("cls");
	  	printf("\n\n\n\n\n\n\t\t\t\t\t\tPlease Enter Any Below for Instruction");
	  	goto move_3;
	  }
        move_0: ;
        last_part: ;
        log_sheet_part: ;
        int equality_3=2,equality_4=2;
		char Login_User_Name[10];
		char Login_User_Name_Test[10];
		char login_User_Password[10];
		char login_User_Password_Test[10];
		printf("\n\n\n\n\n\n\t\t\t\t\t\tEnter User ID and Login Password\n\n");
		printf("\t\t\t\t\t\tUser ID: ");
		scanf(" %s",Login_User_Name_Test);
		int e=strlen(Login_User_Name_Test);
		printf("\t\t\t\t\t\tUser Password: ");
		char llh;
    	int eee=0;
        while((llh=getch())!=13)
    	{
    		if(eee>0 && llh==8)
    		{
    			eee--;
			    printf("\b \b");
     		}
    		else if(llh==8 && eee==0)
     		{
    			printf(" \b");
    		}
	    	else
     		{
     			login_User_Password_Test[eee]=llh;
     	    	printf("*");
    	    	eee++;
	    	}
    	}
    	login_User_Password_Test[eee]='\0';
		int f=strlen(login_User_Password_Test);
		// Encrypting Input User ID Name
		encrypt_name_1(Login_User_Name_Test);
			
		// Copying user ID name for later
		char later_user_ID[e];
		sprintf(later_user_ID,"%s",Login_User_Name_Test);
	
		//checking record exit or not
		char user_name_in[e+12];
		sprintf(user_name_in,"%s_details.txt",Login_User_Name_Test);
		FILE *temp_check;
		temp_check=fopen(user_name_in,"r");
		if(temp_check == NULL)
		{
			system("cls");
			 printf("\n\n\n\n\n\n\t\t\t\t\t\tUser ID Account Doesnot Exist In Our Database\n\n");
			 goto next_part;
		}
		else
		{
				// Eecrypting Input user Password
				encrypt_name_2(login_User_Password_Test);
			    //Comparing Password
			    char login_User_Password_Test_1[M];
			    fgets(login_User_Password_Test_1,100,temp_check);
		     	equality_3=strcmp(login_User_Password_Test_1,login_User_Password_Test);
		     	if(equality_3!=0)
		     	{	
		     		fgets(login_User_Password_Test_1,100,temp_check);
		     		next_part_1: ;
		     	   	printf("\n\n\t\t\t\t\t\tIncorrect Password\n\n");
		     		printf("\t\t\t\t\t\tEnter User Password: ");
					 char khh;
	                 int ccc=0;
                    while((khh=getch())!=13)
                 	{
    	            	if(ccc>0 && khh==8)
    	             	{
    		            	ccc--;
		            	    printf("\b \b");
     	            	}
    	             	else if(khh==8 && ccc==0)
     	            	{
    	            		printf(" \b");
    	            	}
	                	else
     	             	{
     	            		login_User_Password_Test[ccc]=khh;
     	                	printf("*");
    	                	ccc++;
	                	}
                	}
                    login_User_Password_Test[ccc]='\0';	
	             	encrypt_name_2(login_User_Password_Test);
		     	    equality_3=strcmp(login_User_Password_Test_1,login_User_Password_Test);
		     	    if(equality_3!=0)
		     	    {
		     	        goto next_part_1;
			      	}
			    }
				fclose(temp_check);
				
			    goto your_Account;	
		}    
	your_Account: ;	
	system("cls");
	
	
	char account[e+15];
	sprintf(account,"%s_HisabKitab.txt",Login_User_Name_Test);
	FILE *Account;
	Account=fopen(account,"a+");
	 if( check == -1)
				{	
					goto final_part;
				}
	printf("\n\n\n\n\n\n\t\t\t\t\t\tWelcome To Khutreke Record\n\n");
	int i,rupees,je=0;
	int j=-1;
	char *samai;
	samai=samaiF();
	printf("\n\n\t\t\t\t\t\t%s\n\n",samai);
	int initial_sum=0;
	for(i=5; j!=0; i--)
	{	
		from_here: ;
		from_here_2: ;
		from_here_3: ;
		printf("\n");
		printf("\t\t\t\t\t\tEnter Amount: ");
		scanf("%d",&rupees);
		switch(rupees)
		{
			case 0:
			from_here_1: ;
			system("cls");
			printf("\n\n\n\n\n\n\t\t\t\t\t\t0: Exit\n\n\t\t\t\t\t\t1: Continue\n\n\t\t\t\t\t\t2: Main Menu\n\n");
			printf("\t\t\t\t\t\tEnter Number: ");
			scanf("%d",&j);
			if(j==1)
			{
				system("cls");
				printf("\n\n\n\n\n\n\n");
				goto from_here;
			}
			else if(j==0)
			{
				system("cls");
				printf("\n\n\n\n\n\n");
				printf("\t\t\t\t\t#####    ##  ##   ######   #####    ##  ##   ######\n");
            	printf("\t\t\t\t\t##  ##   ##  ##   ##       ##  ##   ##  ##   ##    \n");
             	printf("\t\t\t\t\t##  ##   ##  ##   ##       ##  ##   ##  ##   ##    \n");
            	printf("\t\t\t\t\t#####     ####    ######   #####     ####    ######  \n");
            	printf("\t\t\t\t\t##  ##     ##     ##       ##  ##     ##     ##    \n");
            	printf("\t\t\t\t\t##  ##     ##     ##       ##  ##     ##     ##    \n");
            	printf("\t\t\t\t\t#####      ##     ######   #####      ##     ###### \n");
         	  	printf("\t\t\t\t\t---------------------------------------------------\n\n");
				fclose(Account);
				exit(0);  
			}
			else if(j==2)
			{
				system("cls");
				fclose(Account);
				printf("\n\n\n\n\n\n");
				// Making log_sheet counter normal
				log_watch=0;
				
				goto henu;
			}
			else
			{
				system("cls");
				goto from_here_1;
			}
			case 1:
			case 2:
			case 5:
			case 10:
			case 20:
			case 50:
			case 100:
			case 500:
			case 1000:
				system("cls");
				je++;
			initial_sum=initial_sum+rupees;
			PlaySound(TEXT("coin.wav"),NULL,SND_ASYNC);
	        printf("\n\n\n\n\n\n\t\t\t\t\t\tDepositing..");
	        Sleep(2000);
	        
			if(rupees==1)
			{
	            system("cls");
	            printf("\n\n\n\n\n\n\t\t\t\t\t\tYou Deposited\n\n");
              	printf("\t\t\t\t\t\t   ##    \n");
             	printf("\t\t\t\t\t\t  ###    \n");
              	printf("\t\t\t\t\t\t   ##    \n");
             	printf("\t\t\t\t\t\t   ##    \n");
             	printf("\t\t\t\t\t\t   ##    \n");
                printf("\t\t\t\t\t\t   ##    \n");
            	printf("\t\t\t\t\t\t  ####   \n");
            	printf("\t\t\t\t\t\t---------\n");
            	
	// Opening logsheet for Keeping money deposited date.
	char log_watch2[e+13];
	sprintf(log_watch2,"%s_logsheet.txt",Login_User_Name_Test);
	
	FILE *log_sheet2;
	log_sheet2=fopen(log_watch2,"a");
	//fclose(log_sheet2);
            	fprintf(log_sheet2,"\n\t\t\t\t\t\t1 One Rupees Coin | Date: %s |\n",samaiF());
            	fclose(log_sheet2);
            	
			}
			else if(rupees==2)
			{
				system("cls");
	            printf("\n\n\n\n\n\n\t\t\t\t\t\tYou Deposited\n\n");
				printf("\t\t\t\t\t\t  ####   \n");
            	printf("\t\t\t\t\t\t ##  ##  \n");
             	printf("\t\t\t\t\t\t     ##  \n");
            	printf("\t\t\t\t\t\t    ##   \n");
            	printf("\t\t\t\t\t\t  ##     \n");
            	printf("\t\t\t\t\t\t ##      \n");
            	printf("\t\t\t\t\t\t ######  \n");
            	printf("\t\t\t\t\t\t---------\n");
            	
	// Opening logsheet for Keeping money deposited date.
	char log_watch2[e+13];
	sprintf(log_watch2,"%s_logsheet.txt",Login_User_Name_Test);
	
	FILE *log_sheet2;
	log_sheet2=fopen(log_watch2,"a");
	//fclose(log_sheet2);
            	fprintf(log_sheet2,"\n\t\t\t\t\t\t1 Two Rupees Coin | Date: %s |\n",samaiF());
            	fclose(log_sheet2);
			}
			else if(rupees==5)
			{
				system("cls");
	            printf("\n\n\n\n\n\n\t\t\t\t\t\tYou Deposited\n\n");
				printf("\t\t\t\t\t\t ######  \n");
             	printf("\t\t\t\t\t\t ##      \n");
             	printf("\t\t\t\t\t\t #####   \n");
             	printf("\t\t\t\t\t\t     ##  \n");
             	printf("\t\t\t\t\t\t     ##  \n");
             	printf("\t\t\t\t\t\t ##  ##  \n");
             	printf("\t\t\t\t\t\t  ####   \n");
             	printf("\t\t\t\t\t\t---------\n");
             	
	// Opening logsheet for Keeping money deposited date.
	char log_watch2[e+13];
	sprintf(log_watch2,"%s_logsheet.txt",Login_User_Name_Test);
	
	FILE *log_sheet2;
	log_sheet2=fopen(log_watch2,"a");
	//fclose(log_sheet2);
             	fprintf(log_sheet2,"\n\t\t\t\t\t\t1 Five Rupees Note | Date: %s |\n",samaiF());
             	fclose(log_sheet2);
			}
			else if(rupees==10)
			{
				system("cls");
	            printf("\n\n\n\n\n\n\t\t\t\t\t\tYou Deposited\n\n");
				printf("\t\t\t\t\t\t  ##     ## ##   \n");
                printf("\t\t\t\t\t\t ###    ##   ##  \n");
                printf("\t\t\t\t\t\t  ##    ##   ##  \n");
                printf("\t\t\t\t\t\t  ##    ##   ##  \n");
                printf("\t\t\t\t\t\t  ##    ##   ##  \n");
                printf("\t\t\t\t\t\t  ##    ##   ##  \n");
                printf("\t\t\t\t\t\t ####    ## ##   \n");
                printf("\t\t\t\t\t\t-----------------\n");
                
	// Opening logsheet for Keeping money deposited date.
	char log_watch2[e+13];
	sprintf(log_watch2,"%s_logsheet.txt",Login_User_Name_Test);
	
	FILE *log_sheet2;
	log_sheet2=fopen(log_watch2,"a");
	//fclose(log_sheet2);
                fprintf(log_sheet2,"\n\t\t\t\t\t\t1 Ten Rupees Note | Date: %s |\n",samaiF());
                fclose(log_sheet2);
			}
			else if(rupees==20)
			{
				system("cls");
	            printf("\n\n\n\n\n\n\t\t\t\t\t\tYou Deposited\n\n");
				printf("\t\t\t\t\t\t## ##     ## ##   \n");
	            printf("\t\t\t\t\t\t##  ##   ##   ##  \n");
             	printf("\t\t\t\t\t\t    ##   ##   ##  \n");
             	printf("\t\t\t\t\t\t   ##    ##   ##  \n");
             	printf("\t\t\t\t\t\t  ##     ##   ##  \n");
             	printf("\t\t\t\t\t\t #   ##  ##   ##  \n");
            	printf("\t\t\t\t\t\t######    ## ##   \n");
            	printf("\t\t\t\t\t\t------------------\n");
            	
	// Opening logsheet for Keeping money deposited date.
	char log_watch2[e+13];
	sprintf(log_watch2,"%s_logsheet.txt",Login_User_Name_Test);
	
	FILE *log_sheet2;
	log_sheet2=fopen(log_watch2,"a");
	//fclose(log_sheet2);
            	fprintf(log_sheet2,"\n\t\t\t\t\t\t1 Twenty Rupees Note | Date: %s |\n",samaiF());
            	fclose(log_sheet2);
			}
			else if(rupees==50)
			{
				system("cls");
	            printf("\n\n\n\n\n\n\t\t\t\t\t\tYou Deposited\n\n");
				printf("\t\t\t\t\t\t######    ## ##   \n");
            	printf("\t\t\t\t\t\t##       ##   ##  \n");
            	printf("\t\t\t\t\t\t## ##    ##   ##  \n");
            	printf("\t\t\t\t\t\t    ##   ##   ##  \n");
             	printf("\t\t\t\t\t\t##  ##   ##   ##  \n");
            	printf("\t\t\t\t\t\t##  ##   ##   ##  \n");
            	printf("\t\t\t\t\t\t  ###     ## ##   \n");
            	printf("\t\t\t\t\t\t------------------\n");
            	
	// Opening logsheet for Keeping money deposited date.
	char log_watch2[e+13];
	sprintf(log_watch2,"%s_logsheet.txt",Login_User_Name_Test);
	
	FILE *log_sheet2;
	log_sheet2=fopen(log_watch2,"a");
	//fclose(log_sheet2);
            	fprintf(log_sheet2,"\n\t\t\t\t\t\t1 Fifty Rupees Note | Date: %s |\n",samaiF());
            	fclose(log_sheet2);
			}
			else if(rupees==100)
			{
				system("cls");
	            printf("\n\n\n\n\n\n\t\t\t\t\t\tYou Deposited\n\n");
				printf("\t\t\t\t\t\t ##     ## ##    ## ##   \n");
            	printf("\t\t\t\t\t\t###    ##   ##  ##   ##  \n");
            	printf("\t\t\t\t\t\t ##    ##   ##  ##   ##  \n");
            	printf("\t\t\t\t\t\t ##    ##   ##  ##   ##  \n");
             	printf("\t\t\t\t\t\t ##    ##   ##  ##   ##  \n");
               	printf("\t\t\t\t\t\t ##    ##   ##  ##   ##  \n");
            	printf("\t\t\t\t\t\t####    ## ##    ## ##   \n");
            	printf("\t\t\t\t\t\t-------------------------\n");
            	
	// Opening logsheet for Keeping money deposited date.
	char log_watch2[e+13];
	sprintf(log_watch2,"%s_logsheet.txt",Login_User_Name_Test);
	
	FILE *log_sheet2;
	log_sheet2=fopen(log_watch2,"a");
	//fclose(log_sheet2);
            	fprintf(log_sheet2,"\n\t\t\t\t\t\t1 One Hundred Rupees Note | Date: %s |\n",samaiF());
            	fclose(log_sheet2);
			}
			else if(rupees==500)
			{
				system("cls");
	            printf("\n\n\n\n\n\n\t\t\t\t\t\tYou Deposited\n\n");
	            printf("\t\t\t\t\t\t######    ## ##    ## ##   \n");
               	printf("\t\t\t\t\t\t##       ##   ##  ##   ##  \n");
	            printf("\t\t\t\t\t\t## ##    ##   ##  ##   ##  \n");
             	printf("\t\t\t\t\t\t    ##   ##   ##  ##   ##  \n");
            	printf("\t\t\t\t\t\t##  ##   ##   ##  ##   ##  \n");
            	printf("\t\t\t\t\t\t##  ##   ##   ##  ##   ##  \n");
            	printf("\t\t\t\t\t\t  ###     ## ##    ## ##   \n");
            	printf("\t\t\t\t\t\t---------------------------\n");
            	
	// Opening logsheet for Keeping money deposited date.
	char log_watch2[e+13];
	sprintf(log_watch2,"%s_logsheet.txt",Login_User_Name_Test);
	
	FILE *log_sheet2;
	log_sheet2=fopen(log_watch2,"a");
	//fclose(log_sheet2);
            	fprintf(log_sheet2,"\n\t\t\t\t\t\t1 Five Hundred Rupees Note | Date: %s |\n",samaiF());
            	fclose(log_sheet2);
			}
			else
			{
				system("cls");
	            printf("\n\n\n\n\n\n\t\t\t\t\t\tYou Deposited\n\n");
				printf("\t\t\t\t\t\t   ##     ## ##    ## ##    ## ##   \n");
            	printf("\t\t\t\t\t\t  ###    ##   ##  ##   ##  ##   ##  \n");
            	printf("\t\t\t\t\t\t   ##    ##   ##  ##   ##  ##   ##  \n");
            	printf("\t\t\t\t\t\t   ##    ##   ##  ##   ##  ##   ##  \n");
            	printf("\t\t\t\t\t\t   ##    ##   ##  ##   ##  ##   ##  \n");
            	printf("\t\t\t\t\t\t   ##    ##   ##  ##   ##  ##   ##  \n");
            	printf("\t\t\t\t\t\t  ####    ## ##    ## ##    ## ##   \n");
            	printf("\t\t\t\t\t\t------------------------------------\n");
            	
	// Opening logsheet for Keeping money deposited date.
	char log_watch2[e+13];
	sprintf(log_watch2,"%s_logsheet.txt",Login_User_Name_Test);
	
	FILE *log_sheet2;
	log_sheet2=fopen(log_watch2,"a");
	//fclose(log_sheet2);
            	fprintf(log_sheet2,"\n\t\t\t\t\t\t1 One Thousand Rupees Note | Date: %s |\n",samaiF());
            	fclose(log_sheet2);
			}
			printf("\n\n\t\t\t\t\t\tToday You Saved: Rs.%d",initial_sum);
			fprintf(Account,"%d\n",rupees);
			printf("\n\n\t\t\t\t\t\t0: Stop\n\n");
			break;
			
			default:
		    if(rupees<0)
		    {
		    	
		    	system("cls");
		    	printf("\n\n\n\n\n\n\t\t\t\t\t\tError Input\n");
		    	goto from_here_2;
			}
			else
			{
				system("cls");
				printf("\n\n\n\n\n\n\t\t\t\t\t\tYou cannot enter more than 1 currency at a time\n\n\n");
				goto from_here_3;
			}
		}
		printf("\n");
	}
        	final_part: ;
        	//count_money extract money from file
        	int last_check=0;
        	int count_money;
        	int amount_check;
        	int count_amount_check=0;
        	int aa=0, bb=0, cc=0, dd=0, ee=0, ff=0, gg=0, hh=0, ii=0;
        	int total_sum=0;
        	rewind(Account);
        	while((fscanf(Account,"%d",&count_money))!=EOF)
        	{
        		switch(count_money)
        		{
        			case 1: aa++; break;
        			case 2: bb++; break;
        			case 5: cc++; break;
        			case 10: dd++; break;
        			case 20: ee++; break;
        			case 50: ff++; break;
        			case 100: gg++; break;
        			case 500: hh++; break;
        			default: ii++;
				}
        		total_sum=total_sum + count_money;
            }
        		
					fclose(Account);
					char sh[e+8], th[25], uh[25];
					sprintf(sh,"%s.sec.txt",Login_User_Name_Test);
					FILE *security_check=fopen(sh,"r");
					fscanf(security_check,"%s",th);
					printf("\n\n\n\n\n\n\t\t\t\t\t\tWhat is Your Favourite Food: ");
					scanf(" %[^\n]s",uh);
					if((strcmp(th, uh))==0)
					{
						system("cls");
						fclose(security_check);
						goto welcome;
					}
					else
					{
						system("cls");
						printf("\n\n\n\n\n\n\t\t\t\t\t\tWrong Answer\n");
						fscanf(security_check,"%s",th);
		             	printf("\n\n\n");
		            	printf("\t\t\t\t\t\tWho is your Favourite Person: ");
		            	scanf(" %[^\n]s",uh);
		            	if((strcmp(th, uh))==0)
					    {
						    system("cls");
						    fclose(security_check);
					     	goto welcome;
				    	}
				    	else
				    	{
				    		system("cls");
					    	printf("\n\n\n\n\n\n\t\t\t\t\t\tWrong Answer\n");
					    	fscanf(security_check,"%s",th);
		                 	printf("\n\n\n");
		                	printf("\t\t\t\t\t\tWhere is your Favourite Place: ");
		                	scanf(" %[^\n]s",uh);
		                	if((strcmp(th, uh))==0)
					        {
					     	    system("cls");
					    	    fclose(security_check);
					         	goto welcome;
				        	}
				        	else
				        	{
				        		system("cls");
				        		fclose(security_check);
				        		printf("\n\n\n\n\n\n\t\t\t\t\t\tYou gave all answers Wrong\n\n");
							}
						}
						goto not_welcome;
					}
				        welcome: ;
				        //Breaking Process
				        system("color 0F");
                        char aaaa = 177, bbbbb = 219;
                        printf("\n\n\n\n");
                        printf("\n\n\n\n\t\t\t\t\tBreaking...\n\n");
                        printf("\t\t\t\t\t");
                        int iii;
                        for ( iii = 0; iii < 50; iii++)
                        {
                        	printf("%c", aaaa);
                     	}
                     	//Playing khutruke breaking sound 
				        PlaySound(TEXT("break.wav"),NULL, SND_ASYNC);
                        printf("\r");
                        printf("\t\t\t\t\t");
                        for ( iii = 0; iii < 50; iii++)
                    	{
                           printf("%c", bbbbb);
                           Sleep(20);
                        }
                        
				        system("cls");
				        printf("\n\n\n\n\n\n\t\t\t\t\t\tCounting Money..");
				        Sleep(1200);
				        
				        
				                                   if(total_sum==0)
	                                               {
	                                               	system("cls");
	                                               	 printf("\n\n\n\n\n\n\t\t\t\t\t\tYou don't have saved any money in Khutruke");
	                                               	 printf("\n\n\t\t\t\t\t\t------------------------------------------");
	                                               	 last_num2_again: ;
											       int last_num2;
											 printf("\n\n\t\t\t\t\t\t0: Exit\n\n\t\t\t\t\t\t1: Main Menu\n\n");
											 printf("\t\t\t\t\t\tEnter Number: ");
											 scanf("%d",&last_num2);
											 if(last_num2==0)
											 {
											 	system("cls");
											 	goto last_num2_0;
											 }
											 else if(last_num2==1)
											 {
											 	system("cls");
											 	printf("\n\n\n\n\n\n");
											 	log_watch=0;
											 	goto menu;										
											 }
											 else
											 {
											 	system("cls");
											 	printf("\n\n\n\n");
											 	goto last_num2_again;
											 }
											 last_num2_0: ;
											 PlaySound(TEXT("exit.wav"),NULL,SND_ASYNC);
					                 		printf("\n\n\n\n\n\n");
					                 		printf("\t\t\t\t\t#####    ##  ##   ######   #####    ##  ##   ######\n");
                                        	printf("\t\t\t\t\t##  ##   ##  ##   ##       ##  ##   ##  ##   ##    \n");
                                         	printf("\t\t\t\t\t##  ##   ##  ##   ##       ##  ##   ##  ##   ##    \n");
                                         	printf("\t\t\t\t\t#####     ####    ######   #####     ####    ######  \n");
                                         	printf("\t\t\t\t\t##  ##     ##     ##       ##  ##     ##     ##    \n");
                                           	printf("\t\t\t\t\t##  ##     ##     ##       ##  ##     ##     ##    \n");
                                        	printf("\t\t\t\t\t#####      ##     ######   #####      ##     ###### \n");
                                    	  	printf("\t\t\t\t\t---------------------------------------------------\n\n");
					                 		exit(0);
												   }
												   else
												   {
												   	
							                                            char ch[6];
                      	                            sprintf(ch,"%d",total_sum);
	                                                int len=strlen(ch);
	                                                char *bh;
	                                                if(len==1)
	                                                {
	                                                	int num=ch[0]-'0';
 	                                                	bh=one(num);
                                                 	}
                                                 	else if(len==2)
                                                   	{
	                              	                    bh=ten_one(ch);
	                                                }
	                                                else if(len==3)
                                                   	{
	                                                 	bh=hundred(ch);
                                   	                }
                              	                    else if(len==4)
                                                   	{	
	                                                 	bh=thousand(ch);
                                                   	}
                                                    else
                                       	            {
                                 	                 	bh=ten_thousand(ch);
                                                 	}
                                                 	system("cls");
							                printf("\n\n\n\n\n\n\t\t\t\t\t\tCongratulation !!\n\n\t\t\t\t\t\tYou have saved\n\n");
					                 		printf("\t\t\t\t\t\tIn Number: Rs.%d",total_sum);
					                 		printf("\n");
					                 		printf("\t\t\t\t\t\tIn Word: %s Rupees Only.",bh);
					                 		printf("\n\n\t\t\t\t\t\tMore Details Below:\n\t\t\t\t\t\t-------------------\n");
					                 		if(aa>0)
					                 		{
					                 			printf("\n\t\t\t\t\t\t1 Rupees Coin %d",aa);
											 }
											 if(bb>0)
											 {
											 	printf("\n\t\t\t\t\t\t2 Rupees Coin %d",bb);
											 }
											 if(cc>0)
											 {
											 	printf("\n\t\t\t\t\t\t5 Rupees Note %d",cc);
											 }
											 if(dd>0)
											 {
											 	printf("\n\t\t\t\t\t\t10 Rupees Note %d",dd);
											 }
											 if(ee>0)
											 {
											 	printf("\n\t\t\t\t\t\t20 Rupees Note %d",ee);
											 }
											 if(ff>0)
											 {
											 	printf("\n\t\t\t\t\t\t50 Rupees Note %d",ff);
											 }
											 if(gg>0)
											 {
											 	printf("\n\t\t\t\t\t\t100 Rupees Note %d",gg);
											 }
											 if(hh>0)
											 {
											 	printf("\n\t\t\t\t\t\t500 Rupees Note %d",hh);
											 }
											 if(ii>0)
											 {
											 	printf("\n\t\t\t\t\t\t1000 Rupees Notes %d",ii);
											 }
											 printf("\n\n\t\t\t\t\t\t------------------------");
											 printf("\n\n\t\t\t\t\t\tKhutruke Log Sheet Details:\n\n");
											 open_log_sheet(Login_User_Name_Test);
											 
											 nextclose_3: ;
											 int save;
											 printf("\n\n\t\t\t\t\t\tDo you want to copy money to new Khutruke ?\n\n");
											 printf("\t\t\t\t\t\t0: No\n\n");
											 printf("\t\t\t\t\t\t1: Yes\n\n");
											 printf("\t\t\t\t\t\tEnter Number: ");
											 scanf("%d",&save);
											 if(save == 0)
											 {
											 	system("cls");
											     goto nextclose_0;
											 }
											 else if(save == 1)
											 {
											 	system("cls");
											 	printf("\n\n\n\n");
											 	printf("\t\t\t\t\t\tUser Data Have been Saved");
											 	goto nextclose_1;
											 }
											 else 
											 {
											 	system("cls");
											 	printf("\n\n\n\n");
											 	goto nextclose_3;
											 }
											 last_num_again: ;
											 nextclose_1: ;
											 dele_menu: ;
											 int last_num;
											 printf("\n\n\t\t\t\t\t\t0: Exit\n\n\t\t\t\t\t\t1: Main Menu\n\n");
											 printf("\n\n\t\t\t\t\t\tEnter Number: ");
											 scanf("%d",&last_num);
											 if(last_num==0)
											 {
											 	system("cls");
											 	goto last_num_0;
											 }
											 else if(last_num==1)
											 {
											 	system("cls");
											 	printf("\n\n\n\n\n\n");
											 	log_watch=0;
											 	goto menu;										
											 }
											 else
											 {
											 	system("cls");
											 	goto last_num_again;
											 }
											 last_num_0: ;
											 printf("\n\n\n\n\n\n\t\t\t\t\t\tExiting..");
											 PlaySound(TEXT("exit.wav"),NULL,SND_ASYNC);
											 Sleep(1000);
											 system("cls");
					                 		printf("\n\n\n\n\n\n");
					                 		printf("\t\t\t\t\t#####    ##  ##   ######   #####    ##  ##   ######\n");
                                        	printf("\t\t\t\t\t##  ##   ##  ##   ##       ##  ##   ##  ##   ##    \n");
                                         	printf("\t\t\t\t\t##  ##   ##  ##   ##       ##  ##   ##  ##   ##    \n");
                                           	printf("\t\t\t\t\t#####     ####    ######   #####     ####    ######  \n");
                                        	printf("\t\t\t\t\t##  ##     ##     ##       ##  ##     ##     ##    \n");
                                        	printf("\t\t\t\t\t##  ##     ##     ##       ##  ##     ##     ##    \n");
                                        	printf("\t\t\t\t\t#####      ##     ######   #####      ##     ###### \n");
                                    	  	printf("\t\t\t\t\t---------------------------------------------------\n\n");
					                 		exit(0);
											}
                            nextclose_0: ;
					        //copying user id name fordeleting that file
					
			                //for deleting process for user id and passowrd holing file
			                char dupli_user[e+12];
	                     	sprintf(dupli_user,"%s_details.txt",later_user_ID);
	                     	
	                     	//for deleting process security file
	                        char security_2[e+8];
	                        sprintf(security_2,"%s.sec.txt",later_user_ID);
	                         
	                        //for deleting logsheet account file proces
	                        char logshet[e+13];
	                        sprintf(logshet,"%s_logsheet.txt",later_user_ID);
	                        
	                       	// to remove user log sheet details
	                     	int byebye_log_sheet=remove(logshet);
	                     	
	                     	//to remove security holding file
	                     	int byebye_security=remove(security_2);
	                     	
	                     	//to remove money holding file
	                     	int byebye_hisakitab_1=remove(account);
	                     	 
	                     	//to remove account password file
	                     	int byebye_details_1=remove(dupli_user);
	                     	
	                     
	                     	
	                     	FILE *jp;
	                     	jp=fopen("ID_check.txt","r");
	                     	 
	                     	 char ch[15];
	                         FILE *fp=fopen("ID_check.txt","r");
                           	 FILE *gp=fopen("temp_check.txt","w+");
	                         while((fscanf(fp,"%s",ch))!=EOF)
	                         {
	                        	if((strcmp(ch,later_user_ID))!=0)
	                           	{
			                       fprintf(gp,"%s",ch);
		                           fprintf(gp,"\n");
	                          	}
                             }
	                         fclose(fp);
	                         
                          	 rewind(gp);
	                         FILE *hp;
                         	 hp=fopen("ID_check.txt","w");
                             while((fscanf(gp,"%s",ch))!=EOF)
                            {
	                        	fprintf(fp,"%s",ch);
		                        fprintf(fp,"\n");
	                        }
 	                        fclose(hp);
                        	fclose(gp);
                        	int x=remove("temp_check.txt");
	             	       if( byebye_hisakitab_1==0 && byebye_details_1==0 && byebye_security==0 && byebye_log_sheet==0)
	             	       {
	             	            printf("\n\n\n\n\n\n\t\t\t\t\t\tUser Data have been deleted\n\n\n\n");
					                 	goto dele_menu;
	                                       
						   }  
						   else
						   {
						   	system("cls");
						   	printf("\n\n\n\n\n\n\t\t\t\t\t\tUnable to delete data");
						   	goto dele_menu;
						   }
}
// Generating time
char *samaiF()
{
	time_t current_time;
	time(&current_time);
	int x=0,y=0,i;
	char ch[24];
	char kh[24];
	static char Ah[14];
	sprintf(kh,"%s",ctime(&current_time));
	if(log_watch==1)
	{
		for(i=0; i<24; i++)
      	{
	     	if(i>10 && i<20)
	    	{
	     		continue;
	      	}
	     	Ah[x]=kh[i];
	    	x++;
      	}
    	Ah[x]='\0';
    	return Ah;
	}
	else 
	{
		for(i=0; i<24; i++)
    	{
	    	if(i>10 && i<20)
	     	{
	    		continue;
	    	}
	    	Ah[x]=kh[i];
	    	x++;
     	}
     	Ah[x]='\0';
	    	return Ah;
	}
}
//Reset password
int reset(void)
{
	char Login_User_Name[10];
	printf("\n\n\n\n\n\n\t\t\t\t\t\tEnter User ID:");
	scanf("%s",Login_User_Name);
	//Encrypting user name
	encrypt_name_1(Login_User_Name);
	int t=strlen(Login_User_Name);
	//opening security text file
	FILE *security;
        char security_1[t+8];
        sprintf(security_1,"%s.sec.txt",Login_User_Name);
        security=fopen(security_1,"r");
        if(security==NULL)
        {
        	system("cls");
        	printf("\n\n\n\n\n\n\t\t\t\t\t\tAccount doesnot exit in our database\n\n");
        	
        	return 0;
		}
		int count=0, sum=0;
	char sample[30];
	//Checking question answer
	while((fscanf(security,"%s",sample))!=EOF)
	{
		char ques_1[30];
		if(count==0)
		{
			printf("\n");
			printf("\t\t\t\t\t\tWhat is your Favourite Food: ");
            scanf(" %[^\n]s",ques_1);
			if(strcmp(sample,ques_1)==0)
			{
				sum++;
			}
		}
		else if(count==1)
		{
			printf("\n");
			printf("\t\t\t\t\t\tWho is your Favourite Person: ");
            scanf(" %[^\n]s",ques_1);
			if(strcmp(sample,ques_1)==0)
			{
				sum++;
			}
		}
		else
		{
			printf("\n");
			printf("\t\t\t\t\t\tWhere is your Favourite Place: ");
            scanf(" %[^\n]s",ques_1);
            if(strcmp(sample,ques_1)==0)
			{
				sum++;
			}
		}	
		count++;	
	}
	if(sum!=3)
	{
		//closing security file
		fclose(security);	
		system("cls");
		printf("\n\n\n\n\n\n");
		printf("\t\t\t\t\t\tIncorrect Answer\n\n");
		return -1;
	}
	else
	{
		//closing security file
		fclose(security);
		
		//Overwriting password
		char setup_user_password_1[20],setup_user_password_2[20];	
		char security_2[t+12];
		//process for opening passowrd file
		sprintf(security_2,"%s_details.txt",Login_User_Name);
		system("cls");
		printf("\n\n");
		setup_user_password: ;
		printf("\n\n\n\n\t\t\t\t\t\tCreate Password\n\n");
		retype_password_length: ;
	    printf("\t\t\t\t\t\tPassword: ");
	    char kkh;
	    int bbb=0;
    	while((kkh=getch())!=13)
    	{
	    	if(bbb>0 && kkh==8)
	    	{
	    		bbb--;
	   		    printf("\b \b");
	    	}
	    	else if(kkh==8 && bbb==0)
	    	{
		    	printf(" \b");
	    	}
	    	else
	    	{
		    	setup_user_password_1[bbb]=kkh;
	        	printf("*");
	        	bbb++;
	    	}
    	}
	    setup_user_password_1[bbb]='\0';
	    int c=strlen(setup_user_password_1);	
	    printf("\n\n\t\t\t\t\t\tRetype Password: ");
	    char kh;
    	int aaa=0;
    	while((kh=getch())!=13)
    	{
    		if(aaa>0 && kh==8)
    		{
    			aaa--;
			    printf("\b \b");
     		}
    		else if(kh==8 && aaa==0)
     		{
    			printf(" \b");
    		}
	    	else
     		{
     			setup_user_password_2[aaa]=kh;
     	    	printf("*");
    	    	aaa++;
	    	}
    	}
    	setup_user_password_2[aaa]='\0';	
	    int d=strlen(setup_user_password_2);
	    if(c!=d)
	    {
	      	printf("\n\n\t\t\t\t\t\tYour Entered Password Length Didn't Matched\n\n");
	    	goto retype_password_length;
	    }
	    int equality_2=strcmp(setup_user_password_1,setup_user_password_2);
    	if(equality_2!=0)
     	{
     		system("cls");
	    	printf("\n\n\n\n\n\n\t\t\t\t\t\tPassword didnot match\n\n");
	    	printf("\t\t\t\t\t\tPlease Enter Password Correct");
	    	goto setup_user_password;
	    }

		FILE *ptr;
		ptr=fopen(security_2,"w");
		if(ptr==NULL)
		{
			printf("\n\t\t\t\t\t\tUnable to reset password\n");
			exit(0);
		}
		system("cls");
		encrypt_name_2(setup_user_password_2);
		fprintf(ptr,"%s",setup_user_password_2);
		fclose(ptr);
		system("color 0F");
        char a = 177, b = 219;
        printf("\n\n\n\n");
        printf("\n\n\n\n\t\t\t\t\tResetting...\n\n");
        printf("\t\t\t\t\t");
        int i;
        for ( i = 0; i < 50; i++)
        {
         	printf("%c", a);
    	}
        printf("\r");
        printf("\t\t\t\t\t");
        for ( i = 0; i < 50; i++)
        {
            printf("%c", b);
            Sleep(20);
        }
	    PlaySound(TEXT("reset.wav"),NULL,SND_ASYNC);
		Sleep(1200);
		system("cls");
		printf("\n\n\n\n\n\n\t\t\t\t\t\tPassword Reset Sucessfully\n\n\n");
		return 1;
	}
}
void open_log_sheet(char *p)
{
	int i;
	char c;
	char dh[100], eh[45];
	for(i=0; p[i]!='\0'; i++)
	{
		dh[i]=p[i];
	}
	dh[i]='\0';
	sprintf(eh,"%s_logsheet.txt",dh);
	FILE *log_sheet;
	log_sheet=fopen(eh,"r");
	if(log_sheet==NULL)
	{
		printf("\t\t\t\t\t\tUnable to Open Log Sheet");
		exit(0);
		
	}
	while((fscanf(log_sheet,"%c",&c))!= EOF)
        {
        		if(c=='\n')
        		{
        			printf("\t\t\t\t\t");
				}
        		printf("%c",c);
        }
            fclose(log_sheet);
}
