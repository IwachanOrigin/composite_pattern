
/**
 * @date 23th Sep. 2021
 * ref: Java����Ŋw�ԃf�U�C���p�^�[������ Composite
 */

#include "file.h"

File::File(const std::string name, const int size)
    : Entry()
    , m_name(name)
    , m_size(size)
{
}

void File::printList(const std::string prefix)
{
    std::cout << prefix << "/" << m_name << "(" << m_size << ")" << std::endl;
}