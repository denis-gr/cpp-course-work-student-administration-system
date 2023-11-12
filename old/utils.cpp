#include "struct.hpp"

StudentTList filterByGrades(StudentTList* list, int minGrade, int maxGrade) {
    StudentTList* pHead = nullptr;
    StudentTList* pTail = nullptr;
    
    while (list != nullptr) {
        bool withinRange = true;
        for (int i = 0; i < 5; ++i) {
            if (list->student.Marks[i] < minGrade || list->student.Marks[i] > maxGrade) {
                withinRange = false;
                break;
            }
        }
        if (withinRange) {
            // Создаем новый элемент списка для студента
            StudentTList* pTemp = new StudentTList;
            pTemp->student = list->student;
            pTemp->pnext = nullptr;
            if (pHead == nullptr) {
                pHead = pTemp;
                pTail = pTemp;
            } else {
                pTail->pnext = pTemp;
                pTail = pTemp;
            }
        }
        list = list->pnext;
    }

    // Возвращаем указатель на первый элемент нового отфильтрованного списка
    return *pHead;
}


StudentTList sortByFullName(StudentTList* list) {
    // Копируем изначальный список в вновь созданный список
    StudentTList* originalList = list;
    // Создаем временный список
    StudentTList* sortedList = nullptr;
    
    // Проходим по изначальному списку
    while (originalList != nullptr) {
        // Конкатенируем фамилию, имя и отчество
        std::string fullname = originalList->student.Surname + originalList->student.Name + originalList->student.Patronymic;
        // Создаем новый элемент в отсортированном списке
        StudentTList* newElement = new StudentTList;
        newElement->student = originalList->student;
        newElement->pnext = nullptr;

        // Если список пустой, делаем новый элемент головным
        if (sortedList == nullptr) {
            sortedList = newElement;
        } else {
            // Иначе добавляем новый элемент в отсортированный список с учетом конкатенации
            StudentTList* temp = sortedList;
            StudentTList* prev = nullptr;
            while (temp != nullptr && fullname > temp->student.Surname + temp->student.Name + temp->student.Patronymic) {
                prev = temp;
                temp = temp->pnext;
            }
            if (prev == nullptr) {
                newElement->pnext = sortedList;
                sortedList = newElement;
            } else {
                prev->pnext = newElement;
                newElement->pnext = temp;
            }
        }
        originalList = originalList->pnext;
    }
    return *sortedList;
}



