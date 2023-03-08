#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<windows.h>

//function prototype declare: Feature
void adminsignup();
void adminsignin();
void signup();

//function prototype declare: Feature
void adminsignup();
void adminsignin();
void signup();
void signin();
void doctorsignup();
void doctorsignin();
void password();
void welcomescreen();
void insurance_1();
void doctorinformation();
void contact_1();
void exit1();
void exit2();
void title();
void doctorlist1();
void patientprofile();
void patientinfo();
void search_doctor();
void appointment();
void discharge_patient();
void mainmenu();
void pic();






//Global variable
char result=0;
int temp,number;
int count=0;
int i,j,num,sum;



//point global file name
FILE *doctor;
FILE *patient;
FILE *insurance;
FILE *learn;
FILE *contact;
FILE *family;
FILE *temporary_file;
FILE *signUp;
FILE *signIn;


//structure for patient profile
struct patient
{
    int id ;
    char age[3];
    char sex[10];
    char patient_name[50];
    char phone_no[20];
    char email[30];
    char patient_address[50];
    char doctor_name[20];
    char problem[100];
    char date[15];
} p ;


//structure for signup
struct doctor
{
    //int id;
    int id;
    char name[20];
    //int age;
    char age[3];
    char password[20];
    char email[20];
    char specialize [20];
    char date[12];
    char time[30];

}d ;
struct signup
{
   // int id;
    char phone[20];
    char age[3];
    //int age;
    char name[50];
    char password[20];
    char email[20];
    char date_of_birth[12];
}s ;

//structure for signin

struct signin
{
    char name[50];
    int  phone[20] ;
    char password[20];
}s1;
void fordelay(int j)
{   int i,k;
    for(i=0;i<j;i++)
         k=i;
};


int main()
{
    welcomescreen();
    pic();
    mainmenu();
}

