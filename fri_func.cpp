#include"Header.h"

//Operator overloaded friend functions---------------------------------------
istream& operator >> (istream& in, my_string& obj){
    //in >> obj.p;
    in.getline(obj.p, 100);
    return in;
}

ostream& operator << (ostream& out, my_string obj){
    out << obj.p;
    return out;
}


//String functions ----------------------------------------------------------
int my_strlen(my_string obj){
    
    int len;
    for(len = 0; obj.p[len]; len++);
    
    return len;
}

void my_strcpy(my_string& s ,my_string d){
    
    int i;
    for(i=0; d.p[i]; i++){
        s.p[i] = d.p[i];
    }
    s.p[i] = '\0';
    
}

void my_strncpy(my_string& s,my_string d, int n){
    
    int i;
    for(i=0; i<n; i++){
        s.p[i] = d.p[i];
    }
    s.p[i] = '\0';
}

int my_strcmp(my_string s1,my_string s2){
    
    int i;
    for(i=0; s1.p[i] && s2.p[i]; i++){
        if(s1.p[i] != s2.p[i])
            return s1.p[i] - s2.p[i];
    }
    
    if(s1.p[i] == '\0' && s2.p[i] == '\0')
        return 0;
    else
        return s1.p[i] - s2.p[i];
}

int my_strncmp(my_string s1,my_string s2, int n){
    
    int i;
    for(i=0; i<n; i++){
        if(s1.p[i] != s2.p[i])
            return s1.p[i] - s2.p[i];
        
    }
    
    return 0;
}

void my_strcat(my_string& s,my_string d){
    
    int i = my_strlen(s), j=0;
    for(; d[j]; j++, i++ ){
        s.p[i] = d.p[j];
    }
}
void my_strncat(my_string& s,my_string d, int n){
    
    int i = my_strlen(s), j=0;
    for(; j<n; j++, i++ ){
        s.p[i] = d.p[j];
    }
    s.p[i] = '\0';
    
}

void my_strrev(my_string& s){
    
    char *m = s.p;
    char *n = m + strlen(m)-1;
    int t;
    
    while(m<n){
        t = *m;
        *m = *n;
        *n = t;
        
        m++;
        n--;
    }
    
}

char* my_strchr(my_string& s, char ch){
    
    int i;
    for(i=0; s.p[i]; i++){
        if(s.p[i] == ch)
            return (s.p + i);
    }
    
    return nullptr;
}

char* my_strrchr(my_string& s, char ch){
    
    int i = my_strlen(s);
    for(; i>=0; i--){
        if(s.p[i] == ch)
            return (s.p+i);
    }
    
    return nullptr;
}

int match(char *s, char* sub){
    
    int len = strlen(sub);
    for(int i=0; i<len; i++){
        if(s[i] != sub[i])
            return 0;
    }
    
    return 1;
}


char* my_strstr(my_string& main, my_string sub){
    
    
    int i;
    for(i=0; main.p[i]; i++){
        if(match((main.p+i), sub.p))
            return (main.p+i);
    }
    
    return nullptr;
}

void my_strlower(my_string& s){
    
    int i;
    for(i=0; s.p[i]; i++){
        if(s.p[i] >= 'A' && s.p[i] <= 'Z')
            s.p[i] = s.p[i] + 32;
    }
}

void my_strupper(my_string& s){
    
    int i;
    for(i=0; s.p[i]; i++){
        if(s.p[i] >= 'a' && s.p[i] <= 'z')
            s.p[i] = s.p[i] - 32;
    }
}














