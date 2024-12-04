#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

//Declaring Variables Patient
struct Patient
{
    char p_name[50];
    char p_addr[100];
    char p_disease[50];
    int p_age,p_tel,p_cabin,p_type;
}p[100];

//Declaring Variables Doctors
struct Doctors
{
    char d_name[50],d_spec[50],d_date[20],d_time[10];
    int d_id,d_appcount,d_chrg;
}d[23];

//Declaring Testing Variables
int testpatcount=0,test;
struct Test
{
    char t_name[50];
    float t_amount;
}t[10];

//Declaring Room Reservation & Billing Variables
int roomNo,roompatcount=0,rToken,rMeal,rDays;
float rAC=12000,rNonAC=8500,rServiceCrg=2450.50,rFacilities=899.90,rVeg=300,rNVeg=390.50,rMedic,rTotbill,rTot;
struct Rooms
{
    int Room;
}r[100];

//Declaring Variables Medicines
int mItems=0,medicpatcount=0;
float mPrice,mAmount,mTotbill=0,mTot=0;
char mName[50],mProceed;

//Declaring Channeling Variables
int k,l,m,chlpatcount=0,chlFee,chlTotal;
float HosChrg=850.50;

//Declaring Common Function Variables
int i,j,totpat=0,cabincount=0;
float LHfund=0;
char appoint,tempPrint;