void mainmenu()
{
    //welcomescreen();
    system("color 2");
    int option;
     //while(1)
     //  {
t:
        system ("cls");
     title();
        printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2 Main menu \xB2\xB2\xB2\xB2\xB2\n\n\n");
        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t1.Admin\n    \t\t\t\t\t\t\t\t\t\t\t2.Patient\n    \t\t\t\t\t\t\t\t\t\t\t3.Doctor list \n    \t\t\t\t\t\t\t\t\t\t\t4.Find Health Insurance \n    \t\t\t\t\t\t\t\t\t\t\t5.Learn \n    \t\t\t\t\t\t\t\t\t\t\t6.Individual & Family\n    \t\t\t\t\t\t\t\t\t\t\t7.Contact Us\n   \t\t\t\t\t\t\t\t\t\t \t8.Exit\n");
        //printf("\t\t\t\t _______________");
k:      printf("\n \t\t\t\t choose option: ");
        //printf("\n\t\t\t\t ---------------");

        scanf("%d",&option);
        switch(option)
        {

        case 1:
            system ("cls");
            title();
            printf("\n\t\t1.Admin");
            adminsignin();
            break;

        case 2:
            system ("cls");
            title();
            printf ("2.Patient\n");
            printf ("\n\n\t\t\t\t\t\t\t\t\t\t\t1.Registration Patient\n\n\t\t\t\t\t\t\t\t\t\t\t2.Signin\n\n\t\t\t\t\t\t\t\t\t\t\t3.Back");
            printf("\n\n\t\t\t\tchoose option: ");
            scanf("%d",&option);
            if(option==1)
            {
                printf("\n\t1.Registration Patient");
                signup();
                printf("\n\n\t1.Exit");
                printf("\n\n\t\t\tchoose option: ");
                scanf("%d",&num);
                if(num==1)
                {
                    exit(0);
                }
                break;
            }

            if(option==2)
            {   system("cls");
                title();
                printf("\n 2.Signin\n");
                signin();

                printf("\n\n\t1.Back\n");
                printf("\n\n\t\t\tchoose option: ");
                scanf("%d",&num);

                if(num==1)
                {
                    goto t;
                }
            }
            if(option==3)
            {
                goto t;
            }
            break;
        case 3:
            system ("cls");
            title();
            printf("2.Doctor list\n");
                    printf("%-10s %-20s %-20s %-30s %-20s %-20s %s\n", "ID", "Doctor name", "Age", "Email", "Specialize", "joining date","Time to see");
                    printf("\n----------------------------------------------------------------------------------------------------------------------------------------------\n");
                    doctor=fopen("doctorlist1.txt","rb");
                    while(fread(&d, sizeof(d), 1, doctor) == 1)
                    {
                         printf("%-10d %-20s %-20s %-30s %-20s %-20s %s\n",d.id, d.name, d.age, d.email, d.specialize, d.date, d.time);
                    }
                     fclose(doctor);
                    printf("\n\n  1.Back\n  2.Home");
                    printf("\n\n\t\t\tchoose option: ");
                    scanf("%d",&num);
                    if(num==1)
                    {
                       goto t;
                    }
                    if(num==2)
                    {
                        mainmenu();;
                    }
            break;


        case 4:
            system ("cls");
            title();
            printf("4.Find Health Insurance\n\n");
            signin();
            printf("\n\tInsurance\n\t");
            insurance=fopen("C:\\Users\\HP\\OneDrive\\Desktop\\E-health\\insurance.txt","r");
            char read_4[100000];
                    printf("\n");
                    while(!feof(insurance))
                    {
                      fgets(read_4,1000,insurance);
                      printf("%s",read_4);
                      //fputs(read_4,insurance);
                    }


            printf("\n1.Back\n");
            printf("\n\n\t\t\tchoose option: ");
            scanf("%d",&num);
            if(num==1)
            {
                goto t;
            }

            break;

        case 5:
            system ("cls");
            title();
            printf("5.Learn");
            learn=fopen("C:\\Users\\HP\\OneDrive\\Desktop\\E-health\\learn.txt","r");
                    char read_2[100000];
                    printf("\n");
                    while(!feof(learn))
                    {
                      fgets(read_2,1000,learn);
                      printf("%s",read_2);
                    }
                    printf("1.Back\n");
                    printf("\n\n\t\t\tchoose option: ");
                    scanf("%d",&num);
                    if(num==1)
                    {
                       goto t;
                    }
            break;

        case 6:
            system ("cls");
            title();
            printf("\n6.Individual & Family\n");
            family=fopen("C:\\Users\\HP\\OneDrive\\Desktop\\E-health\\family.txt","r");

                    char read_3[100000];
                    printf("\n");
                    while(!feof(family))
                    {
                        fgets(read_3,1000,family);
                        printf("%s",read_3);
                    }
                    printf("\n\n1.Back\n");
                    printf("\n\n\t\t\tchoose option: ");
                    scanf("%d",&num);
                    if(num==1)
                    {
                        goto t;
                    }
            break;

        case 7:
            system("cls");
            title();
            printf("\n7.Contact Us\n\n");
            contact=fopen("C:\\Users\\HP\\OneDrive\\Desktop\\E-health\\contact.txt","r");
                    char read[1000];
                    printf("\n");
                    while(!feof(contact))
                    {
                      fgets(read,1000,contact);
                      printf("%s",read);

                    }
                    printf("\n\n\t1.Back\n");
                    printf("\n\n\t\t\tchoose option: ");
                    scanf("%d",&num);
                    if(num==1)
                    {
                       goto t;
                    }
            break;

        case 8:
            exit2();
            break;

        default:
            printf("\t\t\tWrong Input\n");
            printf("\t\t\tEnter the Right input (1-8)\n");
            goto k;
      }

   //  }

//getch();
}


