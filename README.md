# Learning & Debug Diary

### 2019/3/29 icsLab8 PartA

1. 测试完最后一部分之前，永远不要相信自己已经debug完成了。
2. getAddress 不应该free？
3. parseCmdArg 对ret的定义一定要放在while循环里？

### 2019/4/6 SE230 Homework Ⅰ&Ⅱ

1. maven配置使用 [java课程：3小时学会使用Maven构建项目](<https://www.bilibili.com/video/av38517296?t=687&p=9>)
2. 配置Tomcat [使用IntelliJ IDEA配置Tomcat](https://www.cnblogs.com/Knowledge-has-no-limit/p/7240585.html)
3. 配置Spring Boot例子 [Spring Boot起步：a RESTful Web Service](<https://www.jianshu.com/p/0b389f54377d>)
4. package语句编译 [java中不带package和带package的编译运行方式](https://blog.csdn.net/com_stu_zhang/article/details/25112591)
5. IDEA run错误[idea 错误: 找不到或无法加载主类(汇总贴)](https://blog.csdn.net/Angry_Mills/article/details/81511130)。未能完全解决。针对情况二，取消勾选Exclude out path，然后apply，以后就都正常了，原因不详。另外还有说提前建空项目文件夹的，也可以，不过麻烦。
6. WordLadder中，用javac编译和IDEA run结果不一样，原因是因为set没有把字典读进去。原因不详，解决方案：返工重做。
7. 单元测试[Java开发工具IntelliJ IDEA单元测试和代码覆盖率图解](https://www.cnblogs.com/xiongmaopanda/p/3314660.html)


### 2019/4/8 DataBase Group discussion Ⅰ 

1. question 1：Mysql WorkBenck 的sql指令是一句一句执行的，ctrl + enter 执行当前光标指令， 
ctrl + shift + enter 执行本sql文件全部指令。那么仅执行一两句的话，要注意在这两语句里
使用到的变量等，是否在执行时正常声明。
2. 第一题 1.sql用到了rank()over 自动给table排序的函数。不钻牛角尖了......[不钻牛角尖，多问问别人](https://www.bilibili.com/video/av6491934?from=search&seid=11470938549135953630)
2. select语句的执行顺序：？
3. 2.sql [MySQL中delimiter关键字的使用](https://blog.csdn.net/pan_junbiao/article/details/86291722)
