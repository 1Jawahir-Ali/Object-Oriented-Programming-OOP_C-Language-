#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    // Create and write to the file
    ofstream outFile("students.txt");
    // Check if file was opened successfully
    if(!outFile.is_open()){
        cout<<"Error:Could not create students.txt"<<endl;
        return 1;
    }
    // Write details of three students
    outFile<<"Student Name: ALi ,Roll Number: 12"<<endl;
    outFile<<"Student Name: Jawahir Hussain,Roll Number: 34"<<endl;
    outFile<<"Student Name: Mehboob Ali ,Roll Number: 7"<<endl;
    outFile.close();
    cout<<"Student details written to file successfully!"<<endl;
    
    // Now open the file in read mode
    ifstream inFile("students.txt");
    
    // Check if file was opened successfully
    if(!inFile.is_open()){
        cout<<"Error: Could not open students.txt for reading"<<endl;
        return 1;
    }
    
    // Read and display student details
    cout<<"Reading student details from file:"<<endl;
    string line;
    int studentCount=0;
    
    while(getline(inFile, line)){
        studentCount++;
        cout<<"Student"<<studentCount<<": "<<line<<endl;
    }
    
    // Close the file after reading
    inFile.close();
    cout<<"\nTotal students: "<<studentCount<<endl;
    return 0;
}
