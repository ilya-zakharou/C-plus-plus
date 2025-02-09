
/*two sum таблица хэширования*/
/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;  // Создаём хеш-таблицу (словарь), где ключ – число, а значение – его индекс.

        for (int i = 0; i < nums.size(); i++) {  // Перебираем массив nums
            int numToFind = target - nums[i];  // Ищем число, которое в сумме с nums[i] даёт target

            if (numMap.find(numToFind) != numMap.end()) {  // Проверяем, есть ли это число в хеш-таблице
                return { numMap[numToFind], i };  // Если есть, возвращаем индексы найденной пары
            }

            numMap[nums[i]] = i;  // Добавляем текущее число и его индекс в хеш-таблицу
        }

        return {};  // Сюда программа никогда не дойдёт, так как по условию всегда есть решение
    }
};*/