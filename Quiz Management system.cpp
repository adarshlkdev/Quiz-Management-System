#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
class student{
	char name[10];
	int roll;
	int choice;
	public:
		void getdata();
		
};

 void student::getdata()
 {
 	cout<<"\tEnter your name :";
 	cin>>name;
 	cout<<"\n\tEnter your roll no. : ";
    cin>>roll;
 }
 
 
class quiz{
	
	int choice;
	public:
		void cpp(){
			int marks=0;
			cout<<"\tWhat is correct syntax to output \*Hello World*\ in c++ ?"<<endl;
			cout<<"\tA. cout<<\*Hello World *\ "<<endl;
			cout<<"\tB. system.out.print(\*Hello World *\)"<<endl;
			cout<<"\tC. console.writeln(\*Hello World *\) "<<endl;
			cout<<"\tD. printf(\*Hello World *\)"<<endl;
			choice=getch();
			  if(choice=='A' || choice=='a')
			  { 
			    cout<<"\nYour answer is correct"<<endl;
			    marks++;
			  }
			  else{
			  	cout<<"\nYour answer is incorrect"<<endl;
			  }
			  
			cout<<"\n\n\tWho is the developer of C++ ?"<<endl;
			cout<<"\tA. Dennis Ritchie"<<endl;
			cout<<"\tB. Bjarne Stroustrup"<<endl;
			cout<<"\tC. James Goslings "<<endl;
			cout<<"\tD. Alfred Harry"<<endl;
			choice=getch();
			  if(choice=='B' || choice=='b')
			  { 
			    cout<<"\nYour answer is correct"<<endl;
			    marks++;
			  }
			  else{
			  	cout<<"\nYour answer is incorrect"<<endl;
			  }
		}
		
		void java(){
			int marks=0;
			cout<<"\tWhat is correct syntax to output \*Hello World*\ in Java"<<endl;
			cout<<"\tA. cout<<\*Hello World *\""<<endl;
			cout<<"\tB. system.out.print(\*Hello World *\)"<<endl;
			cout<<"\tC. console.writeln(\*Hello World *\) "<<endl;
			cout<<"\tD. printf(\*Hello World *\)"<<endl;
			choice=getch();
			  if(choice=='B' || choice=='b')
			  { 
			    cout<<"\nYour answer is correct"<<endl;
			    marks++;
			  }
			  else{
			  	cout<<"\nYour answer is incorrect"<<endl;
			  }
			  
			cout<<"\tWho is the developer of Java ?"<<endl;
			cout<<"\tA. Dennis Ritchie"<<endl;
			cout<<"\tB. Bjarne Stroustrup"<<endl;
			cout<<"\tC. James Goslings "<<endl;
			cout<<"\tD. Alfred Harry"<<endl;
			choice=getch();
			  if(choice=='C' || choice=='c')
			  { 
			    cout<<"\nYour answer is correct"<<endl;
			    marks++;
			  }
			  else{
			  	cout<<"\nYour answer is incorrect"<<endl;
			  }
		  }
		
		
		void clang(){
			int marks=0;
			cout<<"\tWhat is correct syntax to output \*Hello World*\ in C Language"<<endl;
			cout<<"\tA. cout<<\*Hello World *\ "<<endl;
			cout<<"\tB. system.out.print(\*Hello World *\)"<<endl;
			cout<<"\tC. console.writeln(\*Hello World *\) "<<endl;
			cout<<"\tD. printf(\*Hello World *\)"<<endl;
			choice=getch();
			  if(choice=='D' || choice=='d')
			  { 
			    cout<<"\nYour answer is correct"<<endl;
			    marks++;
			  }
			  else{
			  	cout<<"\nYour answer is incorrect"<<endl;
			  }
			  
		
			  
			cout<<"\tWho is the developer of C Language?"<<endl;
			cout<<"\tA. Dennis Ritchie"<<endl;
			cout<<"\tB. Bjarne Stroustrup"<<endl;
			cout<<"\tC. James Goslings "<<endl;
			cout<<"\tD. Alfred Harry"<<endl;
			choice=getch();
			  if(choice=='A' || choice=='a')
			  { 
			    cout<<"Your answer is correct"<<endl;
			    marks++;
			  }
			  else{
			  	cout<<"Your answer is incorrect"<<endl;
			  }
		  }
		

	void select(){
		
 	cout<<"\n\tMarks less than 50% will be considered as Fail"<<endl;
 	cout<<"\n\tSelect which subject Quiz you want to perform"<<endl;
 	cout<<"1.) C++ " <<endl;
 	cout<<"2.) Java "<<endl;
 	cout<<"3.) C "<<endl;
 	cout<<"Enter your choice for quiz :"<<endl;
 	cin>>choice;
 	switch(choice){
 		case 1:
 			cpp();
 			break;
 			
 			case 2:
 				java();
 				break;
 				
 			case 3:
 				clang();
 				break;
 			
			default:
			cout<<"\tInavlid choice ! Please Try again."<<endl;	
	 }
	 
}
 	
 };
 

 int main(){
 	
 	      system("color 5f");
 	      student s;
 	      quiz z;
          char press;
          do{
          	cout<<"\n\n\t\t\t\t----------------QUIZ SYSTEM----------------\t\t\t\t\t\n\n"<<endl;
          	s.getdata();
          	system("cls");
          	z.select();
          	
               cout<<"\n\tPress y to continue or any other key to terminate"<<endl;
			   press = getch(); 
		} while( press == 'y' || press == 'Y');
		
}