
#ifndef MYSTRING_H
#define MYSTRING_H

#include<iostream>
#include<cstring>
using namespace std;

class my_string{
    
    char *p;
public:

//Constructor & Destructor-------------------------------------
    my_string();
    my_string(const char *);
    my_string(my_string& );
    ~my_string();

//Operator overloading------------------------------------------
    void operator = (my_string& );      // obj1.operator = (obj2) --> my_string::operator = (&obj1, obj2);
    my_string& operator + (my_string ); // obj1 = obj1.operator + (obj2); --> operator +(&obj1, obj2);
    char& operator [] (int i);          // obj.operator[](i) --> my_string::operator[](&obj, int i);
    bool operator > (my_string );       // s1.operator > (s2) --> my_string::operator > (&s1, s2);
    bool operator < (my_string );       // s1.operator < (s2) --> my_string::operator < (&s1, s2);
    bool operator <= (my_string );       // s1.operator <= (s2) --> my_string::operator <= (&s1, s2);
    bool operator >= (my_string );       // s1.operator >= (s2) --> my_string::operator >= (&s1, s2);
    bool operator == (my_string );       // s1.operator == (s2) --> my_string::operator == (&s1, s2);
    bool operator != (my_string );       // s1.operator != (s2) --> my_string::operator != (&s1, s2);
    
    
//Generic functions ------------------------------------------
    void get();
    void set();
    //char& get_p();
    
    
//Friend functions---------------------------------------------

    // overloaded functions :-
    friend istream& operator >>(istream&, my_string& ); // operator >> (cin, s1); 
    friend ostream& operator <<(ostream&, my_string );  // operator << (cout, s1);
    
    
    //String functions :-
    friend int my_strlen(my_string );
    friend void my_strcpy(my_string& ,my_string );
    friend void my_strncpy(my_string& ,my_string , int );
    friend int my_strcmp(my_string ,my_string );
    friend int my_strncmp(my_string ,my_string, int );
    friend void my_strcat(my_string& ,my_string );
    friend void my_strncat(my_string& ,my_string, int );
    friend void my_strrev(my_string& );
    friend char* my_strchr(my_string&, char );
    friend char* my_strrchr(my_string&, char );
    friend char* my_strstr(my_string&, my_string );
    friend void my_strlower(my_string&);
    friend void my_strupper(my_string&);
};

#endif