void adminsignin()
{

    char pass[10],password[10]="mehedi";
    int i=0;
    printf("\n\n\t\tEnter the password to login:");
    char store;
    //scanf("%s",pass);
    while((store=_getch(pass))!=13)
                {
                    pass[i]=store;
                    i++;
                    printf("*");
                }
    /*do
    {
    //if (pass[i]!=13&&pass[i]!=8)
        {
            printf("*");
            pass[i]=getch();
            i++;
        }
    }while (pass[i]!=13);
    pass[10]='\0';*/
    if (strcmp(pass,password)==0)
        {
            printf("\n\nPassword Match!\nLOADING");
            for(i=0;i<=6;i++)
            {
                fordelay(100000000);
                printf(".");
            }
        system("cls");
             printf("\n\n\n\t\t\t\t\t\t\t\t\t ************** Login Successful ****************\n");
             printf("\t\t\t\t\t\t\t\t\t ************************************************ \n\n");
t:             system("cls");
           printf("\t ADMIN\n\n");
             title();
             printf("\n\n\n");
             printf("    \t\t\t\t\t\t\t\t\t1.Add doctor\n    \t\t\t\t\t\t\t\t\t2.Doctor list\n    \t\t\t\t\t\t\t\t\t3.Patient list\n    \t\t\t\t\t\t\t\t\t4.Appointment\n    \t\t\t\t\t\t\t\t\t5.Discharge Patient\n    \t\t\t\t\t\t\t\t\t6.Search Patient\n    \t\t\t\t\t\t\t\t\t7.Doctor search\n     \t\t\t\t\t\t\t\t\t8.Home\n");
             int option;
             printf("\n\n\t\t\t\tchoose option: ");
             fflush(stdin);
             scanf("%d", &option);
                switch(option)
                {
             case 1:
                    system ("cls");

                    printf("ADMIN\n\n");
                    printf("\t\t1.Add doctor\n");
bj:                 doctorsignup();
                    printf("\n  1.Add More Doctor\n  2.Back\n  3.Home");
                    printf("\n\n\t\t\tchoose option: ");
                    scanf("%d",&num);
                    if(num==1)
                    {
                       goto bj;
                    }
                    if(num==2)
                    {
                        goto t;
                    }
                    if(num==3)
                    {
                        mainmenu();
                    }
                    break;
            case 2:
                    system ("cls");
                    printf("ADMIN\n\n");
                    printf("2.Doctor list\n");
                    printf("%-10s %-20s %-20s %-30s %-20s %-20s %s\n", "ID", "Doctor name", "Age", "Email", "Specialize", "joining date","Time to see");
                    printf("\n----------------------------------------------------------------------------------------------------------------------------------------------\n");
                    doctor=fopen("doctorlist1.txt","rb");
                    while(fread(&d, sizeof(d), 1, doctor) == 1)
                    {
                         printf("%-10d %-20s %-20s %-30s %-20s %-20s %s\n",d.id, d.name, d.age, d.email, d.specialize, d.date, d.time);
                    }
                     fclose(doctor);
                    printf("\n\n  1.Back\n  2.Home");
                    printf("\n\n\t\t\tchoose option: ");
                    scanf("%d",&num);
                    if(num==1)
                    {
                       goto t;
                    }
                    if(num==2)
                    {
                        mainmenu();;
                    }
                    break;
            case 3:
                    system ("cls");
                    title();
                    printf("\n\tADMIN\n\n");
                    printf("3.Patient list\n");
                    patient=fopen("patientlist55.txt","rb");

                    printf("%-20s %-10s %-10s %-20s %-20s %-20s %-20s %-20s %s\n","Patient name", "Age", "sex", "Phone number", "Email","Address" , "problem" , "Doctor name" ,"Admit date");
                    printf("\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

                    while(fread(&p, sizeof(p), 1, patient) == 1)
                    {

                    printf("%-20s %-10s %-10s %-20s %-20s %-20s %-20s %-20s %s\n", p.patient_name, p.age, p.sex, p.phone_no, p.email, p.patient_address, p.problem, p.doctor_name, p.date);

                    }
                    fclose(patient);
                    printf("\n  1.Back\n  2.Home");
                    printf("\n\n\t\t\tchoose option: ");
                    scanf("%d",&num);
                    if(num==1)
                    {
                       goto t;
                    }
                    if(num==2)
                    {
                      mainmenu();
                    }
                    break;

            case 4:
                    system ("cls");
                    title();
                    printf("ADMIN\n\n");
                    printf("4.Appointment\n");
at:                 appointment();
                    printf("\n  1.Add More\n  2.Back\n  3.Home");
                    printf("\n\n\t\t\tchoose option: ");
                    scanf("%d",&num);
                    if(num==1)
                    {
                       goto at;
                    }
                    if(num==2)
                    {
                        goto t;
                    }
                    if(num==3)
                    {
                        mainmenu();
                    }
                    break;
            case 5:
                    system ("cls");
                    title();
                    printf("ADMIN\n\n");
                    printf("5.Discharge Patient\n");
xy:                 discharge_patient();
                    printf("\n  1.Discharge more\n  2.Back\n  3.Home");
                    printf("\n\n\t\t\tchoose option: ");
                    scanf("%d",&num);
                    if(num==1)
                    {
                       goto xy;
                    }
                    if(num==2)
                    {
                        goto t;
                    }
                    if(num==3)
                    {
                        mainmenu();
                    }
                    break;
            case 6:
                    system ("cls");
                    title();
                    printf("ADMIN\n\n");
                    printf("6.Search Patient\n");
                    patientinfo();
                    printf("\n  1.Back\n  2.Home");
                    printf("\n\n\t\t\tchoose option: ");
                    scanf("%d",&num);
                    if(num==1)
                    {
                       goto t;
                    }
                    if(num==2)
                    {
                        mainmenu();
                    }
                    break;

            case 7:
                    search_doctor();
                    printf("\n  1.Back\n  2.Home");
                    printf("\n\n\t\t\tchoose option: ");
                    scanf("%d",&num);
                    if(num==1)
                    {
                       goto t;
                    }
                    if(num==2)
                    {
                        mainmenu();
                    }
                    break;
            case 8:
                    system ("cls");
                        mainmenu();
                        break;


            default:
                    printf("\t\t\tWrong Input\n");
                    printf("\t\t\tEnter the Right input (1-8)\n");
                    goto t;
        }
    }

    else
        {
            printf("\n\nSorry! You Are not an Admin !!\a\a\a");
            int value;
            p:printf("\n 1. Enter 1 to try again \n 2.exit");
            printf("\n\t\t\t\t\t\tchoose option");
            scanf("%d",&value);
            if (value==1)
                    {

                        system("cls");
                        adminsignin();
                    }

            else if (value==2)
                    {
                        system("cls");
                        exit(2);
                    }
            else
                    {
                        printf("\nInvalid!");
                        fordelay(1000000000);
                        system("cls");
                        goto p;
                    }

        }
  //}
}
void takeinput(char ch[50])
{
    fgets(ch,50,stdin);
    ch[strlen(ch)-1]=0;
}

void signup()
{
    system("cls");
    char password[20];
    signUp=fopen("patientsignup.txt","a");

            printf("-> signup\n\n");

                printf("    Patient name    :");
                fflush(stdin);
                gets(s.name);

                printf("    phone number    :");
                fflush(stdin);
                gets(s.phone);

                printf("    Age             :");
                fflush(stdin);
                gets(s.age);

                printf("    Email           :");
                fflush(stdin);
                gets(s.email);

                printf("    Date of birth   :");
                fflush(stdin);
                gets(s.date_of_birth);

                printf("    password        :");
               // fflush(stdin);
                //gets(s.password);
                char store;

                fflush(stdin);
                while((store=getch(s.password))!=13)
                {
                    s.password[i]=store;
                    i++;
                    printf("*");
                }

              /*  if(f==1)
                {
                    s.password[20]=password[20];
                }*/
               /* while((store=_getch(s.password))!=13)
                {
                    s.password[i]=store;
                    i++;
                    printf("*");
                    fprintf(patient,"*");
                }
                printf("\n%s",s.password);*/
               // fprintf(patient,"\n");

                fwrite(&s, sizeof(s), 1, signUp);
                fclose(signUp);

        printf("\n\tYou are successfully registered!!\n");
        printf("\n\tYour user name/phone no is --> %s and your password is --> %s\n", s.phone, s.password);
        printf("\n\tNow login with your name and password!!\n");
        printf("\n\tPress any key to continue ...");
        getch();

}

void signin()
{
    struct signup s;
        char write[100000];
        char read[100000];

        char enterusername[20];
        printf("\n\n\t\t\t\tEnter username : ");
        fflush(stdin);
        gets(enterusername);
         char enterpassword[20];
        printf("\n\t\t\t\tEnter password : ");
        char store;

                fflush(stdin);
                while((store=getch(enterpassword))!=13)
                {
                    enterpassword[i]=store;
                    i++;
                    printf("*");
                }

        signUp=fopen("patientsignup.txt","rb");

        while(fread(&s, sizeof(s), 1, signUp) == 1)
        {

           if(strcmp(s.phone,enterusername)==0)
           {
               if(strcmp(s.password,enterpassword)==0)
               {
                   printf("\n\n\t\t***Login Successful***\n");
                   printf("==> Press any Key.........\n");
                   getch();
                   patientprofile();
                   break;
               }
               else
               {
                    system ("color 4");
                    printf("sorry! invalid password\n");
                    Beep(750,300);
                    //system("cls");
                    printf("\n");
                    signin();
                    break;
               }
           }

            else
            {
                system("cls");
                printf("sorry! invalid username\n");
                Beep(750,300);
                signin();
                //break;
            }
        }
        fclose(signUp);
}

void doctorsignup()
{
             FILE *doctor1;

            int id2,t=0;
            doctor=fopen("doctorlist1.txt","ab");
            doctor1=fopen("doctorlist1.txt","rb");
            title();
            printf("-> signup\n\n");
                struct doctor d;

                printf("    Doctor Id              :");
ty:             fflush(stdin);
                scanf("%d",&id2);
                while(fread(&d, sizeof(d), 1, doctor1) == 1)
                   {
                    if(id2==d.id)
                    {
                       printf("    Same id exist enter aonther Id           :");
                       goto ty;
                    }
                   else{
                       t=1;
                    }
                   }
                   if(t==1)
                   {
                       printf("    Rewrite Id             :");
                       fflush(stdin);
                       scanf("%d",&d.id);
                   }
                   printf("    Doctor name            :");
                fflush(stdin);
                gets(d.name);
                printf("    Age                    :");
                fflush(stdin);
                gets(d.age);

                printf("    Email                  :");
                fflush(stdin);
                gets(d.email);

                /*printf("    Password   :");
                fprintf(doctor,"\t\t\t");
                gets(s.password);
                fflush(stdin);
                fputs(s.password,doctor);
                fprintf(doctor,"\n");*/

                printf("    specialize             :");
                fflush(stdin);
                gets(d.specialize);

                printf("    Joining date           :");
                fflush(stdin);
                gets(d.date);

                printf("    Time to see the patient:");
                fflush(stdin);
                gets(d.time);
                 printf("\n\n");
                printf("    Doctor Added Successfully\n\n");

               fwrite(&d, sizeof(d), 1, doctor);
               fclose(doctor);
               fclose(doctor1);

}



void patientprofile()
{
 k:    system("cls");
    system("color 2");
    title();
    int option;
    printf("\tpatient profile\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t1.Appointment\n    \t\t\t\t\t\t\t\t\t\t\t2.Doctor list\n    \t\t\t\t\t\t\t\t\t\t\t3.Search doctor\n   \t\t\t\t\t\t\t\t\t\t\t4.Patient profile\n   \t\t\t\t\t\t\t\t\t\t\t5.Main menu\n");
    printf("\n\t\t\t\tchoose option: ");
    scanf("%d",&option);

    switch(option)
    {
case 1:
        system("cls");
        title();
        printf("\n\t\t1.Add appointmeent\n\n");
        appointment();
        printf("\n  1.Back\n  2.Home");
                    printf("\n\n\t\t\tchoose option: ");
                    scanf("%d",&num);
                    if(num==1)
                    {
                       goto k;
                    }
                    if(num==2)
                    {
                        mainmenu();
                    }
                    break;
case 2:
        system("cls");
       title();
       printf("\n\t\t2.Doctor list\n\n");
       printf("%-10s %-20s %-20s %-30s %-20s %-20s %s\n", "ID", "Doctor name", "Age", "Email", "Specialize", "joining date","Time to see");
                    printf("\n----------------------------------------------------------------------------------------------------------------------------------------------\n");
                    doctor=fopen("doctorlist1.txt","rb");
                    while(fread(&d, sizeof(d), 1, doctor) == 1)
                    {
                         printf("%-10d %-20s %-20s %-30s %-20s %-20s %s\n", d.id, d.name, d.age, d.email, d.specialize, d.date, d.time);
                    }
                     fclose(doctor);
                    printf("\n\n  1.Back\n  2.Home");
                    printf("\n\n\t\t\tchoose option: ");
                    scanf("%d",&num);
                    if(num==1)
                    {
                       goto k;
                    }
                    if(num==2)
                    {
                        mainmenu();
                    }
                    break;

case 3:
        system("cls");
        title();
        printf("\n\t\t3.Search Doctor\n\n");
        search_doctor();
        printf("\n\n  1.Back\n  2.Home");
                    printf("\n\n\t\t\tchoose option: ");
                    scanf("%d",&num);
                    if(num==1)
                    {
                       goto k;
                    }
                    if(num==2)
                    {
                        mainmenu();
                    }
        break;

case 4:
        system("cls");
        title();
        printf("\n\t\t4.Patient profile\n\n");
        patientinfo();
         printf("\n\n  1.Back\n  2.Home");
                    printf("\n\n\t\t\tchoose option: ");
                    scanf("%d",&num);
                    if(num==1)
                    {
                       goto k;
                    }
                    if(num==2)
                    {
                        mainmenu();
                    }
                    break;

case 5:
         system("cls");
         mainmenu();
         break;
default:
            printf("\t\t\tWrong Input\n");
            printf("\t\t\tEnter the Right input (1-5)\n");
            goto k;
    }

getch();
}


void appointment()
{

    int id2;
    int num;
    FILE *patient1;
    patient=fopen("patientlist55.txt","ab");
    patient1=fopen("patientlist55.txt","rb");
     /* printf("    Patient id                :");

ty:  fflush(stdin);
     scanf("%d",&id2);
     while(fread(&p, sizeof(p), 1, patient1) == 1)
     {
     if(id2==d.id)
     {
        printf("    Same id exist enter aonther Id           :");
        goto ty;
     }
     else{
        d.id=id2;
     }
     */
     printf("    Patient name              :");
     fflush(stdin);
     gets(p.patient_name);
     printf("    Patient Age               :");
     fflush(stdin);
     gets(p.age);
     printf("    Patient Sex               :");
     fflush(stdin);
     gets(p.sex);

     printf("    Patient Phone number      :");
     fflush(stdin);
//char a;
     gets(p.phone_no);
/*if(a=='0' && a=='1' && a=='2' && a=='3' && a=='4' && a=='5' && a=='6' && a=='7' && a=='8' && a=='9')
       {
         gets(p.phone_no);
       }
       else
       {
           printf("wrong input");
           printf("Reinput your phone number ");
       }*/

     printf("    Patient Email             :");
     fflush(stdin);
     gets(p.email);
     printf("    Patient Address           :");
     fflush(stdin);
     gets(p.patient_address);

     printf("    Patient problem           :");
     fflush(stdin);
     gets(p.problem);

     printf("    Patient doctor Name       :");
     fflush(stdin);
     gets(p.doctor_name);

     printf("    Patient Admit Date        :");
     fflush(stdin);
     gets(p.date);

     fwrite(&p, sizeof(p), 1, patient);
     printf("\n\n    appointment Added Successfully\n\n");
     fclose(patient);
     fclose(patient1);
     /*printf("\n\t\t1.Add more\n\t\t2.No\n\n");
     printf("\n\n\t\t\tchoose option: ");
     scanf("&d",&num);
     if(num==1)
     {
         goto xt;
     }
     if(num==2)
     {

     }*/

}

void search_doctor()
{
    int id,f=0;
a:  printf("\n\t\t\tEnter doctor id to see details :");
    fflush(stdin);

b:
    scanf("%d",&id);
    printf("\n\n");
    doctor=fopen("doctorlist1.txt","rb");

    printf("%-10s %-20s %-20s %-30s %-20s %-20s %s\n", "ID", "Doctor name", "Age", "Email", "Specialize", "joining date","Time to see");
    printf("\n----------------------------------------------------------------------------------------------------------------------------------------------\n");
    //doctor=fopen("doctorlist.txt","rb");

    while(fread(&d, sizeof(d), 1, doctor) == 1)
    {
        if(id==d.id)
        {
            printf("%-10d %-20s %-20s %-30s %-20s %-20s %s\n", d.id, d.name, d.age, d.email, d.specialize, d.date, d.time);
            f=1;
        }
    }
     if(f==0)
    {
        printf("  => Invalid id !!!  Enter right id :");
        goto b;
    }
    printf("\n\n  1.Search more\n  2.Back");
    printf("\n\n\t\t\tchoose option: ");
    scanf("%d",&num);
    if(num==1)
    {
        goto a;
    }
    if(num==2)
    {

    }
    fclose(doctor);
}


void patientinfo()
{
    char phone1[20];
    int f=0;
    printf("\n\t\t\tEnter Patient Phone Number to see details :");
    fflush(stdin);
    gets(phone1);
    printf("\n\n");
    patient=fopen("patientlist55.txt","rb");

    printf("%-20s %-10s %-10s %-20s %-20s %-20s %-20s %-20s %s\n","Patient name", "Age", "sex", "Phone number", "Email","Address" , "problem" , "Doctor name" ,"Admit date");
    printf("\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");


    while(fread(&p, sizeof(p), 1, patient) == 1)
    {
        if(strcmp(phone1,p.phone_no)==0)
        {
            printf("%-20s %-10s %-10s %-20s %-20s %-20s %-20s %-20s %s\n", p.patient_name, p.age, p.sex, p.phone_no, p.email, p.patient_address, p.problem, p.doctor_name, p.date);
            f=1;
        }
    }
     if(f==0)
    {
        printf("     ===>> Your Patient has been discharged : \n\n");

        printf("              ===>>THANK YOU<<===             \n");
    }

    fclose(patient);
}


void discharge_patient()
{
    char phone1[20];
    int f=0;
    printf("\n\t\t\tEnter Patient Phone Number to discharge :");
    fflush(stdin);
    gets(phone1);
    printf("\n\n");

    FILE *temporary_file;
    patient=fopen("patientlist55.txt","rb");
    temporary_file=fopen("templist.txt","wb");

    while(fread(&p, sizeof(p), 1, patient) == 1)
    {
        if(strcmp(phone1,p.phone_no)==0)
        {
            f=1;
        }
        else
        {
            fwrite(&p, sizeof(p), 1, temporary_file);
        }
    }
    if(f==1)
    {
        printf("\n\nPatient Discharged Successfully.");
    }
    else
    {
        printf("\n\nRecord Not Found !");
    }

       fclose(patient);
       fclose(temporary_file);

       remove("patientlist55.txt");
       rename("templist.txt","patientlist55.txt");


}



void exit2()
{
    system("cls");
    title();
    printf("\n\n\n\t\t\tDo You want to back main menu ?    Then press 1  otherwise 2 ");
    printf("\n\n\t\t\t Press ( 1 / 2) : ");
    int ch;
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        Sleep(1000);
        mainmenu();
        break;

    case 2:
        system("cls");
        title();
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tThanks FOR Visiting !!!!!!!\n\n");
        break;
    }
}

