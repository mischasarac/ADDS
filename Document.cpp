#include "Document.h"


// Constructors
Document::Document(){
    name = "";
    doc_id = 0;
    license_limit = 0;
}

Document::Document(string name, int doc_id, int license_limit){
    this->name = name;
    this->doc_id = doc_id;
    this->license_limit = license_limit;
}


// Getters
string Document::getName(){
    return name;
}

int Document::getDocID(){
    return doc_id;
}

int Document::getLicenseLimit(){
    return license_limit;
}


// Setters
void Document::setName(string name){
    this->name = name;
}

void Document::setDocID(int doc_id){
    this->doc_id = doc_id;
}

void Document::setLicenseLimit(int license_limit){
    this->license_limit = license_limit;
}