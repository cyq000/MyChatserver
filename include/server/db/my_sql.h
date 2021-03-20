#ifndef MY_SQL_H
#define MY_SQL_H


#include<mysql/mysql.h>
#include<string>
#include<muduo/base/Logging.h>
using namespace std;



// 数据库操作类
class MySQL
{
private:
    MYSQL *_conn;
public:
    // 初始化数据库连接
    MySQL();

    // 释放数据库连接资源
    ~MySQL();

    // 连接数据库
    bool connect();

    // 更新操作
    bool update(string sql);

    // 查询操作
    MYSQL_RES* query(string sql);

    //获取连接
    MYSQL* getConnection();
};


#endif