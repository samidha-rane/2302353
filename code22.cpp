#include <iostream>
using namespace std;


int main() {
    struct{
        string title;
        string Author;
        int year_published;
        
    }book1,book2;
   
    book1.title ="Life's Amazing secrets";
    book1.Author="Gaur Gopal Das";
    book1.year_published=2010;
    
    book2.title ="Think like a Monk";
    book2.Author="Jay shetty";
    book2.year_published=2015;
    
    cout<<book1.title<<"  by  "<<book1.Author<<",published in  "<<book1.year_published<<"\n";
    cout<<book2.title<<" by  "<<book2.Author<<" ,published in  "<<book2.year_published<<"\n";
    
    return 0;
}



