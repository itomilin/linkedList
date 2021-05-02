#include "node.hpp"
#include <iostream>

class DoublyLinkedList
{
public:
    DoublyLinkedList() = default;
    ~DoublyLinkedList() = default;

    // Проверка списка на пустоту.
    bool isEmpty();

    // Очистка всех элементов списка.
    void clear();
    // Удаление элемента по индексу.
    void remove(int index);
    // Удаление первого элемента.
    void removeTail();
    // Удаление последнего элемента.
    void removeHead();

    // Показать количество элементов в списке.
    int size();
    // Вставить новый элемент в конец списка.
    void addEnd(int value);
    // Изменить данные элемента по индексу. index - позиция, value - new данные
    void update(int index, int value);

    // Показать голову списка (самый последний элемент списка).
    void showHead();
    // Показать хвост списка (самый первый элемент списка).
    void showTail();
    // Показать весь список.
    void showList();


private:
    // Храним количество элементов в списке.
    int _count { 0 };
    // Храним первый элемент списка.
    Node *head { nullptr };
    // Храним последний элемент списка.
    Node *tail { nullptr };

};

void DoublyLinkedList::addEnd(int value)
{
    // Создаем новый элемент.
    Node *newNode = new Node();
    newNode->data = value;
    newNode->pNext = nullptr;
    newNode->pPrev = nullptr;

    // Проверяем, список на пустоту.
    if (isEmpty())
    {
        /**
         * Когда список пустой, тогда присваиваем на
         * голову и хвост созданный элемент.
         */
        head = newNode;
        tail = newNode;
    }
    else
    {
        /**
         * Текущий head является первым, поэтому ставим на его pNext
         * на новый элемент.
         */
        head->pNext = newNode;
        // На pPrev ставим предыдущий head
        newNode->pPrev = head;
        // Смещаем голову списка на newNode, новый элемент становится головой.
        head = newNode;
    }

    // Увеличиваем количество элементов в списке.
    ++_count;
}

void DoublyLinkedList::showHead()
{
    if (isEmpty())
    {
        std::cout << "List is empty!" << std::endl;
        return;
    }
    std::cout << head->data << std::endl;
}

void DoublyLinkedList::showTail()
{
    if (isEmpty())
    {
        std::cout << "List is empty!" << std::endl;
        return;
    }
    std::cout << tail->data << std::endl;
}

void DoublyLinkedList::showList()
{
    // Задаем текущему элементу хвост списка т.е первый элемент.
    auto current = tail;
    /**
     * Как только pNext == nullptr, значит дошли до головного элемента и список
     * завершился. Пока pNext != nullptr, смещаем указатель.
     */
    while (current != nullptr)
    {
        std::cout << current->data << std::endl;
        // Сдвигаем элементы, перемещая указатель на следующий элемент.
        current = current->pNext;
    }
}

void DoublyLinkedList::update(int index, int value)
{
    if (isEmpty())
    {
        std::cout << "List is empty! Nothing to update!" << std::endl;
        return;
    }

    if (index > _count - 1 || index < 0)
    {
        std::cout << "Index out of range" << std::endl;
        return;
    }

    // Ставим указатель первого элемента на current
    Node *current = tail;

    // Смещаем указатель на заданный индекс.
    for (int i = 0; i != index; ++i)
    {
        current = current->pNext;
    }

    // Изменяем данные.
    current->data = value;
}

int DoublyLinkedList::size()
{
    return _count;
}

void DoublyLinkedList::removeHead()
{
    if (head == nullptr)
    {
        std::cout << "List is empty! Nothing to remove!" << std::endl;
        return;
    }

    // Берем адрес головы.
    Node *current = head;
    if (_count == 1)
    {
        head = nullptr;
        tail = nullptr;
        delete current;
    }
    else
    {
        // Смещаем голову на предыдущий элемент, теперь он становится первым.
        head = current->pPrev;
        // Изменяем указатель pNext на nullptr, тем самым обрывая список.
        head->pNext = nullptr;
        // Освобождаем память текущей головы.
        delete current;
    }
    --_count;
}

void DoublyLinkedList::removeTail()
{
    if (tail == nullptr)
    {
        std::cout << "List is empty! Nothing to remove!" << std::endl;
        return;
    }

    // Алгоритм тот же, что и для головы, только теперь для хвоста.
    Node *current = tail;
    if (_count == 1)
    {
        head = nullptr;
        tail = nullptr;
        delete current;
    }
    else
    {
        tail = current->pNext;
        tail->pPrev = nullptr;
        delete current;
    }
    --_count;
}

void DoublyLinkedList::remove(int index)
{
    if (isEmpty())
    {
        std::cout << "List is empty! Nothing to remove!" << std::endl;
        return;
    }

    if (index > _count - 1 || index < 0)
    {
        std::cout << "Index out of range" << std::endl;
        return;
    }

    // Особый случай, если удаляем первый элемент.
    if (index == 0)
    {
        removeTail();
    }
    // Особый случай, если удаляем последний элемент т.е голову списка.
    else if (index == _count - 1)
    {
        removeHead();
    }
    else
    {
        // Задаем переменную для работу с указателем.
        Node *current = tail;
        for (int i = 0; i != index; ++i)
        {
            current = current->pNext;
        }
        auto prev = current->pPrev;
        auto next = current->pNext;
        prev->pNext = next;
        delete current;
        --_count;
    }
}

void DoublyLinkedList::clear()
{
    if (isEmpty())
    {
        std::cout << "List is empty! Nothing to remove!" << std::endl;
        return;
    }

    // Создаем переменную для временного хранения следующего элемента.
    Node *tmpNext = tail;
    while (_count != 0)
    {
        // Записываем следующий элемент во временную переменную.
        tmpNext = tail->pNext;
        // Удаляем участок динамической памяти.
        delete tail;
        // Смещаем указатель хвоста на следующий элемент.
        tail = tmpNext;
        // Уменьшаем количество элемента в списке.
        --_count;
    }
    head = nullptr;
}

bool DoublyLinkedList::isEmpty()
{
    return head == nullptr;
}
