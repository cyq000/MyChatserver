#ifndef GROUPUSER_H
#define GROUPUSER_H

#include "user.hpp"

//群组用户，多了个role角色信息，从User类直接继承，复用User的其它信息
//从群组表中得到用户信息，除了能得到用户id，name，state，还需要得到
//其在组里的身份。      所以创建GroupUser类继承User
class GroupUser : public User
{
public:
    void setRole(string role)
    {
        this->_role = role;
    }

    string getRole()
    {
        return this->_role;
    }
private:
    string _role;
};

#endif