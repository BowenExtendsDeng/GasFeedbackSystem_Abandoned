#include "service_servicefactory.h"

#include <torch/torch.h>
#include <iostream>
#include<memory>

int main(){
    torch::Tensor tensor = torch::eye(3);
    std::cout << tensor << std::endl;
}
