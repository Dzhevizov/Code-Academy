/*Опишете времето в структура: часове:минути:секунди като структура tagTMyTime.
Използвайки тази структура, дефинирайте следните функции: добавяне на секунди,
добавяне на минути. Добавяне на часове към дадена променлива от тип struct
tagTMyTime. Напишете следните функции: връщане на броя секунди за дадена
променлива от въведения тип и обратна функция от секундите да се генерира
променлива tagTMyTime. Напишете две функции, които изваждат и събират две
променливи от тип struct tagMyTime и връщат променлива от същия тип.
Използвайте тези функции, за да се уверите, че работят коректно.*/

#include <stdio.h>

struct tagTMyTime {
    int hours;
    int minutes;
    int seconds;
};

int addseconds(struct tagTMyTime* pTime, int s){
    return pTime->seconds + s;
}

int addminutes(struct tagTMyTime* pTime, int m){
    return pTime->minutes + m;
}

int addhours(struct tagTMyTime* pTime, int h){
    return pTime->hours + h;
}

int numSeconds(struct tagTMyTime* pTime){
    int numSeconds = pTime->hours * 3600 + pTime->minutes * 60 + pTime->seconds;
    return numSeconds;
}

struct tagTMyTime timeConvert(int seconds){
    struct tagTMyTime my_time;
    my_time.hours = seconds / 3600;
    seconds = seconds % 3600;
    my_time.minutes = seconds / 60;
    my_time.seconds = seconds % 60;
    return my_time;
}

struct tagTMyTime addTime (struct tagTMyTime* p1Time, struct tagTMyTime* p2Time){
    struct tagTMyTime addedTime;
    addedTime.hours = p1Time->hours + p2Time->hours;
    addedTime.minutes = p1Time->minutes + p2Time->minutes;
    addedTime.seconds = p1Time->seconds + p2Time->seconds;

    if (addedTime.seconds >= 60){
        addedTime.minutes += addedTime.seconds / 60;
        addedTime.seconds = addedTime.seconds % 60;
    }

    if (addedTime.minutes >= 60){
        addedTime.hours += addedTime.minutes / 60;
        addedTime.minutes = addedTime.minutes % 60;
    }
    return addedTime;
}

struct tagTMyTime takeTime (struct tagTMyTime* p1Time, struct tagTMyTime* p2Time){
    struct tagTMyTime takenTime;
    takenTime.hours = p1Time->hours - p2Time->hours;
    takenTime.minutes = p1Time->minutes - p2Time->minutes;
    takenTime.seconds = p1Time->seconds - p2Time->seconds;
    if (takenTime.seconds >= 60){
        takenTime.minutes += takenTime.seconds / 60;
        takenTime.seconds = takenTime.seconds % 60;
    }

    if (takenTime.minutes >= 60){
        takenTime.hours += takenTime.minutes / 60;
        takenTime.minutes = takenTime.minutes % 60;
    }

    if (takenTime.minutes < 0){
        takenTime.hours--;
        takenTime.minutes += 60;
    }

    if (takenTime.seconds < 0){
        takenTime.minutes--;
        takenTime.seconds += 60;
    }
    return takenTime;
}

int main(){
    struct tagTMyTime time1 = {5,20,30};
    struct tagTMyTime time2 = {2,30,15};
    int n = 5;
    int s = 5000;

    printf("Addseconds: %d:%d:%d\n", time1.hours, time1.minutes, addseconds(&time1, n));

    printf("Addminutes: %d:%d:%d\n", time1.hours, addminutes(&time1, n), time1.seconds);

    printf("Addhours: %d:%d:%d\n", addhours(&time1, n), time1.minutes, time1.seconds);

    printf("Numseconds: %d\n", numSeconds(&time1));

    printf("Converted seconds in time: %d:%d:%d\n", timeConvert(s));

    printf("Addtime: %d:%d:%d\n", addTime(&time1, &time2));

    printf("Taketime: %d:%d:%d\n", takeTime(&time1, &time2));

    return 0;
}
