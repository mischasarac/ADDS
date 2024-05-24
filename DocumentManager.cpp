#include "DocumentManager.h"


void DocumentManager::addDocument(string name, int id, int license_limit){
    Document doc(name, id, license_limit);
    borrowed_documents[id] = doc;
    document_names[name] = id;
}

void DocumentManager::addPatron(int patronID){
    patron_ids.insert(patronID);
}

int DocumentManager::search(string name){
    return document_names[name];

} // returns docid if name is in the document collection or 0 if the name is not in the collection

bool DocumentManager::borrowDocument(int docid, int patronID){
    if(patron_ids.find(patronID) == patron_ids.end()){
        return false;
    }

    if(borrowed_documents[docid].getLicenseLimit() == 0){
        return false;
    } else {
        borrowed_documents[docid].setLicenseLimit(borrowed_documents[docid].getLicenseLimit()-1);
    }


    return true;
    

}  // returns true if document is borrowed, false if it can not be borrowed (invalid patronid or the number of copies current borrowed has reached the license limit)

void DocumentManager::returnDocument(int docid, int patronID){
    if(patron_ids.find(patronID) == patron_ids.end()){
        return;
    }

    

    borrowed_documents[docid].setLicenseLimit(borrowed_documents[docid].getLicenseLimit()+1);

    return;

}