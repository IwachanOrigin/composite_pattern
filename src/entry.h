
/**
 * @date 23th Sep. 2021
 * ref: Java言語で学ぶデザインパターン入門 Composite
 */

/*
 * Base Class
 */

#ifndef ENTRY_H_
#define ENTRY_H_

#include <string>
#include <iostream>

class Entry 
{
public:
    Entry();
    virtual ~Entry();

    virtual std::string name() = 0;
    virtual int size() = 0;

    virtual void printList(const std::string prefix) = 0;
    void printList() { this->printList(""); }
    
    
private:
    // copy constructor && assignment copy
    Entry(const Entry&);
    Entry& operator=(const Entry&);

};

#endif // ENTRY_H_
