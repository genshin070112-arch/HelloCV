# HelloCV - 第一次任务提交

本项目是实验室纳新培训第一次任务的成果展示仓库，主要包含了 Linux 环境配置过程、Git 版本控制学习与实践，以及一个使用 C++ 编写的简易四则运算计算器。

## 📁 项目结构

```text
HelloCV/
├── README.md              # 本文件，包含项目说明、环境配置和使用方法
├── notes.md               # (待补充) 所有语雀笔记的链接汇总文档
└── git_training/          # 计算器项目源码文件夹
    ├── functionone.cpp    # 包含加减法功能的源代码
    ├── function2.cpp      # 包含乘除法功能的源代码
    └── .gitignore         # Git忽略规则（已排除可执行文件与编辑器配置）
    
 ## 环境配置
 本次开发环境基于 VMware 虚拟机安装的 Ubuntu 22.04。

    基础系统配置
        安装 Ubuntu 22.04 虚拟机，配置中文输入法。
        更新系统软件包：sudo apt update && sudo apt upgrade

    安装开发工具与环境
        安装基础工具（SSH、Vim、tmux、编译器等）：
        sudo apt install nmap ssh git vim flex bison gcc g++ make cmake openssh-server tmux

        安装 Node.js 环境（使用 nvm 管理）：
        # 使用 nvm 安装 Node.js 22 并设为默认
        nvm install 22
        nvm alias default 22

        # 安装 pnpm 与 pm2
        npm install -g pnpm pm2

        安装 VSCode 用于代码编写
        
 ## 使用方法
 本项目是一个基于命令行的简易计算器。
 
编译与运行
进入 git_training 文件夹，编译并运行 functionone.cpp：
	cd git_training
	g++ functionone.cpp -o functionone
	./functionone

输入格式说明：
运行后，按 数字 运算符 数字 的格式输入（例如：3 + 4 或 10 - 2），按回车即可得到结果。支持加减乘除（+、-、*、/）。


