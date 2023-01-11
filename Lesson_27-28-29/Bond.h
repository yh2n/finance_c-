class Bond {
    public:
        Bond();

        Bond(double, double, double, char);

        double getBondPrice();

        void setPrincipal(double);
        double getPrincipal();

        void setRate(double);
        double getRate();

        void setYearsToMaturity(double);
        double getYearsToMaturity();

        void setPaymentType(char);
        double getPaymentType();

    private:
         double principal;
         double rate;
         double years_to_maturity;
         double payment_type;

};