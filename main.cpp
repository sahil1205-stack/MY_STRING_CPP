/******************************************************************************

String Mini Project

*******************************************************************************/
#include"Header.h"
#include"mem_Func.cpp"
#include"fri_func.cpp"

int main()
{
    my_string s1("saihil"), s2, s3;
    
    my_strlower(s1);
    cout << s1;
    
    cout << endl;
    
    my_strupper(s1);
    cout << s1;
    
    
    
    return 0;
}