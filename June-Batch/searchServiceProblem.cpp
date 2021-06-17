/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class Passanger{
    
    public:
    string PNR;
    string Name;
    string ContactNumber;
    string emailId;
    string DOB;
    
}
class PassangerInMemeoryRepository{
    
    std::vector<Passanger> passangers ;
    public: 
    
    void add(Passanger *Passanger){}
    vector<Passanger> select(){  return passangers;};
}

class PassangerSearchService{
    
    PassangerInMemeoryRepository *repo=new  PassangerInMemeoryRepository();
    public:
    
          Passanger searchByPNR(string pnr){
              
              //search Logic
              //return searchResult;
          }
          vector<Passanger> searchByName(string name){ }
          
          Passanger searchByEmail(string email){}
}

int main ()
{
  
  PassangerSearchService _service;
 Passanger _passamger service.searchByPNR("P!AB");
  return 0;
}
