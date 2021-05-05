#include <iostream>

using namespace std;

int main()
 {
 
 string alphabets = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
 
 for(int i=0; i< alphabets.size(); i++){
 	
 	cout<<alphabets.substr(i,27)
 	    <<alphabets.substr(0,i)
 	    <<endl;
 }
 
   return 0;
}
