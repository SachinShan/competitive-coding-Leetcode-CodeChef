public:
bool isPrime(int n)
{
    if (n == 2)
    {
        return true;
    }
    for (int i = 2; i <= ceil(sqrt(n)); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int get_prime(int n)
{
    if (n == 1)
    {
        return 2;
    }
    int i = n;
    int j = n;
    while (!isPrime(i))
    {
        i--;
    }
    while (!isPrime(j))
    {
        j++;
    }
    if (n - i <= j - n)
    {
        return i;
    }
    else
        return j;
}

Node *primeList(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *temp = head;

    while (temp != NULL)
    {
        int x = temp->val;
        int y = get_prime(x);

        temp->val = y;
        temp = temp->next;
    }
    return head;
}