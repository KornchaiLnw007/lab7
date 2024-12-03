#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string name, movie, Date, bye;
    int ID;
    
    
    cout<<"Fahsai: Sawadee ka...Can you tell me your name?"<<endl;
    cout<<"?????: ";
    getline(cin,name);
    cout<<"Fahsai: Wow!!! "<< name <<" is a really cool name."<<endl;
    cout<<"Fahsai: I think you are an Engineering student. What is your student ID?"<<endl;
    cout<<name<<": ";
    cin>>ID;
    cin.ignore();
    cout<<"Fahsai: I think you may be GEAR "<<(ID/10000000)-12<<". I have a free movie ticket for you.\n";
    cout<<"Fahsai: Let's go to the cinema together!!!\n";
    cout<<"Fahsai: What movie do you want to watch?\n";
    cout<<name<<": ";
    getline(cin,movie);
    cout<<"Fahsai: So....which day are you free to go with me?\n";
    cout<<name<<": ";
    getline(cin,Date);
    cout<<"Fahsai: "<<Date<<"....that is OK!!! I'm looking forward to watching "<<movie<<" with you.\n";
    cout<<name<<": ";
    getline(cin,bye);
    cout<<"Fahsai: 555+ see you "<<Date<<". Bye Bye \(^ ^)/\n";

    return 0;
}
