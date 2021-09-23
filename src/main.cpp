
/**
 * @date 23th Sep. 2021
 * ref: Java����Ŋw�ԃf�U�C���p�^�[������ Composite
 */

#include <iostream>

#include "directory.h"
#include "file.h"

int main(int argc, char* argv[])
{
    std::cout << "Making root entries..." << std::endl;

    Directory* rootdir = new Directory("root");
    Directory* bindir = new Directory("bin");
    Directory* tmpdir = new Directory("tmp");
    Directory* usrdir = new Directory("usr");
    rootdir->add(bindir);
    rootdir->add(tmpdir);
    rootdir->add(usrdir);
    bindir->add(new File("vi", 10000));
    bindir->add(new File("latex", 20000));
    rootdir->printList();

    std::cout << "" << std::endl;
    std::cout << "Maing user entries..." << std::endl;
    Directory* yuki = new Directory("yuki");
    Directory* hanako = new Directory("hanako");
    Directory* tomura = new Directory("tomura");
    usrdir->add(yuki);
    usrdir->add(hanako);
    usrdir->add(tomura);

    yuki->add(new File("diary.html", 100));
    yuki->add(new File("composite.java", 200));
    hanako->add(new File("memo.tex", 300));
    tomura->add(new File("game.doc", 400));
    tomura->add(new File("junk.mail", 500));
    rootdir->printList();

    return 0;
}