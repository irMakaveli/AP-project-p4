#ifndef FEED_HPP
#define FEED_HPP
class feed
{
    int feeds;
    public :
    feed(int);
    void setFeed(int);
    int getFeed();
    int getFeed(int ,int);
    bool operator+(int);
};
#endif