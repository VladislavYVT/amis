#include <iostream>
#include <set>
#include <string>

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
int main(int argc, char** argv) {
    path_to_work *work = new path_to_work;
    work->disk='c';
    work->path="work.doc";
    user *student = new user;
    student->login="login";
    student->password="password";
    delete [] student;
    delete [] work;
	return 0;
}
