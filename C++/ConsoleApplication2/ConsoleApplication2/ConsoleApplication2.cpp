#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Airplane {
private:
    string model;
    double wingspan; // в метрах
    double maxAltitude; // в метрах

public:
    Airplane(string model, double wingspan, double maxAltitude)
        : model(model), wingspan(wingspan), maxAltitude(maxAltitude) {}

    void display() const {
        cout << "Модель: " << model << ", Размах крыла: " << wingspan
            << " м, Максимальная высота: " << maxAltitude << " м" << endl;
    }

    void fly() const {
        cout << model << " взлетает!" << endl;
    }

    void land() const {
        cout << model << " приземляется!" << endl;
    }

    void cruise() const {
        cout << model << " находится в горизонтальном полете!" << endl;
    }
};

class Helicopter {
private:
    string model;
    double rotorDiameter; // в метрах
    double maxSpeed; // в км/ч

public:
    Helicopter(string model, double rotorDiameter, double maxSpeed)
        : model(model), rotorDiameter(rotorDiameter), maxSpeed(maxSpeed) {}

    void display() const {
        cout << "Модель: " << model << ", Диаметр ротора: " << rotorDiameter
            << " м, Максимальная скорость: " << maxSpeed << " км/ч" << endl;
    }

    void takeOff() const {
        cout << model << " поднимается в воздух!" << endl;
    }

    void hover() const {
        cout << model << " зависает на месте!" << endl;
    }

    void land() const {
        cout << model << " приземляется!" << endl;
    }
};

class Rocket {
private:
    string model;
    double thrust; // в кН
    int stages; // количество ступеней

public:
    Rocket(string model, double thrust, int stages)
        : model(model), thrust(thrust), stages(stages) {}

    void display() const {
        cout << "Модель: " << model << ", Тяга: " << thrust
            << " кН, Количество ступеней: " << stages << endl;
    }

    void launch() const {
        cout << model << " запускается!" << endl;
    }

    void separateStage() const {
        cout << model << " отсоединяет ступень!" << endl;
    }

    void orbit() const {
        cout << model << " находится на орбите!" << endl;
    }
};

class Satellite {
private:
    string name;
    double weight; // в кг
    string purpose;

public:
    Satellite(string name, double weight, string purpose)
        : name(name), weight(weight), purpose(purpose) {}

    void display() const {
        cout << "Название: " << name << ", Вес: " << weight
            << " кг, Назначение: " << purpose << endl;
    }

    void transmitData() const {
        cout << name << " передает данные!" << endl;
    }

    void rotate() const {
        cout << name << " вращается вокруг Земли!" << endl;
    }

    void deploySolarPanels() const {
        cout << name << " развертывает солнечные панели!" << endl;
    }
};

class Drone {
private:
    string model;
    double batteryLife; // в минутах
    double payloadCapacity; // в кг

public:
    Drone(string model, double batteryLife, double payloadCapacity)
        : model(model), batteryLife(batteryLife), payloadCapacity(payloadCapacity) {}

    void display() const {
        cout << "Модель: " << model << ", Время работы: " << batteryLife
            << " мин, Грузоподъемность: " << payloadCapacity << " кг" << endl;
    }

    void takeOff() const {
        cout << model << " взлетает!" << endl;
    }

    void land() const {
        cout << model << " приземляется!" << endl;
    }

    void deliverPackage() const {
        cout << model << " доставляет пакет!" << endl;
    }
};

int main() {
    setlocale(LC_ALL, "rus");
    // Создание однотипных объектов
    vector<Airplane> airplanes = {
        {"Boeing 737", 35.9, 12000},
        {"Airbus A320", 34.1, 11500},
        {"Cessna 172", 11.0, 4000},
        {"Lockheed Martin F-22", 13.6, 20000},
        {"Embraer E195", 28.0, 12000},
        {"Bombardier CRJ900", 26.0, 13000},
        {"McDonnell Douglas MD-88", 28.3, 11000}
    };

    vector<Helicopter> helicopters = {
        {"Bell 206", 10.7, 240},
        {"Eurocopter AS350", 11.0, 230},
        {"Sikorsky S-76", 14.6, 260},
        {"Boeing CH-47 Chinook", 18.3, 150},
        {"Mil Mi-8", 19.5, 250},
        {"Robinson R44", 10.2, 200},
        {"Airbus H125", 10.9, 240}
    };

    vector<Rocket> rockets = {
        {"Falcon 9", 7600, 2},
        {"Atlas V", 6000, 2},
        {"Soyuz", 3000, 3},
        {"Delta IV", 7000, 2},
        {"Ariane 5", 12000, 2},
        {"SpaceX Starship", 2200, 2},
        {"Antares", 3300, 2}
    };

    vector<Satellite> satellites = {
        {"Hubble", 11100, "Астрономия"},
        {"GPS IIA", 800, "Навигация"},
        {"GOES", 3500, "Метеорология"},
        {"Landsat 8", 2700, "Землеустройство"},
        {"TESS", 1000, "Астрономия"},
        {"Beidou", 1200, "Навигация"},
        {"Intelsat 29e", 6500, "Связь"}
    };

    vector<Drone> drones = {
        {"DJI Phantom", 27.0, 1.5},
        {"Parrot Anafi", 25.0, 0.5},
        {"Autel Robotics EVO", 30.0, 1.0},
        {"DJI Mavic Air", 21.0, 0.6},
        {"Yuneec Typhoon H", 25.0, 1.6},
        {"Skydio 2", 23.0, 2.0},
        {"DJI Matrice 600", 40.0, 6.0}
    };

    // Демонстрация объектов
    cout << "Самолеты:\n";
    for (const auto& airplane : airplanes) {
        airplane.display();
        airplane.fly();
        airplane.cruise();
        airplane.land();
    }

    cout << "\nВертолеты:\n";
    for (const auto& helicopter : helicopters) {
        helicopter.display();
        helicopter.takeOff();
        helicopter.hover();
        helicopter.land();
    }

    cout << "\nРакеты:\n";
    for (const auto& rocket : rockets) {
        rocket.display();
        rocket.launch();
        rocket.separateStage();
        rocket.orbit();
    }

    cout << "\nСпутники:\n";
    for (const auto& satellite : satellites) {
        satellite.display();
        satellite.transmitData();
        satellite.rotate();
        satellite.deploySolarPanels();
    }

    cout << "\nДроны:\n";
    for (const auto& drone : drones) {
        drone.display();
        drone.takeOff();
        drone.deliverPackage();
        drone.land();
    }

    return 0;
}
