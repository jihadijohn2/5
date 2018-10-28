#include"jihadijohn.h"
class teacher
{
   private:
   int tno;
   char tn[30];
   char d[30];
   protected:
   float salary;
   public:
   void tentry()
   {
      cout<<"\nENTER THE TNAME:";
      gets(tn);
      cout<<"\nENTER THE TNo.=";
      cin>>tno;
      cout<<"\nENTER THE DEPT.=";
      gets(d);
   }
   void tdisplay()
   {
      cout<<"\nTNAME="<<tn;
      cout<<"\nTNo="<<tno;
      cout<<"\nDEPT="<<d;
   }
};
class student
{
   private:
   int admno;
   char studentname[30];
   char Class[25];
   char sec;
   protected:
   int attendance;
   float percentage;
   public:
   void sentry()
   {
      cout<<"\nENTER ADMISSION No.=";
      cin>>admno;
      cout<<"\nENTER THE STUDENT NAME=";
      gets(studentname);
      cout<<"\nENTER CLASS=";
      cin>>Class;
      cout<<"\nENTER SECTION=";
      cin>>sec;
      cout<<"\nENTER ATTENDANCE=";
      cin>>attendance;
      cout<<"\nENTER THE PERCENTAGE=";
      cin>>percentage;
   }
   void sdisplay()
   {
      cout<<"\nADMISSION No.="<<admno;
      cout<<"\nSTUDENT NAME="<<studentname;
      cout<<"\nCLASS="<<Class;
      cout<<"\nSECTION="<<sec;
      cout<<"\nATTENDANCE="<<attendance;
      cout<<"\nPERCENTAGE="<<percentage;
   }
};
class school :protected student,protected teacher
{
   private:
   int scode;
   char schname[50];
   public:
   void schenter()
   {
   sentry();
   tentry();
   cout<<"\nENTER THE SCHOOL CODE=";
   cin>>scode;
   cout<<"\nENTER THE SCHOOL NAME=";
   gets(schname);
   }
   void schdisplay()
   {
     cout<<"\nPRESS ANY KEY TO PROCEED";
     getch();
     clrscr();
     sdisplay();
     tdisplay();
     cout<<"\nSCHOOL CODE="<<scode;
     cout<<"\nSCHOOL NAME="<<schname;
   }
};
void main()
{
   clrscr();
   school s;
   s.schenter();
   s.schdisplay();
   getch();
}

