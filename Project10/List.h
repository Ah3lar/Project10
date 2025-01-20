
template <typename T>
class List {
private:
    struct Node {
        T data;
        Node* previous;
        Node* following;

        Node(const T& data) : data(data), previous(nullptr), following(nullptr) {}
    };

    Node* head;
    Node* tail;

public:
    List();
    ~List();

    void push_back(const T& value);
    void push_front(const T& value);
    void pop_front();
    void pop_back();
    T back() const;
    T front() const;
    void clear();
    bool isEmpty() const;

    int find(const T& value) const;
    void erase(int position);
    void reverse();
};

