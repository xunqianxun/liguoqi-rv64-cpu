# 个人介绍：

​	姓名 ：李国旗

​	年级 ：本科二年级

​	专业 ：电子信息工程

# 项目介绍 ：

​	项目实现的是支持RISCV64IM一款五级流水线，可支持机器模式，带有ICACHE和DCACHE，总线使用的AXI4协议连接SOC，其中SOC包含APB和chiplink等协议。可以运行RT-Thread等系统
（最后的代码在./npc/vsrc/ysyx_040228.v)

​	作品是四期的一生一芯项目。

   其中vsrc为五级流水线版本，superscalar文件夹为乱序双发射版本。(但是由於使用的記分板的實現方式所以後面增加difftest需要增加一個沒有必要的順序提交，所以就算是個半成品吧， 但是超標量的問題都會遇到，可以用來作為例子入坑超標量)
   下附乱序双发射架构图：
   ![arch](/home/mulin/ysyx-workbench/arch.jpeg)

