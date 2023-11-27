#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
char pprint[9];
void put(char,int);

void main()
{
 //clrscr();

 int i,j,m=0,choice=0;
 First:
 for(i=0;i<9;i++)


 {
  pprint[i]='*';
 }

put('*',0);
cout<<"computer choice";
getch();
randomize();
int x=random(9);
cout<<x;
getch();
clrscr();
put('X',x);

cout<<"Enter the position:";
int position;
//clrscr();
cin>>position;
clrscr();
put('0',position);

if(pprint[0]=='X')
{
	if(pprint[1]=='0'||pprint[2]=='0')
	{
	randomize();
	cout<<"ys";
	getch();
	int choice=random(9);
	if(choice==0 || choice==1 || choice==2)
	choice=4;
	put('X',choice);
	goto Third;
	 }
	if(pprint[3]=='0' || pprint[6]=='0')
	{
	 randomize();
	 int choice=random(9);
	 if(choice==0||choice==3 || choice==6) choice=5;
	 put('X',choice);
	 goto Third;
	  }

	  if(pprint[4]=='0' || pprint[8]=='0')
	  {
	  randomize();
	  int choice=random(9);
	  if(choice==0||choice==4 || choice==8) choice=1;
	  put('X',choice);
	  goto Third;
	  }
	  if(pprint[5]=='0'|| pprint[7]=='0')
	  {
	   put('X',3);
	   goto Third;
	  }

}

if(pprint[1]=='X')
{
       if(pprint[0]=='0' || pprint[2]=='0')
       {
	randomize();
	int choice=random(9);
	if(choice==0 ||  choice==2 || choice==1)
	choice=4;
	put('X',choice);
	goto Third;
       }
       if(pprint[4]=='0' || pprint[7]=='0')
	{
	       randomize();
	       int choice=random(9);
	       if(choice==4 || choice==1 || choice==7)
	       choice=0;
	       put('X',choice);
	       goto Third;
	   }
	   if(pprint[3]=='0' || pprint[5]=='0' || pprint[6]=='0' || pprint[8]=='0')
	   {
	    put('X',4);
	    goto Third;
	   }

}


if(pprint[2]=='X')
{
      if(pprint[1]=='0' || pprint[0]=='0')
      {
       randomize();
       int choice=random(9);
       if(choice==1 || choice==0 || choice==2)
       choice=5;
       put('X',choice);
       goto Third;
      }
      if(pprint[5]=='0' || pprint[8]=='0')
      {
	randomize;
	int choice=random(9);
	if(choice==5 || choice==8 || choice==2)
	choice=4;
	put('X',choice);
	goto Third;
      }
      if(pprint[6]=='0' || pprint[4]=='0')
      {
      randomize();
      int choice=random(9);
      if(choice==4 || choice==6 || choice==2)
      choice=1;
      put('X',choice);
      goto Third;
      }
      if(pprint[3]=='0' || pprint[6]=='0' || pprint[7]=='0')
      {
       put('X',4);
       goto Third;
      }

}

if(pprint[3]=='X')
{
       if(pprint[0]=='0' || pprint[6]=='0')
       {
       randomize();
       int choice=random(9);
       if(choice==0 || choice==6 || choice==3) choice=4;
       put('X',choice);
       goto Third;
       }
       if(pprint[4]=='0' || pprint[5]=='0')
       {
       randomize();
       int choice=random(9);
       if(choice==5 || choice==4 || choice==3)
       choice=0;
       put('X',choice);
       goto Third;
       }
       if(pprint[1]=='0' || pprint[2]=='0' || pprint[7]=='0' || pprint[8]=='0')
       {
	put('X',4);
	goto Third;
       }
}

if(pprint[4]=='X')
{
     if(pprint[3]=='0' || pprint[5]=='0')
      {
       randomize();
       int choice=random(9);
       if(choice==3 || choice==5 || choice==4)
       choice=1;
       put('X',choice);
       goto Third;
      }
      if(pprint[1]=='0'||pprint[7]=='0')
      {
      randomize();
      int choice=random(9);
      if(choice==1 || choice==7 || choice==4)
      choice=3;
      put('X',choice);
      goto Third;
      }
      if(pprint[0]=='0' || pprint[8]=='0')
      {
       randomize();
       int choice=random(9);
       if(choice==0 || choice==8 || choice==4)
       choice=6;
       put('X',choice);
       goto Third;
      }
      if(pprint[2]=='0' || pprint[6]=='0')
      {
       randomize();
       int choice=random(9);
       if(choice==2 || choice==6 || choice==4)
       choice=0;
       put('X',choice);
       goto Third;
      }
      }
if(pprint[5]=='X')
{
	if(pprint[2]=='0' || pprint[8]=='0')
	 {
	   randomize();
	   int choice=random(9);
	   if(choice==2 || choice==8 || choice==5)
	   choice=3;
	   put('X',choice);
	   goto Third;
	 }
	 if(pprint[3]=='0'||pprint[4]=='0')
	 {
	 randomize();
	 int choice=random(9);
	 if(choice==3 || choice==4 || choice==5)
	 choice=8;
	 put('X',choice);
	 goto Third;
	 }
	 if(pprint[0]=='0' || pprint[1]=='0' ||pprint[6]=='0' || pprint[7]=='0')
	 {
	  put('X',4);
	  goto Third;
	 }

}

if(pprint[6]=='X')
{
      if(pprint[0]=='0' || pprint[3]=='0')
       {
	 randomize();
	int choice=random(9);
	if(choice==0 || choice==3 || choice==6)
	choice=7;
	put('X',choice);
       }
       if(pprint[7]=='0'||pprint[8]=='0')
       {
       randomize();
       int choice=random(9);
       if(choice==7 || choice==8 || choice==6)
       choice=0;
       put('X',choice);
       goto Third;
       }

       if(pprint[4]=='0'||pprint[2]=='0')
       {
       randomize();
       int choice=random(9);
       if(choice==4 || choice==2 || choice==6)
       choice=7;
       put('X',choice);
       goto Third;
       }
       if(pprint[1]=='0' || pprint[5]=='0')
       {
	put('X',4);
	goto Third;
       }

}

if(pprint[7]=='X')
{
     if(pprint[4]=='0'||pprint[1]=='0')
     {
      randomize();
      int choice=random(9);
      if(choice==1 || choice==7 || choice==4)
      choice=6;
      put('X',choice);
      goto Third;
     }
    if(pprint[6]=='0'||pprint[8]=='0')
     {
     randomize();
     int choice=random(9);
     if(choice==6 || choice==8 || choice==7)
     choice=4;
     put('X',choice);
     goto Third;
     }
     if(pprint[0]=='0' || pprint[2]=='0' || pprint[3]=='0' || pprint[5]=='0')
     {
      put('X',4);
      goto Third;
     }

}


if(pprint[8]=='X')
{
      if(pprint[2]=='0'||pprint[5]=='0')
      {
       randomize();
       int choice=random(9);
       if(choice==2 || choice==8 || choice==5)
       choice=6;
       put('X',choice);
       goto Third;
      }
      if(pprint[6]=='0'||pprint[7]=='0')
      {
      randomize();
      int choice=random(9);
      if(choice==6 || choice==7 || choice==8)
      choice=5;
      put('X',choice);
      goto Third;
      }

      if(pprint[4]=='0'||pprint[0]=='0')
      {
      randomize();
      int choice=random(9);
      if(choice==4 || choice==0 || choice==8)
      choice=6;
      put('X',choice);
      goto Third;
      }
      if(pprint[1]=='0' || pprint[3]=='0')
      {
       put('X',4);
       goto Third;
      }

}

Third:
for(i=0;i<9;i++)
{
if(pprint[i]!='*')
m=1;

else
{
m=0;
break;
}

}
if(m==1) goto Fifth;

cout<<"Enter your position:";
cin>>position;
put('0',position);

if(pprint[0]=='0' && pprint[1]=='0' && pprint[2]=='0')
{
 cout<<"YOU WIN \n COMPUTER LOOSE";
 goto Fifth;
}
if(pprint[0]=='0' && pprint[3]=='0'&& pprint[6]=='0')
{
 cout<<"YOU WIN \n COMPUTER LOOSE";
 goto Fifth;
}
if(pprint[0]=='0' && pprint[4]=='0'&& pprint[8]=='0')
{
 cout<<"YOU WIN \n COMPUTER LOOSE";
 goto Fifth;
}
if(pprint[3]=='0' && pprint[4]=='0' && pprint[5]=='0')
{
 cout<<"YOU WIN \n COMPUTER LOOSE";
 goto Fifth;
}
if(pprint[6]=='0' && pprint[7]=='0' && pprint[8]=='0')
{
 cout<<"YOU WIN \n COMPUTER LOOSE";
 goto Fifth;
}
if(pprint[1]=='0' && pprint[4]=='0' && pprint[7]=='0')
{
 cout<<"YOU WIN \n COMPUTER LOOSE";
 goto Fifth;
}
if(pprint[2]=='0' && pprint[4]=='0' && pprint[6]=='0')
{
 cout<<"YOU WIN \n COMPUTER LOOSE";
 goto Fifth;
}
if(pprint[2]=='0' && pprint[5]=='0' && pprint[8]=='0')
{
 cout<<"YOU WIN \n COMPUTER LOOSE";
 goto Fifth;
}
if(pprint[0]=='X' && pprint[1]=='X'&& pprint[2]=='*')
{
 put('X',2);
 cout<<"YOU LOOSE \n COMPUTER WINS";
 goto Fifth;
}
if(pprint[0]=='X' && pprint[3]=='X'&& pprint[6]=='*')
{
 put('X',6);
 cout<<"YOU LOOSE \n COMPUTER WINS";
 goto Fifth;
}
if(pprint[0]=='X' && pprint[4]=='X'&& pprint[8]=='*')
{
 put('X',8);
 cout<<"YOU LOOSE \n COMPUTER WINS";
 goto Fifth;
}
if(pprint[1]=='X' && pprint[0]=='X' && pprint[2]=='*')
{
 put('X',2);
 cout<<"YOU LOOSE \n COMPUTER WINS";
 goto Fifth;
}
if(pprint[1]=='X' && pprint[4]=='X' && pprint[7]=='*')
{
 put('X',7);
 cout<<"YOU LOOSE \n COMPUTER WINS";
 goto Fifth;
}
if(pprint[2]=='X' && pprint[1]=='X' && pprint[0]=='*')
{
 put('X',0);
 cout<<"YOU LOOSE \n COMPUTER WINS";
 goto Fifth;
}
if(pprint[2]=='X' && pprint[4]=='X' && pprint[6]=='*')
{
 put('X',6);
 cout<<"YOU LOOSE \n COMPUTER WINS";
 goto Fifth;
}
if(pprint[2]=='X' && pprint[5]=='X' && pprint[8]=='*')
{
 put('X',8);
 cout<<"YOU LOOSE \n COMPUTER WINS";
 goto Fifth;
}
if(pprint[3]=='X' && pprint[4]=='X' && pprint[5]=='*')
{
 put('X',5);
 cout<<"YOU LOOSE \n COMPUTER WINS";
 goto Fifth;
}
if(pprint[3]=='X' && pprint[0]=='X' && pprint[6]=='*')
{
 put('X',6);
 cout<<"YOU LOOSE \n COMPUTER WINS";
 goto Fifth;
}
if(pprint[4]=='X' && pprint[1]=='X' && pprint[7]=='*')
{
 put('X',7);
 cout<<"YOU LOOSE \n COMPUTER WINS";
 goto Fifth;
}
if(pprint[4]=='X' && pprint[3]=='X' && pprint[5]=='*')
{
 put('X',5);
 cout<<"YOU LOOSE \n COMPUTER WINS";
 goto Fifth;
}
if(pprint[5]=='X' && pprint[4]=='X' && pprint[3]=='*')
{
 put('X',3);
 cout<<"YOU LOOSE \n COMPUTER WINS";
 goto Fifth;
}
if(pprint[5]=='X' && pprint[2]=='X' && pprint[8]=='*')
{
 put('X',8);
 cout<<"YOU LOOSE \n COMPUTER WINS";
 goto Fifth;
}
if(pprint[6]=='X' && pprint[3]=='X' && pprint[0]=='*')
{
 put('X',0);
 cout<<"YOU LOOSE \n COMPUTER WINS";
 goto Fifth;
}
if(pprint[6]=='X' && pprint[7]=='X' && pprint[8]=='*')
{
 put('X',8);
 cout<<"YOU LOOSE \n COMPUTER WINS";
 goto Fifth;
}
if(pprint[6]=='X' && pprint[4]=='X' && pprint[2]=='*')
{
 put('X',2);
 cout<<"YOU LOOSE \n COMPUTER WINS";
 goto Fifth;
}
if(pprint[7]=='X' && pprint[4]=='X' && pprint[1]=='*')
{
 put('X',1);
 cout<<"YOU LOOSE \n COMPUTER WINS";
 goto Fifth;
}
if(pprint[7]=='X' && pprint[6]=='X' && pprint[8]=='*')
{
 put('X',8);
 cout<<"YOU LOOSE \n COMPUTER WINS";
 goto Fifth;
}
if(pprint[8]=='X' && pprint[5]=='X' && pprint[2]=='*')
{
 put('X',2);
 cout<<"YOU LOOSE \n COMPUTER WINS";
 goto Fifth;
}
if(pprint[8]=='X' && pprint[6]=='X' && pprint[7]=='*')
{
 put('X',7);
 cout<<"YOU LOOSE \n COMPUTER WINS";
 goto Fifth;
}
if(pprint[8]=='X' && pprint[4]=='X' && pprint[1]=='*')
{
 put('X',1);
 cout<<"YOU LOOSE \n COMPUTER WINS";
 goto Fifth;
}
if(pprint[0]=='0' && pprint[1]=='0'&&pprint[2]=='*')
{
 put('X',2);
 goto Fourth;
}
if(pprint[0]=='0' && pprint[2]=='0'&&pprint[1]=='*')
{
 put('X',1);
 goto Fourth;
}
if(pprint[0]=='0' && pprint[3]=='0'&&pprint[6]=='*')
{
 put('X',6);
 goto Fourth;
}
if(pprint[0]=='0' && pprint[6]=='0'&&pprint[3]=='*')
{
 put('X',3);
 goto Fourth;
}
if(pprint[0]=='0' && pprint[4]=='0'&&pprint[8]=='*')
{
 put('X',8);
 goto Fourth;
}
if(pprint[0]=='0' && pprint[8]=='0'&&pprint[4]=='*')
{
 put('X',4);
 goto Fourth;
}
if(pprint[1]=='0' && pprint[2]=='0'&&pprint[0]=='*')
{
 put('X',0);
 goto Fourth;
}
if(pprint[1]=='0' && pprint[4]=='0'&&pprint[7]=='*')
{
 put('X',7);
 goto Fourth;
}
if(pprint[1]=='0' && pprint[7]=='0'&&pprint[4]=='*')
{
 put('X',4);
 goto Fourth;
}
if(pprint[2]=='0' && pprint[5]=='0'&&pprint[8]=='*')
{
 put('X',8);
 goto Fourth;
}
if(pprint[2]=='0' && pprint[8]=='0'&&pprint[5]=='*')
{
 put('X',5);
 goto Fourth;
}
if(pprint[2]=='0' && pprint[4]=='0'&&pprint[6]=='*')
{
 put('X',6);
 goto Fourth;
}
if(pprint[2]=='0' && pprint[6]=='0'&&pprint[4]=='*')
{
 put('X',4);
 goto Fourth;
}
if(pprint[3]=='0' && pprint[4]=='0'&&pprint[5]=='*')
{
 put('X',5);
 goto Fourth;
}
if(pprint[3]=='0' && pprint[5]=='0'&&pprint[4]=='*')
{
 put('X',4);
 goto Fourth;
}
if(pprint[3]=='0' && pprint[6]=='0'&&pprint[0]=='*')
{
 put('X',0);
 goto Fourth;
}
if(pprint[4]=='0' && pprint[7]=='0'&&pprint[1]=='*')
{
 put('X',1);
 goto Fourth;
}
if(pprint[4]=='0' && pprint[5]=='0'&&pprint[3]=='*')
{
 put('X',3);
 goto Fourth;
}
if(pprint[4]=='0' && pprint[8]=='0'&&pprint[0]=='*')
{
 put('X',0);
 goto Fourth;
}
if(pprint[4]=='0' && pprint[6]=='0'&&pprint[2]=='*')
{
 put('X',2);
 goto Fourth;
}
if(pprint[5]=='0' && pprint[8]=='0'&&pprint[2]=='*')
{
 put('X',2);
 goto Fourth;
}
if(pprint[6]=='0' && pprint[7]=='0'&&pprint[8]=='*')
{
 put('X',8);
 goto Fourth;
}
if(pprint[6]=='0' && pprint[8]=='0'&&pprint[7]=='*')
{
 put('X',7);
 goto Fourth;
}
if(pprint[7]=='0' && pprint[8]=='0'&&pprint[6]=='*')
{
 put('X',6);
 goto Fourth;
}
if(pprint[0]=='X' && pprint[1]=='X' && pprint[2]=='0' && pprint[3]=='0' && pprint[4]=='*')
{
 randomize();
 int choice=random(9);
 if(choice==4 || choice==5 || choice==6) choice=7;
 put('X',choice);
 goto Fourth;
}
if((pprint[0]=='X' && pprint[1]=='X'&& pprint[2]=='0') ||(pprint[0]=='X' && pprint[2]=='X' && pprint[1]=='0'))
{
 for(i=0;i<9;i++)
 {
  if(pprint[i]=='*')
  put('X',i);
  goto Fourth;
 }
}
if((pprint[3]=='X' && pprint[4]=='X'&& pprint[5]=='0') ||(pprint[3]=='X' && pprint[5]=='X' && pprint[4]=='0'))
{
 for(i=0;i<9;i++)
 {
  if(pprint[i]=='*')
  put('X',i);
  goto Fourth;
 }
}
if((pprint[6]=='X' && pprint[7]=='X'&& pprint[8]=='0') ||(pprint[6]=='X' && pprint[8]=='X' && pprint[7]=='0'))
{
 for(i=0;i<9;i++)
 {
  if(pprint[i]=='*')
  put('X',i);
  goto Fourth;
 }
}
if((pprint[0]=='X' && pprint[3]=='X'&& pprint[6]=='0') ||(pprint[0]=='X' && pprint[6]=='X' && pprint[3]=='0'))
{
 for(i=0;i<9;i++)
 {
  if(pprint[i]=='*')
  put('X',i);
  goto Fourth;
 }
}
if((pprint[1]=='X' && pprint[4]=='X'&& pprint[7]=='0') ||(pprint[1]=='X' && pprint[7]=='X' && pprint[4]=='0'))
{
 for(i=0;i<9;i++)
 {
  if(pprint[i]=='*')
  put('X',i);
  goto Fourth;
 }
}
if((pprint[2]=='X' && pprint[5]=='X'&& pprint[8]=='0') ||(pprint[2]=='X' && pprint[8]=='X' && pprint[5]=='0'))
{
 for(i=0;i<9;i++)
 {
  if(pprint[i]=='*')
  put('X',i);
  goto Fourth;
 }
}
if((pprint[0]=='X' && pprint[4]=='X'&& pprint[8]=='0') ||(pprint[0]=='X' && pprint[8]=='X' && pprint[4]=='0'))
{
 for(i=0;i<9;i++)
 {
  if(pprint[i]=='*')
  put('X',i);
  goto Fourth;
 }
}
if((pprint[2]=='X' && pprint[4]=='X'&& pprint[6]=='0') ||(pprint[2]=='X' && pprint[6]=='X' && pprint[4]=='0'))
{
 for(i=0;i<9;i++)
 {
  if(pprint[i]=='*')
  put('X',i);
  goto Fourth;
 }
}
Fourth:
goto Third;
Fifth:
cout<<" \n Do you want to continue!! ";
cout<<"1.YES \n 2.NO \n";
cin>>choice;

if(choice==1)
{
 goto First;
}

getch();
}

void put(char x,int pos)
{
int i,j;
clrscr();
pprint[pos]=x;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
 cout<<pprint[i*3+j]<<"\t";
}
 cout<<"\n\n";
}
}


