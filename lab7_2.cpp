//Dialog of the first example is given below.

/*
Fahsai: Sawadee ka...Can you tell me your name?
?????: Luke Skywalker
Fahsai: Wow!!! Luke Skywalker is a really cool name.
Fahsai: I think you are an Engineering student. What is your student ID?
Luke Skywalker: 590610999
Fahsai: I think you may be GEAR 47. I have a free movie ticket for you.
Fahsai: Let's go to the cinema together!!!
Fahsai: What movie do you want to watch?
Luke Skywalker: Star Wars VII
Fahsai: So....which day are you free to go with me?
Luke Skywalker: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watching Star Wars VII with you.
Luke Skywalker: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    cout<<"Fahsai: Sawadee ka...Can you tell me your name?"<<endl;
    string name;

    cout<<"?????: ";
    getline(cin,name);
    cout<<"Fahsai: Wow!!! "<<name<<" is a really cool name."<<endl;
    cout<<"Fahsai: I think you are an Engineering student. What is your student ID?";
    int id;
    cout<<endl;
    cout<<name<<": ";
    cin>>id;
    cin.ignore();
    cout<<"Fahsai: I think you may be GEAR "<<(id/10000000)-12<<". I have a free movie ticket for you."<<endl;
    cout<<"Fahsai: Let's go to the cinema together!!!"<<endl;
    cout<<"Fahsai: What movie do you want to watch?"<<endl;
    string movieName;
    cout<<name<<": ";
    getline(cin,movieName);
    cout<<"Fahsai: So....which day are you free to go with me?"<<endl;
    string respone;
    cout<<name<<": ";
    getline(cin,respone);
    cout<<"Fahsai: "<<respone<<"....that is OK!!! I'm looking forward to watching "<<movieName<<" with you."<<endl;
    string lastword;
    cout<<name<<": ";   
    getline(cin,lastword);
    cout<<"Fahsai: 555+ see you "<<respone<<". Bye Bye \\(^ ^)/ ";

}