void title()
{
    system("COLOR 2");
    printf("\n\t\t\t                                                           -------------------------\n");
    printf("\t\t\t\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2| MS 24/7 CARE HOSPITAL |\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t                                                           _________________________\n\n");

}

void welcomescreen()
{
    system("COLOR 3");
    //Sleep(1000);
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t    WELCOME TO ):\n");
    printf("\n\t\t\t\t\t\t\t            ***************************************************\n");                                                                                    //using stop few moments
    //printf("\t\t\t\t\t\t\t\t\t    WELCOME TO ):\n");
    printf("\t\t\t\t\t\t\t\t        Online Hospital ):\n\n");
    //Sleep(1000);
    //system("COLOR 04");
    //printf("\n\t\t\t\t\t\t\t***************************************************\n");
    //printf("\n\t\t\t\t\t\t\t            ***************************************************\n");
    printf("\t\t\t\t\t\t\t            ************==>>  MS 24 CARE HOSPITAL <<==*********\n");
    printf("\t\t\t\t\t\t\t            ***************************************************\n");
    //printf("\n\t\t\t\t\t\t\t***************************************************\n");
    //Sleep(2000);
    //system("COLOR 0F");
    //printf("\n\n\n\n\t\tEnter any Key ...........  ");

    //getch(); //for stuck the screen and wait for any key
    //system("cls"); //using for clear the console or the output

}

