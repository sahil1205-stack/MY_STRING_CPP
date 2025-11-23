#include"Header.h"

using namespace std;

//constructor & Destructors---------------
my_string::my_string(){ 
    //cout << "Default constructor " << endl;
    p = new char[100];

}

my_string::my_string(const char *s){
    
    int n = strlen(s);
    
   // cout << "Parametrized constuctor" << endl;
    p = new char[n];
    strcpy(p, s);

}

my_string::my_string(my_string& obj){
    
    int n = strlen(obj.p);
    p = new char[n];
    strcpy(p, obj.p);
    
}

my_string::~my_string(){
    
    if(p!=0)
        delete []p;
    p = 0;
    
}

//Overloaded operators-----------------------------------------
void my_string::operator = (my_string& obj){
        
        strcpy(p, obj.p);
}

my_string& my_string::operator + (my_string obj){
    
    static my_string temp;
    //strcpy(temp.p, this->p);
    //strcat(temp.p, obj.p);
    
    int i,j;
    for(i=0; this->p[i]; i++){
        temp.p[i] = this->p[i];
    }
    
    for(j=0; obj.p[j]; i++, j++){
        temp.p[i] = obj.p[j];
    }
    
    return temp;
}

char& my_string::operator [] (int i){
    
    return p[i];
}

bool my_string::operator > (my_string obj){
    
    /*int result = strcmp(p, obj.p);
    
    if(result > 0) return true;
    else return false;
    */
    
    int i;
    for(i=0; p[i] && obj.p[i]; i++){
        if(p[i] != obj.p[i]){
            if(p[i] > obj.p[i])
                return 1;
            else
                return 0;
        }
    }
    
    return 0;
}

bool my_string::operator < (my_string obj){
   
    int i;
    for(i=0; p[i] && obj.p[i]; i++){
        if(p[i] != obj.p[i]){
            if(p[i] < obj.p[i])
                return 1;
            else
                return 0;
        }
    }
    
    return 0;
}

bool my_string::operator <= (my_string obj){
    
  
    int i;
    for(i=0; p[i] && obj.p[i]; i++){
        if(p[i] != obj.p[i]){
            if(p[i] < obj.p[i])
                return 1;
            else
                return 0;
        }
    }
    
    if(p[i] == '\0' && obj.p[i] == '\0')
    return 1;
    else
    return 0;
}

bool my_string::operator >= (my_string obj){
    
  
    int i;
    for(i=0; p[i] && obj.p[i]; i++){
        if(p[i] != obj.p[i]){
            if(p[i] > obj.p[i])
                return 1;
            else
                return 0;
        }
    }
    
    if(p[i] == '\0' && obj.p[i] == '\0')
    return 1;
    else
    return 0;
}

bool my_string::operator == (my_string obj){
    
  
    int i;
    for(i=0; p[i] && obj.p[i]; i++){
        if(p[i] != obj.p[i]){
            return 0;
        }
    }
    
    if(p[i] == '\0' && obj.p[i] == '\0')
    return 1;
    else
    return 0;
}

bool my_string::operator != (my_string obj){
    
  
    int i;
    for(i=0; p[i] && obj.p[i]; i++){
        if(p[i] != obj.p[i]){
            return 1;
        }
    }
    
    if(p[i] == '\0' && obj.p[i] == '\0')
    return 0;
    else
    return 1;
}

//General Functions------------------------------------------------

void my_string::set(){
    cout << "Enter string" << endl;
    cin.getline(p, 100);
}

void my_string::get(){
    
    cout << "STRING: " << p << endl;
}

// char& my_string::get_p(){
//     return p;
// }

