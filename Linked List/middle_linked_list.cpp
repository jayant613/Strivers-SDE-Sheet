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

// APPROACH 2
class Solution
{
public:
    ListNode *getMiddle(ListNode *head)
    {

        if (head == NULL || head->next == NULL)
        {
            return head;
        }

        if (head->next->next == NULL)
        {
            return head->next;
        }

        ListNode *slow = head;
        ListNode *fast = head->next;

        while (fast != NULL)
        {
            fast = fast->next;
            if (fast != NULL)
            {
                fast = fast->next;
            }
            slow = slow->next;
        }
        return slow;
    }

    ListNode *middleNode(ListNode *head)
    {
        return getMiddle(head);
    }
};