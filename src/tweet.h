#ifndef TWEET_H_CE980721
#define TWEET_H_CE980721

namespace twitter {
  
  class tweet {
    public:
      tweet();
      tweet(const json& _data);
      
    private:
      bool _valid;
  };
  
};

#endif /* end of include guard: TWEET_H_CE980721 */