//Doctor Data Function
void doctorData()
{
    d[0].d_id = 1;
    strcpy(d[0].d_name,"Dr.N.Rosa");
    strcpy(d[0].d_spec,"Neurologist");
    strcpy(d[0].d_date,"Saturday");
    strcpy(d[0].d_time,"05:30PM");
    d[0].d_appcount = 0;
    d[0].d_chrg = 1400;

    d[1].d_id = 2;
    strcpy(d[1].d_name,"Dr.Supun");
    strcpy(d[1].d_spec,"Neurologist");
    strcpy(d[1].d_date,"Monday & Wednesday");
    strcpy(d[1].d_time,"04:30PM");
    d[1].d_appcount = 0;
    d[1].d_chrg = 1300;

    d[2].d_id = 3;
    strcpy(d[2].d_name,"Dr.M.Theekshana");
    strcpy(d[2].d_spec,"Dermatologist");
    strcpy(d[2].d_date,"Sunday");
    strcpy(d[2].d_time,"06:00PM");
    d[2].d_appcount = 0;
    d[2].d_chrg = 1250;

    d[3].d_id = 4;
    strcpy(d[3].d_name,"Dr.C.Karunarathne");
    strcpy(d[3].d_spec,"Dermatologist");
    strcpy(d[3].d_date,"Saturday");
    strcpy(d[3].d_time,"05:30PM");
    d[3].d_appcount = 0;
    d[3].d_chrg = 1150;

    d[4].d_id = 5;
    strcpy(d[4].d_name,"Dr.D.D.Samarakoon");
    strcpy(d[4].d_spec,"Dental Surgeon");
    strcpy(d[4].d_date,"Saturday & Monday");
    strcpy(d[4].d_time,"07:30AM");
    d[4].d_appcount = 0;
    d[4].d_chrg = 1000;

    d[5].d_id = 6;
    strcpy(d[5].d_name,"Dr.Chamika");
    strcpy(d[5].d_spec,"Dental Surgeon");
    strcpy(d[5].d_date,"Friday");
    strcpy(d[5].d_time,"05:30PM");
    d[5].d_appcount = 0;
    d[5].d_chrg = 1050;

    d[6].d_id = 7;
    strcpy(d[6].d_name,"Dr.Asanthi");
    strcpy(d[6].d_spec,"Dental Surgeon");
    strcpy(d[6].d_date,"Thursday");
    strcpy(d[6].d_time,"10:30AM");
    d[6].d_appcount = 0;
    d[6].d_chrg = 1200;

    d[7].d_id = 8;
    strcpy(d[7].d_name,"Dr.Priyanka");
    strcpy(d[7].d_spec,"Eye Surgeon");
    strcpy(d[7].d_date,"Saturday");
    strcpy(d[7].d_time,"05:00PM");
    d[7].d_appcount = 0;
    d[7].d_chrg = 1500;

    d[8].d_id = 9;
    strcpy(d[8].d_name,"Dr.M.Jayawardhana");
    strcpy(d[8].d_spec,"Eye Surgeon");
    strcpy(d[8].d_date,"Sunday & Monday");
    strcpy(d[8].d_time,"03:30PM");
    d[8].d_appcount = 0;
    d[8].d_chrg = 1400;

    d[9].d_id = 10;
    strcpy(d[9].d_name,"Dr.Sampath");
    strcpy(d[9].d_spec,"Cardiologist");
    strcpy(d[9].d_date,"Saturday & Thursday");
    strcpy(d[9].d_time,"04:30PM");
    d[9].d_appcount = 0;
    d[9].d_chrg = 1300;

    d[10].d_id = 11;
    strcpy(d[10].d_name,"Dr.Thusitha");
    strcpy(d[10].d_spec,"Cardiologist");
    strcpy(d[10].d_date,"Friday");
    strcpy(d[10].d_time,"03:20PM");
    d[10].d_appcount = 0;
    d[10].d_chrg = 1350;

    d[11].d_id = 12;
    strcpy(d[11].d_name,"Dr.Dilshan");
    strcpy(d[11].d_spec,"Cardiologist");
    strcpy(d[11].d_date,"Monday");
    strcpy(d[11].d_time,"07:00AM");
    d[11].d_appcount = 0;
    d[11].d_chrg = 1400;

    d[12].d_id = 13;
    strcpy(d[12].d_name,"Dr.Athukorala");
    strcpy(d[12].d_spec,"Obstetrics And Gynecology");
    strcpy(d[12].d_date,"Wednesday");
    strcpy(d[12].d_time,"04:30PM");
    d[12].d_appcount = 0;
    d[12].d_chrg = 1700;

    d[13].d_id = 14;
    strcpy(d[13].d_name,"Dr.I.Udana");
    strcpy(d[13].d_spec,"Obstetrics And Gynecology");
    strcpy(d[13].d_date,"Saturday");
    strcpy(d[13].d_time,"05:10PM");
    d[13].d_appcount = 0;
    d[13].d_chrg = 1575;

    d[14].d_id = 15;
    strcpy(d[14].d_name,"Dr.Sasinda");
    strcpy(d[14].d_spec,"Physician");
    strcpy(d[14].d_date,"Thursday");
    strcpy(d[14].d_time,"05:30PM");
    d[14].d_appcount = 0;
    d[14].d_chrg = 1100;

    d[15].d_id = 16;
    strcpy(d[15].d_name,"Dr.W.Hasaranga");
    strcpy(d[15].d_spec,"Physician");
    strcpy(d[15].d_date,"Saturday");
    strcpy(d[15].d_time,"07:30AM");
    d[15].d_appcount = 0;
    d[15].d_chrg = 1200;

    d[16].d_id = 17;
    strcpy(d[16].d_name,"Dr.Gamini");
    strcpy(d[16].d_spec,"Surgeon");
    strcpy(d[16].d_date,"Monday");
    strcpy(d[16].d_time,"05:15PM");
    d[16].d_appcount = 0;
    d[16].d_chrg = 1800;

    d[17].d_id = 18;
    strcpy(d[17].d_name,"Dr.P.Nissanka");
    strcpy(d[17].d_spec,"Surgeon");
    strcpy(d[17].d_date,"Thursday");
    strcpy(d[17].d_time,"03:30PM");
    d[17].d_appcount = 0;
    d[17].d_chrg = 1650;

    d[18].d_id = 19;
    strcpy(d[18].d_name,"Dr.Sadeera");
    strcpy(d[18].d_spec,"Rheumatologist");
    strcpy(d[18].d_date,"Monday");
    strcpy(d[18].d_time,"06:00PM");
    d[18].d_appcount = 0;
    d[18].d_chrg = 1500;

    d[19].d_id = 20;
    strcpy(d[19].d_name,"Dr.Himantha");
    strcpy(d[19].d_spec,"Rheumatologist");
    strcpy(d[19].d_date,"Friday");
    strcpy(d[19].d_time,"07:30AM");
    d[19].d_appcount = 0;
    d[19].d_chrg = 1450;

    d[20].d_id = 21;
    strcpy(d[20].d_name,"Dr.Kumari");
    strcpy(d[20].d_spec,"Psychologist");
    strcpy(d[20].d_date,"Wednesday");
    strcpy(d[20].d_time,"05:30PM");
    d[20].d_appcount = 0;
    d[20].d_chrg = 1300;

    d[21].d_id = 22;
    strcpy(d[21].d_name,"Dr.Buddi");
    strcpy(d[21].d_spec,"Psychologist");
    strcpy(d[21].d_date,"Monday & Friday");
    strcpy(d[21].d_time,"05:00PM");
    d[21].d_appcount = 0;
    d[21].d_chrg = 1150;

    d[22].d_id = 23;
    strcpy(d[22].d_name,"Dr.Sandaruwani");
    strcpy(d[22].d_spec,"Psychologist");
    strcpy(d[22].d_date,"Sunday & Friday");
    strcpy(d[22].d_time,"07:00AM");
    d[22].d_appcount = 0;
    d[22].d_chrg = 900;
}

