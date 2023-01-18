class Bond {
    public:
        const char kBondAnnualType = 'A';
        const char kBondSemiannualType = 'S';
        const char kBondQuaterlyType = 'Q';
        const int kBondInvalidType = 99;

        Bond(double, double, double, double, char);
        // deconstructor
        ~Bond();

        double getBondPrice();

        void setPrincipal(double);
        double getPrincipal();

        void setCouponRate(double);
        double getCouponRate();

        void setMarketRate(double);
        double getMarketRate();

        void setYearsToMaturity(double);
        double getYearsToMaturity();

        void setPaymentType(char);
        double getPaymentType();

    private:
         double principal;
         double coupon_rate;
         double market_rate;
         double years_to_maturity;
         double payment_type;

};