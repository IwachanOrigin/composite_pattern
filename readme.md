# composite_pattern
「増補改訂版Java言語で学ぶデザインパターン入門」のComposite Patternを参考にC++で実装し直したつもりのソリューションです。
動作確認はVisual Studio 2017で実施しています。

## what is the Composite pattern?
容器と中身を同一視し、再帰的な構造を形作るデザインパターンの一種。  
これは、複数と単数の同一視とも呼ぶことが出来る。  
つまり、複数個のものを集めてまるで1つのものであるかのように取り扱うことが出来る。

## Characters in the composite pattern
- Leaf(葉)の役  
  中身を表す役。この役には、他のものを入れることが出来ない。  
  Fileクラスが相当する。

- Composite(複合体)の役  
  容器を表す役。Leaf役やComposite役を入れることが出来る。  
  Directoryクラスが相当する。

- Componentの役  
  Leaf役とComposite役を同一視するための役。Component役をLeaf役とComposite役の基底クラスにすることで実現する。  
  Entryクラスが相当する。

- Client(依頼者)の役  
  Compositeパターンの利用者。  
  main.cppが相当する。

## Output
![output](https://user-images.githubusercontent.com/12496951/134543589-9e351d76-2be6-4b32-987b-b3f2b31d6d75.png)

## Dependency
- MSVC 15+

## Setup
1. git clone this repository.
2. open 'composite_pattern.sln'
3. Please Build & Run :)

## Authors
Yuji Iwanaga