//Patients Data Input Function
void getPatData()
{
    printf("Already added %d patient(s) on the database !!!\n",totpat);
    printf("Next Cabin No:[%d]\n\n",cabincount+1);
    j=cabincount+1;
    for(i=cabincount;i<j;i++)
    {
        fflush(stdin);
        printf("Enter Patient Name: ");
        gets(p[i].p_name);
        fflush(stdin);
        printf("Enter Patient Address: ");
        gets(p[i].p_addr);
        fflush(stdin);
        printf("Enter Patient Disease: ");
        gets(p[i].p_disease);
        fflush(stdin);
        printf("Enter Patient Age: ");
        scanf("%d",&p[i].p_age);
        fflush(stdin);
        printf("Enter Patient Contact No: ");
        scanf("%d",&p[i].p_tel);
        fflush(stdin);
        printf("Enter Patient Cabin No: ");
        scanf("%d",&p[i].p_cabin);
        printf("\n");
        cabincount++;
        totpat++;
    }
}

//Doctor Specialty Selection
int doctorSpec()
{
    printf("\n-Select Doctor Specialty-\n\n1.Neurologist\n2.Dermatologist\n3.Dental Surgeon\n4.Eye Surgeon\n5.Cardiologist\n6.Obstetrics And Gynecology\n7.Physician\n");
    printf("8.Surgeon\n9.Rheumatology\n10.Psychologist\n");
    printf("\nEnter Specialty: ");
    scanf("%d",&k);
    printf("\n\n");
    return k;
}

