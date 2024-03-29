#ifndef NetflixSystem_H
#define NetflixSystem_H
#include "user.h"
#include <vector>
#include <string>
class NetflixSystem{
public:
    void pushBackUser(std::string name, std::string email, std::string pass, int age, int publisher, int insystem);
    std::string firstString(std::string line);
    bool isFourCommands(std::string line);
    bool isPublisher(int i);
    bool userExists(std::string wantSignUp);
    int howManySpace(std::string line);
    int firstChar(std::string line,std::string str);
    int lastChar(std::string line, int i);
    void signUp(std::string line);
    std::string whatYouWant(std::string line,std::string str);
    bool userMatchPassword(std::string line);
    void Login(std::string line);
    void setAllUsersOff();
    int whoLoggedIn(std::string line);
    void setUserOnline(int i);
    void run(std::string line);
    void PostFilm(std::string line);
    void EditFilm(std::string line);
    int whoIsInSystem();
    bool thisStrExists(std::string line,std::string str);
    void deleteFilmid(std::string line);
    void addMoney(std::string line);
    void FollowPublisher(std::string line);
    void showFollowers(std::string line);
    std::string showUserNameWithID(int User_id);
    std::string showMailWithUserID(int User_id);
    std::string showPassWithID(int User_id);
    int showAgeWithID(int User_id);
    int showIsPublisherWithID(int User_id);
    int showInSystemWithID(int User_id);
    void showUnseenNotfs(std::string line);
    void BuyFilm(std::string line);
    bool thisFilmIDGotDeleted(int filmID);
    int showPriceOfThisFilm(int filmID);
    std::string showPublisherOfThisFilm(int filmID);
    std::string showMovieNameOfThisFilm(int filmID);
    std::string showSummaryOfThisFilm(int filmID);
    std::string showDirectorOfThisFilm(int filmID);
    int showYearOfThisFilm(int filmID);
    int showLengthOfThisFilm(int filmID);
    void showSeenNotfs(std::string line);
    int showWhichUserWithFilmId(int filmID);
    void commentOnFilm(std::string line);
    void replyOnComment(std::string line);
    void DeleteComment(std::string line);
    bool thisCmIsAvailble(int filmID, int cmID);
    bool checkEmailSyntax(std::string name);
    void rateOnFilm(std::string line);
    bool forRateOrCmThisFilmHasBougth(int who,int filmID);
    void getSalary(std::string line);
    int showWhichUserHasCommentorID(int cmID, int who);
    bool thisFilmHastThisCmId(int filmID, int cmID, int who);
    void filterFilmsPublished(std::string line);
    void filterAllFilms(std::string line);
    void showDetailsOfFilm(std::string line);
    bool thisFilmHasBoughtByThisPerson(int filmID, int who);
    bool thisFilmExists(int filmID);
    void filterPurchasedFilms(std::string line);
private:
    std::vector<User*> users;
    int idfilm = 0;
    int numOfAllComments = 0;
};

#endif