
/**
 * @date 23th Sep. 2021
 * ref: Java����Ŋw�ԃf�U�C���p�^�[������ Composite
 */

#ifndef DIRECTORY_H_
#define DIRECTORY_H_

#include "entry.h"
#include <vector>

class Directory : public Entry
{
public:
    /*
     * c++�ł͒ʏ�A���N���X��h���N���X�̃��\�b�h�ň����^���قȂ��Ă��Ă�
     * ���O�B�����s���Ă��܂��B���̂��߁Apublic�ɂ���printList()�������Ȃ��Ȃ�B
     * �h���N���X���ŃI�[�o�[���[�h�����֐�(printList)�����ׂČ�����悤�ɂ��邽�߂̃g���b�N
     */
    using Entry::printList;

    explicit Directory(const std::string name);
    ~Directory();

    std::string name() override { return m_name; }
    int size() override;

    void add(Entry *entry);

protected:
    void printList(const std::string prefix) override;

private:
    std::string m_name;
    std::vector<Entry*> m_directory;
};

#endif // DIRECTORY_H_