//Selected Doctor Data Function
void doctorType(int x)
{
    if(x==1)
  {
      for(l=0;l<2;l++)
      {
          printf("Doctor ID: %d\n",d[l].d_id);
          printf("Doctor Name: %s\n",d[l].d_name);
          printf("Doctor Specialty: %s\n",d[l].d_spec);
          printf("Doctor Date: %s\n",d[l].d_date);
          printf("Doctor Time: %s\n",d[l].d_time);
          printf("Current Appointment Count: %d\n",d[l].d_appcount);
          printf("Doctor Fee: Rs.%d/=\n\n",d[l].d_chrg);
      }
  }
  else if(x==2)
  {
      for(l=2;l<4;l++)
      {
          printf("Doctor ID: %d\n",d[l].d_id);
          printf("Doctor Name: %s\n",d[l].d_name);
          printf("Doctor Specialty: %s\n",d[l].d_spec);
          printf("Doctor Date: %s\n",d[l].d_date);
          printf("Doctor Time: %s\n",d[l].d_time);
          printf("Current Appointment Count: %d\n",d[l].d_appcount);
          printf("Doctor Fee: Rs.%d/=\n\n",d[l].d_chrg);
      }
  }
  else if(x==3)
  {
      for(l=4;l<7;l++)
      {
          printf("Doctor ID: %d\n",d[l].d_id);
          printf("Doctor Name: %s\n",d[l].d_name);
          printf("Doctor Specialty: %s\n",d[l].d_spec);
          printf("Doctor Date: %s\n",d[l].d_date);
          printf("Doctor Time: %s\n",d[l].d_time);
          printf("Current Appointment Count: %d\n",d[l].d_appcount);
          printf("Doctor Fee: Rs.%d/=\n\n",d[l].d_chrg);
      }
  }
  else if(x==4)
  {
      for(l=7;l<9;l++)
      {
          printf("Doctor ID: %d\n",d[l].d_id);
          printf("Doctor Name: %s\n",d[l].d_name);
          printf("Doctor Specialty: %s\n",d[l].d_spec);
          printf("Doctor Date: %s\n",d[l].d_date);
          printf("Doctor Time: %s\n",d[l].d_time);
          printf("Current Appointment Count: %d\n",d[l].d_appcount);
          printf("Doctor Fee: Rs.%d/=\n\n",d[l].d_chrg);
      }
  }
  else if(x==5)
  {
      for(l=9;l<12;l++)
      {
          printf("Doctor ID: %d\n",d[l].d_id);
          printf("Doctor Name: %s\n",d[l].d_name);
          printf("Doctor Specialty: %s\n",d[l].d_spec);
          printf("Doctor Date: %s\n",d[l].d_date);
          printf("Doctor Time: %s\n",d[l].d_time);
          printf("Current Appointment Count: %d\n",d[l].d_appcount);
          printf("Doctor Fee: Rs.%d/=\n\n",d[l].d_chrg);
      }
  }
  else if(x==6)
  {
      for(l=12;l<14;l++)
      {
          printf("Doctor ID: %d\n",d[l].d_id);
          printf("Doctor Name: %s\n",d[l].d_name);
          printf("Doctor Specialty: %s\n",d[l].d_spec);
          printf("Doctor Date: %s\n",d[l].d_date);
          printf("Doctor Time: %s\n",d[l].d_time);
          printf("Current Appointment Count: %d\n",d[l].d_appcount);
          printf("Doctor Fee: Rs.%d/=\n\n",d[l].d_chrg);
      }
  }
  else if(x==7)
  {
      for(l=14;l<16;l++)
      {
          printf("Doctor ID: %d\n",d[l].d_id);
          printf("Doctor Name: %s\n",d[l].d_name);
          printf("Doctor Specialty: %s\n",d[l].d_spec);
          printf("Doctor Date: %s\n",d[l].d_date);
          printf("Doctor Time: %s\n",d[l].d_time);
          printf("Current Appointment Count: %d\n",d[l].d_appcount);
          printf("Doctor Fee: Rs.%d/=\n\n",d[l].d_chrg);
      }
  }
  else if(x==8)
  {
      for(l=16;l<18;l++)
      {
          printf("Doctor ID: %d\n",d[l].d_id);
          printf("Doctor Name: %s\n",d[l].d_name);
          printf("Doctor Specialty: %s\n",d[l].d_spec);
          printf("Doctor Date: %s\n",d[l].d_date);
          printf("Doctor Time: %s\n",d[l].d_time);
          printf("Current Appointment Count: %d\n",d[l].d_appcount);
          printf("Doctor Fee: Rs.%d/=\n\n",d[l].d_chrg);
      }
  }
  else if(x==9)
  {
      for(l=18;l<20;l++)
      {
          printf("Doctor ID: %d\n",d[l].d_id);
          printf("Doctor Name: %s\n",d[l].d_name);
          printf("Doctor Specialty: %s\n",d[l].d_spec);
          printf("Doctor Date: %s\n",d[l].d_date);
          printf("Doctor Time: %s\n",d[l].d_time);
          printf("Current Appointment Count: %d\n",d[l].d_appcount);
          printf("Doctor Fee: Rs.%d/=\n\n",d[l].d_chrg);
      }
  }
  else if(x==10)
  {
      for(l=20;l<23;l++)
      {
          printf("Doctor ID: %d\n",d[l].d_id);
          printf("Doctor Name: %s\n",d[l].d_name);
          printf("Doctor Specialty: %s\n",d[l].d_spec);
          printf("Doctor Date: %s\n",d[l].d_date);
          printf("Doctor Time: %s\n",d[l].d_time);
          printf("Current Appointment Count: %d\n",d[l].d_appcount);
          printf("Doctor Fee: Rs.%d/=\n\n",d[l].d_chrg);
      }
  }
  else if(x<1||x>10)
  {
      printf("Enter Valid Doctor Specialty !\n\n");
      system("cls");
  }
}

//Channeling Bill Print Function
void chlBill()
{
    printf("If you wish to proceed for an appointment?[Y/N]: ");
    scanf("%c",&appoint);
    fflush(stdin);
    if((appoint=='y')||(appoint=='Y'))
    {
        printf("Enter Doctor ID: ");
        scanf("%d",&m);
        fflush(stdin);
        printf("Print?[Y/N]: ");
        scanf("%c",&tempPrint);
        fflush(stdin);
        chlpatcount++;
        system("cls");
        if((tempPrint=='y')||(tempPrint=='Y'))
        {
           printf("Patient Name: ");Sleep(500);
           puts(p[totpat-1].p_name);Sleep(500);
           printf("Patient Age: %d",p[totpat-1].p_age);Sleep(500);
           printf("\nCabin No: %d\n\n\n",p[totpat-1].p_cabin);Sleep(500);
           printf("Doctor: ");Sleep(500);
           puts(d[m-1].d_name);Sleep(500);
           printf("Doctor Specialty: ");Sleep(500);
           puts(d[m-1].d_spec);Sleep(500);
           printf("Doctor Time: ");Sleep(500);
           puts(d[m-1].d_time);Sleep(500);
           printf("\n\n");Sleep(500);
           printf("Appointment Fee= Rs.%.2f/=",d[m-1].d_chrg+HosChrg);Sleep(500);
           printf("\n\n");
           d[m-1].d_appcount=d[m-1].d_appcount+1;
           p[totpat-1].p_type = 1;
           system("pause");
           system("cls");
        }
        else if((tempPrint=='n')||(tempPrint=='N'))
        {
            d[m-1].d_appcount=d[m-1].d_appcount+1;
            p[totpat-1].p_type = 1;
            system("pause");
            system("cls");
        }
    }
    else if((appoint=='n')||(appoint=='N'))
    {
        totpat--;
        cabincount--;
        system("pause");
        system("cls");
    }
}

