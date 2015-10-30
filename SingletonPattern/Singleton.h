class Singleton{
  public:
  static Singleton *self();
  int getAnswerToTheUniverse() const {
    return answerToTheUniverse;
  }
  private:
  static const int answerToTheUniverse = 42;
  Singleton(){};
};
