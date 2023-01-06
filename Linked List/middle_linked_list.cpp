// APPROACH 1
class Solution
{
public:
    int getLength(ListNode *head)
    {
        int len = 0;
        while (head != NULL)
        {
            len++;
            head = head->next;
        }
        return len;
    }

    ListNode *middleNode(ListNode *head)
    {
        int len = getLength(head);
        int ans = (len / 2);

        ListNode *temp = head;
        int cnt = 0;
        while (cnt < ans)
        {
            temp = temp->next;
            cnt++;
        }
        return temp;
    }
};

class Solution
{
public:
    int getLength(ListNode *head)
    {
        int len = 0;
        while (head != NULL)
        {
            len++;
            head = head->next;
        }
        return len;
    }

    ListNode *middleNode(ListNode *head)
    {
        int len = getLength(head);
        int ans = (len / 2);

        ListNode *temp = head;
        int cnt = 0;
        while (cnt < ans)
        {
            temp = temp->next;
            cnt++;
        }
        return temp;
    }
};