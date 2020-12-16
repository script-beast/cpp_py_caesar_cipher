#include <iostream> 
#include <string>
#include <stdio.h>
#include <cstdlib>
#include <bits/stdc++.h>
#include <Windows.h>
#include <unistd.h>
using namespace std; 

string te;
int ro;
void banner()
{
cout<<"            XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"<<endl;
cout<<"            X                            ___                             ___                                  X"<<endl;
cout<<"            X    \\  / \\  / \\  / \\  /    |      _    _  __   _    _      |       _       _  _                  X"<<endl;
cout<<"            X     \\/   \\/   \\/   \\/     |     /_\\  |_ |__  /_\\  |_|  -- |    O |_| |_| |_ |_|                 X"<<endl;
cout<<"            X     /\\   /\\   /\\   /\\     |___ /   \\ |_  __|/   \\ |\\      |___ | |   | | |_ |\\                  X"<<endl;
cout<<"            X    /  \\ /  \\ /  \\ /  \\                                                      -- script-beast     X"<<endl;
cout<<"            X                                                                                                 X"<<endl;
cout<<"            XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"<<endl;
}
string encrypt(string text, int s) 
{ 
    string result = ""; 
  
    // traverse text 
    for (int i=0;i<text.length();i++) 
    { 
      if (isupper(text[i])) 
            result += char(int(text[i]+s-65)%26 +65); 
  
     
    else if (islower(text[i]))
        result += char(int(text[i]+s-97)%26 +97); 
    else 
	result +=text[i];
	} 
  
    return result; 
} 
void en()
{
	cout<<"\n\n\nEnter the Message : ";
	getline(cin >> ws, te);
	cout<<"Enter the number  : ";
	cin>>ro;
	cout<<"Your Cipher test  : " << encrypt(te, ro);
	cout<<endl<<endl<<endl;
}

void de()
{
	cout<<"\n\n\nEnter the Cipher  : ";
	getline(cin >> ws, te);
	cout<<"Enter the number  : ";
	cin>>ro;
	cout<<"Your Message      : "<<encrypt(te,26 - ro); 
	cout<<endl<<endl<<endl;
}
void work()
{
cout<<"\n         Encrypt  :";
cout<<"\n                   Enter the text to be encrypt.";
cout<<"\n                   Enter the number (for rotation).";
cout<<"\n                   Get the Chipher ...............";
cout<<"\n ";
cout<<"\n	"; 
cout<<"\n         Dencrypt :";
cout<<"\n                   Enter the chipher to be dencrypt.";
cout<<"\n                   Enter the number by it was encrypt.";
cout<<"\n                   Get Message ....................	  ";
cout<<"\n";
}

int main() 
{ 
char op;
system("cls");
banner(); 
cout<<"\n\n\n                    Menu : --\n" ;
cout<<"\n";
cout<<"                              1. Encrypt\n";
cout<<"                              2. Dencrypt\n";
cout<<"                              3. How to Do\n";  
cout<<"                              4. Exit\n";
cout<<" >>  ";
cin>>op;
system("cls");
banner();
if (op == '1')
	en();
else if (op == '2')
	de();
else if (op == '3')
	work();
else
	{cout<<"Good Bye ...........\nHave a nice day..... ";
	sleep(5);
	exit(0);
	}
}