//Function 02
void viewPatDet()
{
    if(totpat==0)
    {
        system("cls");
        printf("There Are No Patient(s) Details !\n\n");
    }
    else
    {
        printf("Retrieving %d Patient(s) Details...",totpat);Sleep(2000);printf("\n\n");
        for(int x=0;x<totpat;x++)
        {
           printf("Patient No: %d\n",x+1);
           switch(p[x].p_type)
           {
               case 1:printf("Patient Type: 'Channeling'\n");break;
               case 2:printf("Patient Type: 'Testing'\n");break;
               case 3:printf("Patient Type: 'Rooms'\n");break;
               case 4:printf("Patient Type: 'Medicines'\n");break;
               default:printf("Patient Type: undefined!\n");
           }
           printf("Patient Name: %s\n",p[x].p_name);Sleep(200);
           printf("Patient Address: %s\n",p[x].p_addr);Sleep(200);
           printf("Patient Disease: %s\n",p[x].p_disease);Sleep(200);
           printf("Patient Age: %d\n",p[x].p_age);Sleep(200);
           printf("Patient Cabin No: %d\n\n",p[x].p_cabin);Sleep(200);
        }
    }
}

//Function 03
void viewDocDet()
{
    printf("Doctors Data Retrieving...");Sleep(2000);printf("\n\n");
    for(int x=0;x<23;x++)
    {
        printf("Doctor ID: %d\n",d[x].d_id);Sleep(200);
        printf("Doctor Name: %s\n",d[x].d_name);Sleep(200);
        printf("Doctor Specialty: %s\n",d[x].d_spec);Sleep(200);
        printf("Doctor Date: %s\n",d[x].d_date);Sleep(200);
        printf("Doctor Time: %s\n",d[x].d_time);Sleep(200);
        printf("Current Appointment Count: %d\n",d[x].d_appcount);Sleep(200);
        printf("Doctor Fee: Rs.%d/=\n\n",d[x].d_chrg);Sleep(200);
    }
    Sleep(1000);
    printf("Doctors Data Retrieved Successfully...\n");
}

//Testing Data Function
void testData()
{
    strcpy(t[0].t_name,"X-Ray");
    t[0].t_amount = 1800;

    strcpy(t[1].t_name,"Blood Test");
    t[1].t_amount = 475.50;

    strcpy(t[2].t_name,"Allergy Test");
    t[2].t_amount = 1275.75;

    strcpy(t[3].t_name,"MRI Scan");
    t[3].t_amount = 23250.50;

    strcpy(t[4].t_name,"Urinalysis");
    t[4].t_amount = 1550.50;

    strcpy(t[5].t_name,"Hearing Test");
    t[5].t_amount = 1770.25;

    strcpy(t[6].t_name,"ECG Test");
    t[6].t_amount = 1820.75;

    strcpy(t[7].t_name,"Vision Test");
    t[7].t_amount = 350;

    strcpy(t[8].t_name,"Pregnancy Test");
    t[8].t_amount = 2250.50;

    strcpy(t[9].t_name,"CT Scan");
    t[9].t_amount = 1330.50;
}