void pic()
{
 //printf("\t\t\t\t\t**********M S HOSPITAL************");
 system("color 2");
printf("\n\t\t\t\t                                                                              _________________________________________________________");
printf("\n\t\t\t\t                                                                              ||||||||||||||||||||         []        ||||||||||||||||| |");
printf("\n\t\t\t\t                                                                              ||||||||||||||||||||     ____[]____    ||||||||||||||||| |");
printf("\n\t\t\t\t                                                                              ||||||||||||||||||||    [____  ____]   ||||||||||||||||| |");
printf("\n\t\t\t\t                                                                              ||||||||||||||||||||         []        ||||||||||||||||| |");
printf("\n\t\t\t\t                                                                              ||||||||||||||||||||         []        ||||||||||||||||| |");
printf("\n\t\t\t\t                                                                              |======================================================| |");
printf("\n\t\t\t\t                                                                              |                                                      | |");
printf("\n\t\t\t\t                                                                              |   _________________           _________________      | |");
printf("\n\t\t\t\t                                                                              |   ||     |       ||           ||     |        ||     | |");
printf("\n\t\t\t\t                                                                              |   ||     |       ||           ||     |        ||     | |");
printf("\n\t\t\t\t                                                                              |   ||     |       ||           ||     |        ||     | |");
printf("\n\t\t\t\t                                                                              |   ||     |       ||           ||     |        ||     | |");
//printf("\n\t\t\t\t|   ||     |       ||           ||     |        ||     |");
printf("\n\t\t\t\t                                                                              |   ||_____|_______||           ||_____|________||     | |");
printf("\n\t\t\t\t                                                                              |                                                      | |");
printf("\n\t\t\t\t                                                                              |                 * MS 24 CARE HOSPITAL *              | |");
printf("\n\t\t\t\t                                                                              |   __________________          ___________________    | |");
printf("\n\t\t\t\t                                                                              |   ||     |         ||         ||     |         ||    | |");
printf("\n\t\t\t\t                                                                              |   ||     |         ||         ||     |         ||    | |");
printf("\n\t\t\t\t                                                                              |   ||     |         ||         ||     |         ||    | |");
printf("\n\t\t\t\t                                                                              |   ||     |         ||         ||     |         ||    | |");
printf("\n\t\t\t\t                                                                              |   ||     |         ||         ||     |         ||    | |");
printf("\n\t\t\t\t                                                                              |   ||_____|_________||         |/_____|_________||    | |");
printf("\n\t\t\t\t                                                                              |                                                      | |");
printf("\n\t\t\t\t                                                                              |                ______________________                | |");
printf("\n\t\t\t\t                                                                              |                ||                  ||                | |");
printf("\n\t\t\t\t                                                                              |                ||                  ||                | |");
printf("\n\t\t\t\t                                                                              |                ||                  ||                | |");
printf("\n\t\t\t\t                                                                              |                ||                  ||                | |");
printf("\n\t\t\t\t                                                                              |                ||                  ||                | |");
printf("\n\t\t\t\t                                                                              |                ||                  ||                | |");
printf("\n\t\t\t\t                                                                              |                ||                  ||                | |");
printf("\n\t\t\t\t                                                                              |                ||                  ||                | |");
printf("\n\t\t\t\t                                                                              |                ||                  ||                | |");
printf("\n\t\t\t\t                                                                              |                ||                  ||                | |");
printf("\n\t\t\t\t                                                                              |                ||                  ||                | |");
printf("\n\t\t\t\t                                                                              |________________||__________________||________________| |");
printf("\n\t\t\t\t                                                                              |______________________________________________________| /");
printf("\n\n\n\n\t\tEnter any Key ...........  ");

getch();
}
