#ifndef GROUPUSER_H
#define GROUPUSER_H


#include "user.hpp"

//群组用户，多了一个role表示 用户在群组中的角色，
//从User类直接继承，复用User的信息

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