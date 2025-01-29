# DWM3001CDK适配进度

可用的SDK：

1.[qqice/Adafruit_nRF52_Arduino](https://github.com/qqice/Adafruit_nRF52_Arduino)

优点：

社区维护活跃

支持BLE

（理论上）支持NFC

支持从NRF52833的USB口通过DFU烧入程序

缺点：

需要额外刷入单独的bootloader

编写代码时需要打开串口，否则将无法从NRF52833的USB口烧入程序（如果您遇到了这个问题，可以清空flash后再次刷入一次bootloader即可恢复）

2.https://github.com/qqice/arduino-nRF5

优点：

无需刷入bootloader，开箱即用

理论上支持BLE，但需要额外刷入SoftDevice

缺点：

暂不支持从NRF52833的USB口通过DFU烧入程序

暂不支持NRF52833的USB串口功能，需要外接USB转TTL工具读取串口



| 功能 |   Adafruit_nRF52_Arduino支持状态   |     arduino-nRF5支持状态     |     代码示例      |
| :--: | :--------------------------------: | :--------------------------: | :---------------: |
| GPIO |                 ✅                  |              ✅               |     RGB_Blink     |
| UART |                 ✅                  |              ✅               | SerialPassthrough |
| I2C  |                 ✅                  |              ✅               | IMU_BasicReadings |
| SPI  |    ✅（使用外接SPI屏幕测试成功）    | ✅（使用外接SPI屏幕测试成功） |       暂无        |
| BLE  |    ✅（需使用adafruit版本的SDK）    |              ❓               |  任意一个BLE示例  |
| NFC  | ❓（手头没有NFC天线，暂时测不起来） |              ❓               |                   |

|    外设    | 协议 | 状态 |                              库                              |     代码示例      |
| :--------: | :--: | :--: | :----------------------------------------------------------: | :---------------: |
| LIS2DH12TR | I2C  |  ✅   | [SparkFun_LIS2DH12_Arduino_Library](https://github.com/sparkfun/SparkFun_LIS2DH12_Arduino_Library) | IMU_BasicReadings |
|   DW3110   | SPI  |  ❓   |                                                              |                   |