//Testing Bill Print Function
void testBill()
{
    printf("*Available Test List*\n\n");
    printf("1.X_Ray\n2.Blood Test\n3.Allergy Test\n4.MRI Scan\n5.Urinalysis\n6.Hearing Test\n7.ECG Test\n8.Vision Test\n9.Pregnancy Test\n10.CT Scan\n");
    printf("\nEnter Test No: ");
    scanf("%d",&test);
    fflush(stdin);
    printf("If you wish to proceed for a test?[Y/N]: ");
    scanf("%c",&appoint);
    fflush(stdin);
    if((appoint=='y')||(appoint=='Y'))
    {
       printf("Print?[Y/N]: ");
       scanf("%c",&tempPrint);
       fflush(stdin);
       system("cls");
       testpatcount++;
       p[totpat-1].p_type = 2;
       if((tempPrint=='y')||(tempPrint=='Y'))
       {
          printf("Printing Bill...");Sleep(2000);printf("\n\n");
          printf("Patient Name: ");Sleep(200);
          puts(p[totpat-1].p_name);
          printf("Patient Age: %d",p[totpat-1].p_age);Sleep(200);
          printf("\nCabin No: %d\n\n\n",p[totpat-1].p_cabin);Sleep(200);
          printf("- Test Details -\n\n");
          switch(test)
          {
             case 1:printf("Test: %s\n",t[test-1].t_name);Sleep(200);printf("Test Fee: Rs.%.2f/=",t[test-1].t_amount);Sleep(200);break;
             case 2:printf("Test: %s\n",t[test-1].t_name);Sleep(200);printf("Test Fee: Rs.%.2f/=",t[test-1].t_amount);Sleep(200);break;
             case 3:printf("Test: %s\n",t[test-1].t_name);Sleep(200);printf("Test Fee: Rs.%.2f/=",t[test-1].t_amount);Sleep(200);break;
             case 4:printf("Test: %s\n",t[test-1].t_name);Sleep(200);printf("Test Fee: Rs.%.2f/=",t[test-1].t_amount);Sleep(200);break;
             case 5:printf("Test: %s\n",t[test-1].t_name);Sleep(200);printf("Test Fee: Rs.%.2f/=",t[test-1].t_amount);Sleep(200);break;
             case 6:printf("Test: %s\n",t[test-1].t_name);Sleep(200);printf("Test Fee: Rs.%.2f/=",t[test-1].t_amount);Sleep(200);break;
             case 7:printf("Test: %s\n",t[test-1].t_name);Sleep(200);printf("Test Fee: Rs.%.2f/=",t[test-1].t_amount);Sleep(200);break;
             case 8:printf("Test: %s\n",t[test-1].t_name);Sleep(200);printf("Test Fee: Rs.%.2f/=",t[test-1].t_amount);Sleep(200);break;
             case 9:printf("Test: %s\n",t[test-1].t_name);Sleep(200);printf("Test Fee: Rs.%.2f/=",t[test-1].t_amount);Sleep(200);break;
             case 10:printf("Test: %s\n",t[test-1].t_name);Sleep(200);printf("Test Fee: Rs.%.2f/=",t[test-1].t_amount);Sleep(200);break;
             default:printf("Enter Valid Test Number !");
          }
           printf("\n\n\n");
           system("pause");
           system("cls");
       }
       else if((tempPrint=='n')||(tempPrint=='N'))
       {
        system("pause");
        system("cls");
       }
    }
    else if((appoint=='n')||(appoint=='N'))
    {
        totpat--;
        cabincount--;
        system("pause");
        system("cls");
    }
}

//Room Reservations Function
void roomRes()
{
    printf("-AC Room Numbers 1-60/Non-AC Room Numbers 61-100-\n\n");
    printf("Enter Room No: ");
    scanf("%d",&roomNo);
    for(;;)
    {
        if((roomNo<1)||(roomNo>100))
       {
           printf("\nSelected Room Number is Invalid !\n");
           printf("Enter Valid Room Number Again: ");
           scanf("%d",&roomNo);
           continue;
       }
        if(r[roomNo-1].Room==1)
        {
            printf("\nSelected Room Number is Already Booked !\n");
            printf("Select Another Room No: ");
            scanf("%d",&roomNo);
            fflush(stdin);
        }
        else if(r[roomNo-1].Room==0)
        {
           r[roomNo-1].Room=1;
           roompatcount++;
           p[totpat-1].p_type = 3;
           break;
        }
    }
    system("cls");
    printf("You're Welcome !!!\n\n");
    printf("Your Room No: %d",roomNo);
    if((roomNo>=1)&&(roomNo<=60))
    {
        printf("\nRoom Type: AC\n");
    }
    else if((roomNo>60)&&(roomNo<=100))
    {
        printf("\nRoom Type: Non-AC\n");
    }
    printf("Token Number '%d' Belongs to",roomNo);
    printf(" Mr/Ms/.%s",p[totpat-1].p_name);
    printf("\n\n***THANK YOU***\n\n");
    system("pause");
}

