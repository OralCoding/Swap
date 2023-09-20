# Swap

`swap` 함수는 두 변수에 저장된 값을 서로 바꾸는 역할을 합니다. 쉽게 이해할 수 있게 설명하자면, 왼손과 오른손을 이용하여 두 개의 물건을 서로 바꾸는 것과 유사합니다.

1. **왼손에 있는 물건을 일시적으로 빈 주머니나 테이블에 두고,**
2. **오른손의 물건을 왼손으로 옮기고,**
3. **일시적으로 놓았던 왼손의 물건을 오른손으로 옮깁니다.**

이렇게 하면 두 물건의 위치가 바뀌게 됩니다.

### C++ 코드 예제

위 과정을 코드로 표현하면 다음과 같이 작성할 수 있습니다.

#### swap.h
```cpp
#pragma once

void swap(int& a, int& b);
```

#### swap.cpp
```cpp
#include "swap.h"

void swap(int& a, int& b) {
    int temp = a;  // 왼손의 물건을 일시적으로 빈 주머니에 넣는다.
    a = b;         // 오른손의 물건을 왼손으로 옮긴다.
    b = temp;      // 일시적으로 놓았던 왼손의 물건을 오른손으로 옮긴다.
}
```

#### main.cpp
```cpp
#include <iostream>
#include "swap.h"

int main() {
    int x = 5;
    int y = 10;
    
    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
    
    swap(x, y);
    
    std::cout << "After swap: x = " << x << ", y = " << y << std::endl;
    
    return 0;
}
```

이 코드를 실행하면 `x`와 `y`의 값이 서로 바뀌게 됩니다. 그러므로 처음에 `x=5`, `y=10`이었다면, `swap` 함수를 호출한 뒤에는 `x=10`, `y=5`가 됩니다.

이렇게 `swap` 함수는 매우 간단하면서도 자주 사용되는 유용한 함수입니다.
