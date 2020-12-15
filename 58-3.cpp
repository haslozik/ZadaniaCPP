#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(int argc, char** argv) {
	
 ifstream plik1, plik2, plik3;
 ofstream plikEnd;
 
 char* endptr;
 
 long liczba, min; 
 
 string liczba1, liczba2, liczba3, liczba4, liczba5, liczba6;
 
 plik1.open("sys1.txt"); 
 plik2.open("sys2.txt"); 
 plik3.open("sys3.txt"); 
 plikEnd.open("zak.txt"); 
 
 bool pierwszy = true; 
 
 if(plik1.good())  
 
    while(!plik1.eof())        
    {
        plik1>>liczba1 >> liczba2;
			      
        liczba =  strtol(liczba2.c_str(), &endptr, 4);
               
        if(pierwszy) 
        {
            min = liczba;
            pierwszy = false;
        }
		else if(liczba < min)
		{
			min = liczba;
		} 
        
    }
     
     if(plik2.good())  
     while(!plik2.eof())        
     {
        plik2>>liczba3 >> liczba4;
			      
        liczba =  strtol(liczba4.c_str(), &endptr, 4);
               
        if(pierwszy) 
        {
            min = liczba;
            pierwszy = false;
        }
		else if(liczba < min) 
		{
			min = liczba;
		}
                      
     }
     
    if(plik3.good()) 
    while(!plik3.eof())        
    {
    	plik3>>liczba5 >> liczba6;
			      
        liczba =  strtol(liczba6.c_str(), &endptr, 4);
               
        if(pierwszy) 
        {
            min = liczba;
            pierwszy = false;
        } 
		else if(liczba < min)
		{
            min = liczba;
    	}
    	
     
	plikEnd<< "58.1: " << min <<endl; 
	
	plik1.close();
	plik2.close();
	plik3.close();
	plikEnd.close();
	
	
	return 0;
}
