﻿// 没写过.md这玩意，就写个txt文档凑合一下README好了 qwq

本说明档用于解释代码思路与运行方式，以及一些运行数据的汇总。

本项目完成一个比较 naive 的爬虫程序，可以爬取 info.ruc.edu.cn 下的所有 （？） 网站源码和一些可能未被过滤掉后缀名的奇怪文件

main.cpp 主过程，核心算法使用BFS，仅用作控制程序奔跑（运行）以及将下载的网页输出到一个指定文件 result.out 中。

loader.cpp 用于下载给定的网页，并读入其所有内容，删除临时文件，以及下载失败等异常处理

extracter.cpp 可以提取下载网页中的url，丢进一个临时的 queue 中，称为rawurls，等待后续处理。

filter.cpp 用于处理相对/绝对路径，并过滤掉部分不需要的文件。

总计 ：爬取网页 6500+  用时 18'17"  网页源码总大小 114MB

update log --- file added at 3.21

窝之前忘记把 internetworm.h 提交了qwq，这里加一下。