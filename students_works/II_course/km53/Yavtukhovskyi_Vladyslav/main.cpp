#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct path_to_work {
	char disk;
	string path;
};

struct user{
	string login;
	string password;
};

void get_path(path_to_work *arg){
	
	char c;
	
	while(1){ system("cls");
	cout<<"Write name of local disk with your work \n ";
	cout<<"if you want to exit - write 1 \n";
	c = getch();
	if(c=='1'){ return;
	}
	if( (c>=65)&&(c<=90) || (c>=97)&&(c<=122)){
		putchar(c);
		
	}
	else { Beep(523,500); continue;}
	cout<<"\nIf you sure - press 1. Else you'll reinput this \n";
	if(getch()!='1') continue;
	arg->disk=c;
	break;
	}
	cout<<"\n Write the path to your work \n";
	int i=0;
	while(1){ 
	c=getch();
	
	if(((c<=126)&&(c>=33))&&(i<=16) ){arg->path[i]=c;
	putchar(c); i++;
	} else { if((c!=8)&&(c!=13)) Beep(523, 500);
	}
	if(c==8){arg->path[i-1]=NULL;
	i--;
	cout<<'\b';
	cout<<' ';
	cout<<'\b';
	continue;
	}
if(c==13) break;
	}
}
void get_user(user *arg){
	
 	char c;
	
	cout<<"\n Write your login \n";
	int i=0;
	while(1){ 
	c=getch();
	
	if(((c<=126)&&(c>=33))&&(i<=16)){arg->login[i]=c;
	putchar(c); i++;
	} else { if((c!=8)&&(c!=13)) Beep(523, 500);
	}
	if(c==8){arg->login[i-1]=NULL;
	i--;
	cout<<'\b';
	cout<<' ';
	cout<<'\b';
	continue;
	}
if(c==13) break;
	}
	cout<<"\n Password, please \n";
 	i=0;
	while(1){ 
	c=getch();
	
	if(((c<=126)&&(c>=33))&&(i<=16)){arg->password[i]=c;
	putchar(c); i++;
	} else { if((c!=8)&&(c!=13)) Beep(523, 500);
	}
	if(c==8){arg->password[i-1]=NULL;
	i--;
	cout<<'\b';
	cout<<' ';
	cout<<'\b';
	continue;
	}
if(c==13) break;
	}
}

	
int main(int argc, char** argv) {
    path_to_work *work = new path_to_work;
    work->disk='c';
    work->path="work.doc";
    user *student = new user;
	get_user(student);
    system("pause");
    delete student;
    delete work;	
	return 0;
}
