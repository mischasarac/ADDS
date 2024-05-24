#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <iostream>
#include <string>


using namespace std;


class Document{
private:
    string name;
    int doc_id;
    int license_limit;

public:
    Document();
    Document(string name, int doc_id, int license_limit);

    string getName();
    int getDocID();
    int getLicenseLimit();

    void setName(string name);
    void setDocID(int doc_id);
    void setLicenseLimit(int license_limit);

};


#endif // DOCUMENT_H
