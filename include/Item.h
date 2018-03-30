#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item
{
    public:
        Item(std::string name, int amount);
        virtual ~Item();
        bool operator< (const Item & msgObj) const;
        friend std::ostream& operator<<(std::ostream& os, const Item& obj);

        // Getters
        std::string getName() const;
        int getAmount() const;

        // Actions
        void informations() const;
        int add(int amount) const;
        int rem(int amount) const;
        bool isEmpty() const;

    protected:

    private:
        mutable std::string m_name;
        mutable int m_amount;
};

#endif // ITEM_H
