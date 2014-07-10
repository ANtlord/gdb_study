#ifndef MYCLASS_H
#define MYCLASS_H
class myclass {
public:
    myclass ();
    virtual ~myclass ();
    int b;
    int getB() const;
    void set_a(int value);

protected:
    static int a;
    mutable int _mute;

private:
    int _a;
    /* data */
};
#endif //MYCLASS_H
