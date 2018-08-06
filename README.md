# deepin应用开发指南 
我从2015年断断续续学习编程，得益于开源运动、便捷的互联网和那些热衷于在互联网分享的技术人，我的技术慢慢地积累起来。如今，我效仿前辈们，为这个世界贡献我的力量，致力于帮助后来者们能够更加容易地踏入编程世界。但由于个人精力有限，而且网络上的资源比较丰富，我仅仅分享一些我入门GUI程序开发的一些经验，希望在我笼统的介绍和梳理下能对大家有一些启发。

[deepin](https://www.deepin.com)是一个Linux发行版，所以Linux平台的开发技术都可以被用来开发deepin，这里我们主要讨论GUI编程技术。

## 从哪里开始?
你如果没有掌握一门编程语言的话，可以先试着学一门编程语言。这里推荐两个学习网站:    
- [菜鸟教程](http://www.runoob.com)
- [w3cschool](https://www.w3cschool.cn)
> 不要怂，搞一下就知道这个东西有没有意思了。反正我觉得很有意思，学了编程，似乎就不会有无聊的时间了。因为根本学不完，哈哈哈哈

## 开发技术
[Qt系列：Qt/C++，PyQt，PySide](https://github.com/ziqiangxu/deepin-develop-guide/blob/master/qt.md)

#### qcef应用
我fork了一个简单的demo，没有深入研究，大家可以了解一下，熟悉web前端的话，开发起来应该很快。
[https://github.com/linuxdeepin/qcef/tree/master/browser_demo](https://github.com/linuxdeepin/qcef/tree/master/browser_demo)

#### dde-dock插件开发指南
官方的说明    
[https://github.com/linuxdeepin/dde-dock/blob/master/plugins/plugin-guide/plugins-developer-guide.md](https://github.com/linuxdeepin/dde-dock/blob/master/plugins/plugin-guide/plugins-developer-guide.md)    
这位老哥的插件可以参考学习一下 ：    
1. [https://github.com/sonichy/WEATHER_DDE_DOCK](https://github.com/sonichy/WEATHER_DDE_DOCK)
2. [https://github.com/sonichy/CMDU_DDE_DOCK](https://github.com/sonichy/CMDU_DDE_DOCK)

### 应用打包
- flatpak格式    
[官方文档](http://docs.flatpak.org/en/latest/introduction.html)    
[CSDN的文章](https://blog.csdn.net/beyond_zhangna/article/details/78335747)
[社区的GUI工具](https://bbs.deepin.org/forum.php?mod=viewthread&tid=152879)    

- deb格式    
[一篇介绍得比较详细的文章](https://www.cnblogs.com/Genesis-007/p/5219960.html)    
您也可以在应用商店搜索Debreate这个GUI工具

### 官方文档
[deepin文档中心](https://docs.deepin.io)
[DTK文档](https://docs.deepin.io/dtk/index.html)

[社区开发精品帖](https://bbs.deepin.org/forum.php?mod=forumdisplay&fid=49&filter=digest&digest=1)


大家有建议，欢迎积极[跟帖](https://github.com/ziqiangxu/deepin-develop-guide/issues/new)，如有错误，恳请[指正
](https://github.com/ziqiangxu/deepin-develop-guide/issues/new)

推荐：
[老王的计算机书籍推荐清单](https://www.jianshu.com/p/9d7bc8e84087)
