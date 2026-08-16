#include<iostream>


using namespace std;
class book 
{
    public :
    void readbook() {
        cout <<" read the book " << endl;
        cout<< "this is book for logic building" << endl;
        cout <<" it has all the main topics that will clear your logic building problem " << endl;
        
    }

};

class library {
    book* bo;
    public :
    library(book* boo ) {
        bo = boo;
    }

    void read() {
        bo->readbook();

    }
};
int main( )
{
    book *bo = new book();
    library li(bo);
    li.read();
    delete bo;
     return 0;
}



