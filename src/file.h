
/**
 * @date 23th Sep. 2021
 * ref: Java言語で学ぶデザインパターン入門 Composite
 */

#ifndef FILE_H_
#define FILE_H_

#include "entry.h"

class File : public Entry
{
public:
    explicit File(const std::string name, const int size);
    ~File() {}

    std::string name() override { return m_name; }
    int size() override { return m_size; }
    void printList(const std::string prefix) override;

private:
    std::string m_name;
    int m_size;
};


#endif // FILE_H_