//Room Billing Function
void roomBill()
{
    for(int x=0;x<1;x++)
    {
       printf("Enter Your Room Token: ");
       scanf("%d",&rToken);
       if((rToken<1)||(rToken>100))
       {
           printf("\nInvalid Room Token !\n");
           printf("Function Self Terminating in 2 sec...");Sleep(2000);
           break;
       }
       if(r[rToken-1].Room==0)
       {
           printf("\n-Selected Room Number is not Registered !-\n");
           system("pause");
           break;
       }
       printf("Enter the meal type you have been chosen[1-Veg/2-Non Veg]: ");
       scanf("%d",&rMeal);
       printf("Enter the charges for Medicines: ");
       scanf("%f",&rMedic);
       printf("Enter the No.of days has been admitted: ");
       scanf("%d",&rDays);
       fflush(stdin);
       printf("Print?[Y/N]: ");
       scanf("%c",&tempPrint);
       fflush(stdin);
       system("cls");
       if((tempPrint=='y')||(tempPrint=='Y'))
       {
          printf("Printing...");Sleep(2000);printf("\n\n");
          if((rToken>=1)&&(rToken<=60))
          {
             rTotbill=rTotbill+(rAC*rDays);
             printf("Room Charges : Rs.%.2f * %d\n",rAC,rDays);
          }
          else if((rToken>60)&&(rToken<=100))
          {
             rTotbill=rTotbill+(rNonAC*rDays);
             printf("Room Charges : Rs.%.2f * %d\n",rNonAC,rDays);
          }
          if(rMeal==1)
          {
             rTotbill=rTotbill+(rVeg*3*rDays);
             printf("Charges for Meal: Rs.%.2f * 3 * %d\n",rVeg,rDays);
          }
          else if(rMeal==2)
          {
             rTotbill=rTotbill+(rNVeg*3*rDays);
             printf("Charges for Meal: Rs.%.2f * 3 * %d\n",rNVeg,rDays);
          }
          rTotbill=rTotbill+(rMedic*rDays);
          printf("Charges for Medications: Rs.%.2f * %d\n",rMedic,rDays);
          rTotbill=rTotbill+rServiceCrg;
          printf("Service Charges: Rs.%.2f\n",rServiceCrg);
          rTotbill=rTotbill+(rFacilities*rDays);
          printf("Charges for Facilities: Rs.%.2f * %d\n\n",rFacilities,rDays);
          printf("Your Total Bill is: Rs.%.2f",rTotbill);
          rTot=rTot+rTotbill;
          printf("\n\n");
          system("pause");
       }
       else if((tempPrint=='n')||(tempPrint=='N'))
       {
           if((rToken>=1)&&(rToken<=60))
           {
               rTotbill=rTotbill+(rAC*rDays);
           }
           else if((rToken>60)&&(rToken<=100))
           {
               rTotbill=rTotbill+(rNonAC*rDays);
           }
           if(rMeal==1)
           {
               rTotbill=rTotbill+(rVeg*3*rDays);
           }
           else if(rMeal==2)
           {
               rTotbill=rTotbill+(rNVeg*3*rDays);
           }
           rTotbill=rTotbill+(rMedic*rDays);
           rTotbill=rTotbill+rServiceCrg;
           rTotbill=rTotbill+(rFacilities*rDays);
           rTot=rTot+rTotbill;
           system("pause");
           system("cls");
       }
    }
}

//Medicines Function
void medic()
{
    for(int x=0;x>=0;x++)
    {
        fflush(stdin);
        printf("Enter Medicine Name: ");
        gets(mName);
        printf("Enter Unit Price: ");
        scanf("%f",&mPrice);
        printf("Enter the Amount: ");
        scanf("%f",&mAmount);
        fflush(stdin);
        mTotbill=mTotbill+(mPrice*mAmount);
        mItems++;
        printf("Would you like to add more ? (If Yes press 'Y'/ If No press 'N'): ");
        scanf("%c",&mProceed);
        fflush(stdin);
        if((mProceed=='Y')||(mProceed=='y'))
        {
            printf("\n");
            continue;
        }
        else if((mProceed=='N')||(mProceed=='n'))
        {
            break;
        }
    }
        p[totpat-1].p_type=4;
        medicpatcount++;
        mTot=mTot+mTotbill;
        printf("Print?[Y/N]: ");
        scanf("%c",&tempPrint);
        fflush(stdin);
        system("cls");
        if((tempPrint=='y')||(tempPrint=='Y'))
        {
            printf("Printing Bill...");Sleep(2000);printf("\n\n");
            printf("Patient Name: ");Sleep(200);
            puts(p[totpat-1].p_name);
            printf("Patient Age: %d",p[totpat-1].p_age);Sleep(200);
            printf("\nCabin No: %d\n\n\n",p[totpat-1].p_cabin);Sleep(200);
            printf("No.of Items: %d\n",mItems);Sleep(200);
            printf("Total Amount: %.2f\n",mTotbill);Sleep(200);
            system("pause");
        }
        else if((tempPrint=='n')||(tempPrint=='N'))
        {
            system("cls");
            system("pause");
        }
}

