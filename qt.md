## Qt的一个简短的介绍
Qt是一个跨平台的C++/C图形库，被广泛用于桌面程序和嵌入式程序开发。鉴于它的强大，它和许多编程语言进行了绑定，如Python、Java、Go、Ruby、C#、Ada、Pascal、PHP、Haskell、Lua，可以使用这些语言来进行开发。据我所知，除了用C++/Qt，就PyQt用得比较多，网络上的资料也比较多。在Qt官方文档可以找到jambi（Qt的Java绑定）的example，不知道是不是官方做的绑定，本人不了解Java，不做深究。
> 本人对PyQt熟悉一点，并且Qt官方对Python进行了支持（PySide），所以大家学习PyQt和Qt/C++比较好，会少踩一些坑。基于多方面的考虑，deepin官方开发的桌面GUI程序基本都是使用Qt/C++技术，我们作为社区开发者，并不一定要和官方选用相同的技术，用自己喜欢或者擅长的技术就可以啦。大家多多学习吧，多学一些东西可能会给你带来一些意想不到的收获。比如说我，现在就靠着PyQt这个技术混饭吃。下面是我搜集的一些资料

## 1. Qt/C++
Qt官网 [https://www.qt.io/](https://www.qt.io/) 主要用于下载Qt的安装包    
Qt的中文社区 [http://www.qter.org/](http://www.qter.org/) 我的第一个Qt程序是在这个网站的指导下写出来的    
> 我的学习心得：
> 1. 学好C++；
> 2. 利用好QtCreator的帮助文档；
> 3. 可以了解一下QML，我觉得这是一种更加先进的GUI开发方式
> 4. 在会Qt/C++之后，用PyQt或者PySide2开发的时候会很快的

### 1.1 Qt/C++开发环境搭建
[https://bbs.deepin.org/forum.php?mod=viewthread&tid=157889&extra=page%3D1](https://bbs.deepin.org/forum.php?mod=viewthread&tid=157889&extra=page%3D1)

## 2. Python和Qt
> 在我使用C++和Python开发Qt应用程序的时候，用Python显然是要迅速一些。但是Qt类的某些功能在Python是不支持的，而且官方对C++的支持也更加完善。使用
Python开发Qt程序的时候也是可以和QML结合的。

### 2.1 PyQt
> PyQt不是Qt的官方出品，但是我觉得足够好用。有PyQt4和PyQt5，PyQt5新一些
PyQt官网 [http://pyqt.sourceforge.net/Docs/PyQt5/](http://pyqt.sourceforge.net/Docs/PyQt5/) PyQt官方的参考手册

PyQt中文教程　[http://code.py40.com/pyqt5/](http://code.py40.com/pyqt5/)

PyQt tutorial [下载PDF](https://github.com/ziqiangxu/sources1/blob/master/deepin/pyqt_tutorial.pdf) 这个是一个前辈发给我的，用着不
错

PyQt5 tutorial [http://zetcode.com/gui/pyqt5/](http://zetcode.com/gui/pyqt5/) 这个是老王推荐的，我感觉挺不错的    
> 我的学习心得：
> 1. 用PyCharm这个IDE，按【CTR + B】可以快速跳转函数的定义和使用处，以便你查看更多细节；
> 2. 如果你对Qt/C++比较了解的话，你会发现某些Qt/C++的类函数不被PyQt所支持；
> 3. 了解一下SIP，可能在你想要回收Qt对象的时候有大用处。

### 2.2 PySide2
> 有PySide和PySide2，[PySide2](https://www.qt.io/qt-for-python)是Qt官方推出的```Qt for Python```
我简单地使用了一下PySide2，PySide2和PyQt5在使用上是差不多。在开发私有软件的时候,需要注意了，PySide2和PyQt5在开源协议上是有差别的

### 2.3 Qt/Python开发环境的搭建
1. 推荐使用PyCharm这个IDE工具
2. 推荐在Python的虚拟环境中安装PySide和PyQt
```
pip install PySide2    # 安装PySide2
pip install PyQt5    # 安装PyQt5
```
