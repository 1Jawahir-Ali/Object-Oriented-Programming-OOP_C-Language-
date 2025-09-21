// Tasks OF FILE POINTERS
#include<iostream>
#include<fstream>             // Task_01 Tellp()
using namespace std;
int main(){

/*	fstream out("Greet.txt",ios::out);
	cout<<"Position of write pointer before writing: "<<out.tellp() <<endl;
	out<<"ABC";
	cout<<"Position of write After writing a some character: "<<out.tellp()<<endl;
	out.close();
	return 0;	
}*/
//-----------------------------------------------------------------------------------------

                           // Task _02 Tellg()
 
 /*	fstream in("file.txt",ios::in);
 	cout<<"Position of read pointer before reading: "<<in.tellg()<< endl;
 	char ch;
 	in.get(ch);
 	cout<<"Position of read pointer after reading a single character: "<< in.tellg() <<endl;
	 in.close();
	 return 0;
 } */     
 
//----------------------------------------------------------------------------------------- 
                          //  Task_03 seekp(offset,direction)---->Move put pointer
                          
/* fstream file("Student,txt",ios::in|ios::out|ios::trunc);
   file<<"01 Jawahir,3.8";
   file<<"02,Ali,3.8";
   file<<"03,Muhammad,2.4";
   file<<"04,Akabar,4.0";
   cout<<"Position of write Pointer after writing: "<<file.tellp()<<endl;
   file.seekp(-13,ios::cur);
   file<<"05,Nadir,2.78";
   file.close();
   return 0;
 }*/
//---------------------------------------------------------------------------------------- 
                         //  Task_04 seekg(Offset,direction)----->Move get pointer
                         
   fstream file("student.txt",ios::in|ios::out);
   cout<<"position of pointer before reading: " <<file.tellg() <<endl;
   char ch;
   cout<<"Move the read pointer position  to 13"<<endl;
   while(file.get(ch)){
   	cout<<"Character Read: "<<ch<<"Position of pointer after reading:  "<<file.tellg()<<endl;
   }          
    file.close() ;
	return 0;
	}         
                         
                         
                         
 
 
 
                
