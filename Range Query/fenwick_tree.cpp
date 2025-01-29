class FBIT
{
    vector<long long int> fr;
    long long int n;

public:
    FBIT(long long int n)
    {
        fr.resize(n + 1, 0);
        this->n = n + 1;
    }

    void update(long long int id, long long int val)
    {
        while (id < n)
        {
            fr[id] += val;
            id += (id & (-id));
        }
    }
    long long int query(long long int id)
    {
        long long int sum = 0;
        while (id > 0)
        {
            sum += fr[id];
            id -= (id & (-id));
        }

        return sum;
    }
};
