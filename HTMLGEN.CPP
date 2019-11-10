//HTML Generator

#include <fstream.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
#include <stdio.h>
#include <string.h>

int i;
int op;
char yn;
char smiley = 1;

fstream F;

char title[30];

//Utilities

char bgcol[20];
char txtcol[20];
int font;

void add_line()
{
 cout<<"\n\n***************************************************\n\n";
}
////////////

void begin_code()
{
  F.open("Webpage.txt",ios::out);
  F<<"<!DOCTYPE HTML>\n";
  F<<"<HTML>\n\n";
  F.close();
}

void start_head()
{
  F.open("Webpage.txt",ios::app);
  F<<"<HEAD>\n\n";
  F.close();
}

void page_title(char title[])
{
  F.open("Webpage.txt",ios::app);
  F<<"<TITLE> "<<title<<" </TITLE>\n\n";
  F.close();
}

void add_stylesheet(char bgcol[] = "linen", char txtcol[] = "maroon",int font=1)
{
  char fontfam[15];

  switch (font)
  {
    case 1: strcpy(fontfam,"Arial Narrow");break;
    case 2: strcpy(fontfam,"Helvetica");break;
    case 3: strcpy(fontfam,"Calibri");break;
  }

  F.open("Webpage.txt",ios::app);
  F<<"<STYLE>\n"
    <<"body {background-color:"<<bgcol<<";}\n"
    <<"font-family:"<<fontfam<<";}\n"
    <<"h1 {color:"<<txtcol<<"; margin-left:40px;}\n"
    <<"</STYLE>\n\n";

  F.close();
}

void end_head()
{
  F.open("Webpage.txt",ios::app);
  F<<"<\HEAD>\n\n";
  F.close();
}

void start_body()
{
  F.open("Webpage.txt",ios::app);
  F<<"<BODY>\n\n";
  F.close();
}

void end_body()
{
  F.open("Webpage.txt",ios::app);
  F<<"</BODY>\n\n";
  F.close();
}

void end_code()
{
  F.open("Webpage.txt",ios::app);
  F<<"</HTML>";
  F.close();
  rename("Webpage.txt","Webpage.html");
}

void heading()
{
  add_line();

  char heading[30];
  char hdclr[20]="yellow";
  char hdalign[10]="center";
  char hddecor[10]="none";
  int hdsize;

  F.open("Webpage.txt",ios::app);

  cout<<"Enter text for heading :";gets(heading);

  cout<<"\n\nDefault styles for heading :";
  cout<<"\nColor      : "<<hdclr;
  cout<<"\nAlignment  : "<<hdalign;
  cout<<"\nDecoration : "<<hddecor;
  cout<<"\n\n";

  cout<<"Format heading and overwrite default styles? (y/n)";cin>>yn;

  if (yn == 'y')
    {
      cout<<"Color 	      : ";gets(hdclr);
      cout<<"Font size (px)   : ";cin>>hdsize;
      cout<<"Alignment 	      : ";gets(hdalign);
      cout<<"Text decoration  : ";gets(hddecor);
    }

  F<<"<H1 style=\"color:"<<hdclr<<";text-align:"<<hdalign<<";"<<";text-decoration:"<<hddecor<<";"<<";font-size:"<<hdsize<<";\">"<<heading<<"</H1>\n\n";

  cout<<"\nHeading added\n\n";

  F.close();
}

void image()
{
  add_line();

  char image[30];
  int imght;
  int imgwd;
  char imgalign[10];
  char imgtype[5];

  cout<<"Type of image : ";cin>>imgtype;

  cout<<"Enter complete path to image (without file extention): ";gets(image);

  cout<<"Format image? (y/n)";cin>>yn;

  if (yn == 'y')
    {
      cout<<"Height (px)      : ";cin>>imght;;
      cout<<"Width  (px)      : ";cin>>imgwd;
      cout<<"Alignment        : ";gets(imgalign);
    }
  else
   { imght = 200;
     imgwd = 300;
     strcpy(imgalign,"center");
   }

//  F<<"<div style=\"display:block;height:"<<imght<<";width:"<<imgwd<<";\">";
  F.open("Webpage.txt",ios::app);

  if (!strcmpi(imgalign, "center") || !strcmpi(imgalign, "centre") )
  	F<<"<center>";
  else
        F<<"<div style=\"display:block;float:"<<imgalign<<"; \">";

  F<<"<Img src=\""<<image<<".";F.(imgtype);
  F<<"\" height=\""<<imght<<"\" width=\""<<imgwd<<"\">\n\n";

  if (!strcmpi(imgalign, "center") || !strcmpi(imgalign, "centre") )
  	F<<"</center>";
  else
        F<<"</div>";

  //F<<"</div>";

  cout<<"\nImage added";

  F.close();
}

