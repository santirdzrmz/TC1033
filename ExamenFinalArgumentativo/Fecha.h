class Fecha { 
    public: 
    Fecha();
    virtual ~Fecha();
    void setDia(int userDia);
    void setMes(int userMes);
    int getDia();
    int getMes();
    private: 
    int dia;
    int mes;
};