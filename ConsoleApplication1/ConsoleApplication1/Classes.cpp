
/*two sum ������� �����������*/
/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;  // ������ ���-������� (�������), ��� ���� � �����, � �������� � ��� ������.

        for (int i = 0; i < nums.size(); i++) {  // ���������� ������ nums
            int numToFind = target - nums[i];  // ���� �����, ������� � ����� � nums[i] ��� target

            if (numMap.find(numToFind) != numMap.end()) {  // ���������, ���� �� ��� ����� � ���-�������
                return { numMap[numToFind], i };  // ���� ����, ���������� ������� ��������� ����
            }

            numMap[nums[i]] = i;  // ��������� ������� ����� � ��� ������ � ���-�������
        }

        return {};  // ���� ��������� ������� �� �����, ��� ��� �� ������� ������ ���� �������
    }
};*/