void paragraph()
{
  F.open("Webpage.txt",ios::app);
  F<<"<p";
  F.close();
}

void br()
{
  F.open("Webpage.txt",ios::app);
  F<<"<br>\n";
  F.close();
}

void hr()
{
  F.open("Webpage.txt",ios::app);
  F<<"<hr>\n";
  F.close();
}

void main()
{
//  clrscr();

//  textmode(3);
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"C://TC/BGI");
  //setbkcolor(12);
  textcolor(12);
  settextstyle(10,0,4);
  clrscr();
//  clrscr();
//  F.open("webpage.txt", ios::app);

  outtextxy(50,50,"HTML Generator");

  setcolor(0);
  settextstyle(6,0,1);
  outtextxy(420,365,"Press any key to continue");

/*
  delay(300);
  sound(400);
  delay(200);
  sound(450);
  delay(100);
  sound(600);
  delay(200);
  nosound();
*/
  /*cout<<"\n\t\t\t\t";

  for (i=0; i<14; i++)
  {
   cprintf("x");
   delay(75);
  }
  cout<<"\n\n\n";

  textcolor(15);
  clrscr();

  cout<<"\t";
  cprintf("Enter title for webpage : ");
  //cscanf('%s', &title);

//  cout<<"          Menu         "
//      <<"\n1.  "
   */
   ///////////////////////////////////////////

   getch();

   textcolor(15);
   setcolor(15);

   settextstyle(1,0,1);

   closegraph();

   clrscr();

   getch();

   cout<<"\t\t\t\tHTML Generator\n\t\t\t\t";

   for (i=0; i<14; i++)
   {
   	cout<<"x";
   	delay(75);
   }

   cout<<"\n\n\n";

   //////////////////////////////////////////////

   begin_code();

   //////////////////////////////////////////////

   start_head();

   cout<<"Enter title for your webpage : " ;
   cin.getline(title,30);
   page_title(title);

   cout<<"\n\nUse default stylesheet ?(y/n)";cin>>yn;
   if (yn == 'y')
     add_stylesheet();
   else
     {
       cout<<"Enter bgcolor    : ";
       gets(bgcol);

       cout<<"Enter text color : ";
       gets(txtcol);
       font :
       cout<<"Select font : \n1.Arial Narrow\n2.Helvetica\n3.Calibri\n";
       cin>>font;
       if (font != 1 && font != 2 && font != 3)
          {
            cout<<"Select a valid number for font";
            goto font;
	  }
       add_stylesheet(bgcol,txtcol,font);

     }

   end_head();

   //////////////////////////////////////////////

   start_body();

   add_line();

   op = 1;

   menu :
   	cout<<"\t\t\t\tMenu\n\n";

	cout<<"\t1. Add heading\n"
       	<<"\t2. Add image\n"
       	<<"\t3. Add paragraph\n"
	<<"\t4. Add horizontal rule\n"
        <<"\t5. Break rule\n"
        <<"\t6. Exit\n\n";

   while (op != 6)
   {
   	cin>>op;

	switch(op)
	{
   	   case 1  : heading()	 ;break;
           case 2  : image()	 ;break;
           case 3  : paragraph() ;break;
           case 4  : hr()	 ;break;
           case 5  : br()	 ;break;
           default : goto menu;
   	}

   }

//   cout<<"Enter heading :";cin>>pgheading;
//   add_heading();

   end_body();

   //////////////////////////////////////////////

   end_code();

   /////////////////////////////////////////////

   add_line();
   cout<<"File created "<<smiley;

   getch();

   ////////////////////////////////////////////

}

//End of file