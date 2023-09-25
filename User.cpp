#include<string>
#include<vector>
#include "User.h"
class User{
    private:
        std::string userName;
        std::string email;
        std::vector<User*> friendList;

    public:
        User(std::string userName, std::string email){
            this->userName = userName;
            this->email = email;
        }
        void addFriend(User* user){
            friendList.push_back(user);
        }

        int numFriends(){
            return friendList.size();
        }

        void removeFriend(std::string userName){
            for(int i=0;i<friendList.size();i++){
                if(friendList[i]->userName == userName){
                    friendList.erase(friendList.begin()+i);
                    break;
                }
            }
        }

        User* getFriendAt(int index){
            return friendList[index];
        }
};