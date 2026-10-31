#include <iostream>

#include "Manager.h"
#include "Worker.h"

int main() {
    Manager manager1 = Manager("Ferdynand", "Okrutnik", "100000000", "Problem Development",
        Date(13, 2, 2004), 1000, 2, "Underwhelming", 0.524);

    manager1.displayWorkerInfo();

    Worker worker1 = manager1.hireNewWorker("Felek", "Dankiewicz", "100000000",
        "Problem Development", Date(13, 2, 2005), 1000);

    worker1.displayWorkerInfo();
    manager1.displayWorkerInfo();

    return 0;
}
