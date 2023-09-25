#ifndef _user_h
#define _user_h
#include <string>
#include <vector>

class User
{
private:
    std::string userName;
    std::string email;
    std::vector<User *> friendList;

public:
    User(std::string userName, std::string email);

    void addFriend(User *user);
    int numFriends();
    void removeFriend(std::string userName);
    User *getFriendAt(int index);
};
#endif