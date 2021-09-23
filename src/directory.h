
/**
 * @date 23th Sep. 2021
 * ref: Java言語で学ぶデザインパターン入門 Composite
 */

#ifndef DIRECTORY_H_
#define DIRECTORY_H_

#include "entry.h"
#include <vector>

class Directory : public Entry
{
public:
    /*
     * c++では通常、基底クラスや派生クラスのメソッドで引数型が異なっていても
     * 名前隠蔽を行ってしまう。そのため、publicにしたprintList()が見えなくなる。
     * 派生クラス側でオーバーロードした関数(printList)がすべて見えるようにするためのトリック
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