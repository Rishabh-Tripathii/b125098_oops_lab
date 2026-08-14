#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of character array:";
    cin>>n;
    char *arr= new char[n];
    cin.ignore();
    cout<<"Enter a string:";
    cin.getline(arr,n);
    int vowels=0;
    int consonants=0;
    int digits=0;
    int spaces=0;
    for(int i=0;arr[i]!='\0';i++){
        char ch=arr[i];
        if(isdigit(ch)){
            digits++;
        }
        else if(isspace(ch)){
            spaces++;
        }
        else if(isalpha(ch)){
            char lower=tolower(ch);
            if(lower=='a'||lower=='e'||lower=='i'||lower=='o'||lower=='u'){
                vowels++;
            }
            else{
            consonants++;
            }
        }
    }
    cout<<"\nVowels="<<vowels<<endl;
        cout<<"Consonants="<<consonants<<endl;
        cout<<"Digits="<<digits<<endl;
        cout<<"Spaces="<<spaces<<endl;
        delete[] arr;
        return 0;
}