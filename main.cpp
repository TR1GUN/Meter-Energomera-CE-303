#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <unordered_map>
#include "src/Typing.h"
#include "print.h"
#include <optional>


class GenerateValues{


public:
    GenerateValues(){

        print("CONSTRUCTOR");
    }
};


class Generator{

public:
    float generation_value_float(){
        return static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
    }
};


class GenerateValuesElConfig:Generator{
public:
    int cTime ;
    bool isPart;
    bool isOvfl;
    bool isSummer;
    std::optional<std::string> Serial;
    std::optional<std::string> Model;
    int IntervalPowerArrays = 30;
    bool DST;  //
    bool Clock;
    bool Tariff;
    bool Active;
    bool Reactive ;
    bool ActiveReverse;
    bool ReactiveReverse;
    float CurrentCoeff;
    float VoltageCoeff;
    float MeterConst;

    GenerateValuesElConfig(ElectricTyping::Config){
        GenerateValues();
        print("CONSTRUCTOR ElectricTyping");
    }
    GenerateValuesElConfig(){
        GenerateValues();
        print("CONSTRUCTOR");
    }

    void set_Model(std::string model){
        Model = Model;
    }
    std::optional<std::string> get_Model(){
        return Model;
    }

    void set_Serial_Number(std::string serial_number){
        Serial = serial_number;
    }
    std::optional<std::string> get_Serial_Number(){
        return Serial;
    }

    ElectricTyping::Config ElConfig(){
        ElectricTyping::Config El_Config;
        El_Config.cTime << this -> cTime ;
        El_Config.isPart << this -> isPart;
        El_Config.isOvfl <<this -> isOvfl;
        El_Config.isSummer <<  this ->isSummer;
//        El_Config.Serial << this Serial;
//        El_Config.Model = Model;
//        El_Config.IntervalPowerArrays << this -> IntervalPowerArrays;
//        El_Config.DST << this -> DST;
//        El_Config.Clock << Clock;
//        El_Config.Tariff << Tariff;
//        El_Config.Active << Active;
//        El_Config.Reactive << Reactive;
//        El_Config.ActiveReverse << ActiveReverse;
//        El_Config.ReactiveReverse << ReactiveReverse;
//        El_Config.CurrentCoeff << CurrentCoeff;
//        El_Config.VoltageCoeff << VoltageCoeff;
//        El_Config.MeterConst << MeterConst;
        return El_Config;
    }

protected:
    void GenerateValues(){
        if (!Serial || Serial->empty())
            Serial = generate_Serial();
        if (!Model || Model=="")
            Model = "TEST_MODEL";
        cTime = 30;
        IntervalPowerArrays = 30;
        isPart = true;
        isOvfl  = true;
        isSummer  = true;
        DST = true;
        Clock = true;
        Tariff = true;
        Active = true;
        Reactive  = true;
        ActiveReverse = true;
        ReactiveReverse = true;
        CurrentCoeff = generation_value_float();
        VoltageCoeff = generation_value_float();
        MeterConst = generation_value_float();

    }
    std::string generate_Serial()
    {
//        TODO Сделать нормальную генерацию серийника
        return "0000000000";
    }

};

int main()
{
    GenerateValuesElConfig lol ;

    ElectricTyping::Config values = lol.ElConfig();
    print(values.cTime);

}