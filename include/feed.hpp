#ifndef FEED_HPP
#define FEED_HPP
class feed
{
    int feeds;
    public :
    feed(int);
    feed();
    int buyFeed(int);
    void setFeed(int);
    int getFeed();
    int getFeed(int);
    bool operator+(int);
};
#endif
