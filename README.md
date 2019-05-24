# SpotlightPlugin
删除状态栏聚焦搜索图标的插件

由于“聚焦”是系统级应用，运行前请关闭SIP（不懂请百度）、备份原程序，或者把它复制出来，然后修改项目内的脚本之后运行

聚焦应用路径在 `/System/Library/CoreServices/Spotlight.app`

这里只说直接在应用的原目录运行
```
# 这里认为你已经关闭了SIP
# 获取管理员权限
sudo su
# 进入到应用目录
cd /System/Library/CoreServices
# 修改 Spotlight.app 的所有者
chown -R 你的用户名:wheel Spotlight.app
```

到这里已经可以跑项目了，运行，然后看 Build log 看是否一切正常

然后重启 Spotlight 应用，打开活动监视器，找到“聚焦”，把它退出，正常它会自动启动，如果没有那就手动打开它

这时候按下快捷键（Command + 空格）看是不是可以看到搜索框


```
# 恢复应用的所有者
chown -R root:wheel Spotlight.app
```
