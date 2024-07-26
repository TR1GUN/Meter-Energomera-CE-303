//
// Created by TRIGUN-D on 26.07.2024.
//

#ifndef METER_TYPING_H
#define METER_TYPING_H
#include <string>
#endif //METER_TYPING_H

namespace ElectricTyping{
    struct Config{
    public:
        // Период интеграции
        int cTime ;
        //
        bool isPart;
        //
        bool isOvfl;
        // Переход на летнее-зимнее время
        bool isSummer;
        // Серийный номер
        std::string Serial;
        // Номер модели
        std::string Model;
        // Период интеграции
        int IntervalPowerArrays = 30;
        //
        bool DST;
        // Наличие часов
        bool Clock;
        // Наличие тарификатора
        bool Tariff;
        // Измерение A+ - Важно -измеряется всегда
        bool Active = true;
        // Измерение R+
        bool Reactive ;
        // Измерение A+
        bool ActiveReverse;
        // Измерение R-
        bool ReactiveReverse;
        // Кофиециент Силы тока
        float CurrentCoeff;
        // Кофиециент напряжения
        float VoltageCoeff;
        // Постоянная счетчика
        float MeterConst;
    };
}


struct MomentQuality
{
    float UA;
    float UB;
    float UC;
    //
    float IA;
    float IB;
    float IC;
    //
    float PS;
    float PA;
    float PB;
    float PC;
    //
    float QS;
    float QA;
    float QB;
    float QC;
    //
    float kPS;
    float kPA;
    float kPB;
    float kPC;
    //
    float SS;
    float SA;
    float SB;
    float SC;
    //
    float AngAB;
    float AngBC;
    float AngAC;
    //
    float Freq;
};

struct Arr1ConsPower
{
public:
    int Pp;
    int Qp;
    int Pm;
    int Qm;

};

struct EnergyValue
{
public:
    double Ap;
    double Rp;
    double Am;
    double Rm;

};

struct Energy{
    EnergyValue value;
    int tariff;
};

