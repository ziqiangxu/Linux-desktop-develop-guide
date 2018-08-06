# deepin应用开发指南 
我从2015年断断续续学习编程，得益于开源运动、便捷的互联网和那些热衷于在互联网分享的技术人，我的技术慢慢地积累起来。如今，我效仿前辈们，为这个世界贡献我的力量，致力于帮助后来者们能够更加容易地踏入编程世界，更容易地入门deepin、Linux GUI的开发。但由于个人精力有限，而且网络上的资源比较丰富，我仅仅分享一些我入门GUI程序开发的一些经验，希望在我笼统的介绍和梳理下能对大家有一些启发。

[deepin](https://www.deepin.com)是一个Linux发行版，所以Linux平台的开发技术都可以被用来开发deepin，这里我们主要讨论GUI编程技术。GUI（Graphic User Interface）中文意思是图形用户界面（因为笔者学的第一门语言是VB，我曾一度以为程序都是要带界面的，哈哈哈，是不是感觉很蠢）

## 1. 从哪里开始?
你如果还没有掌握一门编程语言的话，可以先试着学一门编程语言。这里推荐两个学习网站:    
- [菜鸟教程](http://www.runoob.com)
- [w3cschool](https://www.w3cschool.cn)
> 不要怂，搞一下就知道这个东西有没有意思、简不简单了。反正我觉得很有意思，学了编程，似乎就不会有无聊的时间了。因为根本学不完，哈哈哈哈

## 2. 有哪些常用的GUI开发技术呢
> 其实有好多GUI的开发技术，列举几个我接触到的吧

### 2.1 Qt
[Qt系列：Qt/C++，PyQt，PySide](https://github.com/ziqiangxu/deepin-develop-guide/blob/master/qt.md)

### 2.2 GTK+
这个我是一点都不会[https://www.gtk.org/](https://www.gtk.org/)

### 2.3 electron
[electron](https://electronjs.org/)这个技术很酷，前端用Chromium，后端用Node.js。熟悉web开发的小伙伴，应该上手很快。
> 我记得网站的文档是有坑的，具体想不起来了，大家注意点。。。

### 2.4 qcef
我fork了一个简单的demo，据我了解基于CEF（Chromium Embedded Framework）——Chromium嵌入框架技术，和Qt进行绑定。没有深入研究，大家可以了解一下，熟悉web前端的话，开发起来应该也很快。
[https://github.com/linuxdeepin/qcef/tree/master/browser_demo](https://github.com/linuxdeepin/qcef/tree/master/browser_demo)

## 3 搞起来
> 如果你会一点编程了，那么你可以开始搞了，这里为大家搜集了一些学习案例

### 3.1 dde-dock插件开发指南
官方的说明    
[https://github.com/linuxdeepin/dde-dock/blob/master/plugins/plugin-guide/plugins-developer-guide.md](https://github.com/linuxdeepin/dde-dock/blob/master/plugins/plugin-guide/plugins-developer-guide.md) 
- 我根据官方文档的指引写的[demo]()

这位老哥的插件可以参考学习一下 ：    
- [https://github.com/sonichy/WEATHER_DDE_DOCK](https://github.com/sonichy/WEATHER_DDE_DOCK)
- [https://github.com/sonichy/CMDU_DDE_DOCK](https://github.com/sonichy/CMDU_DDE_DOCK)

### 3.2 词典
- [redict](https://github.com/rekols/redict)此人水平较高，可能他的代码不适合用来学习
- [freedict](https://github.com/ziqiangxu/freedict)

## 4 应用打包
> 好不容易搞出来一个程序，快点分享给大家用吧。扔个源代码可不行，好多普通用户是不会编译的呀。所以我们开发者要将开发好的应用程序进行打包，便于普通用户安装使用。

### flatpak格式    
- [官方文档](http://docs.flatpak.org/en/latest/introduction.html)    
- [CSDN的文章](https://blog.csdn.net/beyond_zhangna/article/details/78335747)
- [社区的GUI工具](https://bbs.deepin.org/forum.php?mod=viewthread&tid=152879)    

### deb格式    
- [一篇介绍得比较详细的文章](https://www.cnblogs.com/Genesis-007/p/5219960.html)
- 您也可以在应用商店搜索Debreate这个GUI工具

## 5 更多参考

### 5.1 deepin的官方文档
- [deepin文档中心](https://docs.deepin.io)
- [DTK文档](https://docs.deepin.io/dtk/index.html)

### 5.2 社区的力量
- [社区开发精品帖](https://bbs.deepin.org/forum.php?mod=forumdisplay&fid=49&filter=digest&digest=1)
- [老王的计算机书籍推荐清单](https://www.jianshu.com/p/9d7bc8e84087)

### 更多技能
- git 代码版本管理工具

大家有建议，欢迎积极[跟帖](https://github.com/ziqiangxu/deepin-develop-guide/issues/new)，如有错误，恳请[指正
](https://github.com/ziqiangxu/deepin-develop-guide/issues/new)，求助当然也欢迎[ziqiang_xu@yeah.net](mailto:ziqiang_xu@yeah.net)

