
/**
 * @date 23th Sep. 2021
 * ref: Java言語で学ぶデザインパターン入門 Composite
 */

#include "directory.h"
#include "file.h"

Directory::Directory(const std::string name)
    : Entry()
    , m_name(name)
{
}

Directory::~Directory()
{
}

int Directory::size()
{
    int size = 0;
    for (Entry *e : m_directory) {
        size += e->size();
    }
    return size;
}

void Directory::add(Entry* entry)
{
    m_directory.push_back(entry);
}

void Directory::printList(const std::string prefix)
{
    std::cout << prefix << "/" << m_name << "(" << this->size() << ")" << std::endl;
    for (Entry *e : m_directory) {
        e->printList(prefix + "/" + m_name);
    }
}