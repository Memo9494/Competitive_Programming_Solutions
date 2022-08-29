#include<iostream>
using namespace std;
   enum scale {ounces, kilograms};

   class ZooAnimal  
   {
    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
    public:
      void Create (char*, int, int, int); // create function
      void Destroy (); // destroy function 
      void changeWeight (int pounds);
      inline void changeWeightDate (int today) {weight = today;};
      char* reptName ();
      int reptWeight ();
      void reptWeight (scale which);
      int reptWeightDate ();
      int daysSinceLastWeighed (int today);
   };


int main(){

}