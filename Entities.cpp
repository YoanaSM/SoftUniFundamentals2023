//
// Created by YoanaM on 4/10/2023.
//
#include<iostream>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;


void readData(const string & buffer , vector<string> & data)
{
    istringstream istr(buffer);
    string strData;

    while(istr >> strData)
        data.push_back(strData);

}
//reads a whole line data from the console
void readData(istream &  input, vector<string> & data)
{

string buffer;
getline(input,buffer);

readData(buffer,data);

}
int main()
{

    vector <string> columns;
    readData(cin,columns);

    size_t numColumns = columns.size();


    vector<string> linearData;

    while(true)
    {
      string buffer;

      getline(cin,buffer);
         if (buffer == "end")
         break;

      linearData.reserve(linearData.size() + numColumns);
      readData(buffer,linearData);

    }
    string searchColumn;
    getline(cin,searchColumn);

    vector<string> :: iterator itColumn = find(columns.begin(),columns.end(),searchColumn);

            size_t searchColIdx = itColumn - columns.begin();

            vector <string> colValues;
            colValues.reserve(linearData.size()/numColumns);

            for(size_t curIdx = searchColIdx;curIdx < linearData.size();curIdx+=numColumns))
    {

    }
            return 0;
}