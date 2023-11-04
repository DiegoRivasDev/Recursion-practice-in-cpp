#include <iostream>

using namespace std;

int sumasucesiva(int variableA, int variableB);
int resultado;
    
	int main() {
 
int variableA;
 
	cout << "ingrese la primer variable  ";
	cin >> variableA;
  
int variableB;

	cout << "ingrese la segunda variable ";
	cin >> variableB;
    
	resultado = sumasucesiva( variableA, variableB);
    
    cout << "El resultado es " << resultado << endl;
 
	return 0;
}

int sumasucesiva(int variableA, int variableB)  {
	
	if (variableB==1)  {
	return variableA;
    }
    
    if (variableA==1)  {
    return variableB;
    }
    
    if( variableA ==0 || variableB == 0)  {
    return 0;
    }
    
    else  {
    return variableA + sumasucesiva(variableA, variableB - 1); }
    }