//Little Hearts Fund
float fund(float x,float y)
{
  LHfund=(x*3/100)+(y*2/100);
  return LHfund;
}

//Report Function
void report()
{
   printf("Getting Report...");Sleep(2000);printf("\n\n");Sleep(300);
   printf("No.of Patients have been recorded yet: %d\n",totpat);Sleep(300);
   printf("No.of Channeling Patients     :%d\n",chlpatcount);Sleep(300);
   printf("No.of Testing Patients        :%d\n",testpatcount);Sleep(300);
   printf("No.of Room admitted Patients  :%d\n",roompatcount);Sleep(300);
   printf("No.of Patients took Medicines :%d\n",medicpatcount);Sleep(300);
   printf("\n\n");
   printf("Income from Rooms     :%.2f\n",rTot);Sleep(300);
   printf("Income from Medicines :%.2f\n",mTot);
   printf("Little Hearts Fund    :%.3f\n\n",fund(rTot,mTot));
   printf("Report Ended...");Sleep(1000);printf("\n\n");
   system("pause");

}

//File Read Function
void fileread()
{
    FILE *fpatients = fopen("patientsdata.txt","r");
    if(fpatients==NULL)
    {
        fpatients=fopen("patientsdata.txt","w");
        fclose(fpatients);
        printf("Patients Data File does not exist,Creating new file...");Sleep(2000);
        printf("\n\n");
    }
    totpat=fread(p,sizeof(struct Patient),100,fpatients);
    fclose(fpatients);
}

//File Write Function
void filewrite()
{
    FILE *fpatients=fopen("patientsdata.txt","w");
    if(fpatients==NULL)
    {
        printf("Error ! No Data...");Sleep(2000);
        exit(1);
        system("cls");
    }
    fwrite(p,sizeof(struct Patient),totpat,fpatients);
    fclose(fpatients);
}

//Manual Data Saving Function
void manualwrite()
{
    printf("Saving Data...");Sleep(2000);printf("\n\n");
    filewrite();
    printf("Data Saved Successfully !");Sleep(300);printf("\n");
    system("pause");
}

int main()
{
    fileread();
    doctorData();
    testData();
    for(int a=0;a<100;a++)//Preassign Room Values
    {
        r[a].Room=0;
    }
    int c;
    while(c!=10)
    {
        printf("***Enter Billing Option***\n\n1. Channeling\n2. View Patient Details\n3. View Doctor Details\n4. Testing\n5. Room Reservations\n6. Room Billing\n7. Medicines\n8. Data Report\n9. Save Patient's Data Manually\n10.Exit\n\nEnter Selection: ");
        scanf("%d",&c);
        fflush(stdin);
        if(c==1)
        {
            system("cls");
            for(int x=0;x<1;x++)
            {
              getPatData();
              doctorSpec();
              doctorType(k);
              fflush(stdin);
              chlBill();
              fflush(stdin);
            }
        }
        else if(c==2)
        {
            system("cls");
            viewPatDet();
            system("pause");
            system("cls");
        }
        else if(c==3)
        {
            system("cls");
            viewDocDet();
            system("pause");
            system("cls");
        }
        else if(c==4)
        {
            system("cls");
            for(int x=0;x<1;x++)
            {
               getPatData();
               fflush(stdin);
               testBill();
               fflush(stdin);
            }
        }
        else if(c==5)
        {
            system("cls");
            for(int x=0;x<1;x++)
            {
               getPatData();
               fflush(stdin);
               roomRes();
               fflush(stdin);
               system("cls");
            }
        }
        else if(c==6)
        {
            system("cls");
            rTotbill=0;
            roomBill();
            system("cls");
        }
        else if(c==7)
        {
            system("cls");
            mItems=0;mTotbill=0;
            for(int x=0;x<1;x++)
            {
                getPatData();
                fflush(stdin);
                medic();
                fflush(stdin);
                system("cls");
            }
        }
        else if(c==8)
        {
            system("cls");
            report();
            fflush(stdin);
            system("cls");
        }
        else if(c==9)
        {
            system("cls");
            manualwrite();
            system("cls");
        }
        else if(c==10)
        {
            filewrite();
            system("cls");
            printf("Delete the Data File Before Relaunching !!!\nSelf Terminating in 3 Sec...");Sleep(3000);printf("\n");
            return 0;
        }
        else
        {
            system("cls");
            printf("Invalid Selection, Try Again in 3 Seconds !");Sleep(3000);
            system("cls");
        }
    }
}
