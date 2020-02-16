typedef char*CString
#include<iostream>
#include<iomanip>
main()
{
    CString str;
    char temp[]="Hello World";
    str = temp;
    cout<<str<<endl;
}