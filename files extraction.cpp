#include<iostream>
#include<cstdio>
using namespace std;


void calculate()
{
    freopen("test1.txt","r",stdin);
    int testcases,no_of_elements,specific_element,each_element_of_list;
    cin>>testcases;
    while(testcases!=0)
    {

        int c=0;
        cin>>no_of_elements>>specific_element;
    for(int i=0;i<no_of_elements;i++)
    {

            cin>>each_element_of_list;
            if(each_element_of_list==specific_element)
                c=1;
    }
    if(c==1)
    {
            cout<<"1\n";
    }
    else{
        cout<<"-1\n";}
    testcases--;
}
}


int main()
{
    calculate();
    return 0;
}
