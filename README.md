# SmokePlease

## Abstract

The aim of this project is to assist people in quitting smoking. The suggested traditional approach is to gradually reduce the number of cigarettes consumed per day. While this method may have a modest impact on addiction, it's important to also consider reducing inhalations during each cigarette. Several scientific studies, including the one conducted by [Dinas et al.](https://www.sciencedirect.com/science/article/pii/S0167527311020316) (2013), have shown that increased heart rate correlates with a greater desire to smoke.

Building on this premise, the idea is to develop a device capable of monitoring heart rate. This device will signal when smoking is allowed and when it's necessary to wait: heart rate increases sharply after an inhalation, indicating the moment with a red LED; therefore, it will be necessary to wait for the heart rate to stabilize before taking another inhalation, a moment that will be indicated by a green LED.

The main goal is to limit the number of inhalations per cigarette, thus encouraging individuals to counteract the urge to smoke through inhalation management. This strategy, combined with an overall reduction in cigarette consumption, could significantly reduce the need to smoke.

### Future Works

It would be interesting to develop this device in the form of a bracelet, making it suitable for daily use. To implement the circuit, it would be sufficient to use an Arduino Micro, replace the potentiometer with a heart rate sensor, and add a battery for power.

## Instructions

1. Check the components: [/docs/Components.csv](https://raw.githubusercontent.com/robertovicario/SmokePlease/main/docs/Components.csv)

2. Follow the schematic: [/docs/Scheme.jpg](https://raw.githubusercontent.com/robertovicario/SmokePlease/main/docs/Scheme.jpg)

3. Try Smoke-Please on Tinkercad: [tinkercad.com/things/lsgOMdHbTs8-smokeplease](https://www.tinkercad.com/things/lsgOMdHbTs8-smoke-please)

> [!NOTE]
>
> This circuit employs a potentiometer to mimic the functionality of a heart rate sensor. The potentiometer's values fluctuate based on user inputs as an heart rate sensor.

## Preview

<tr>
    <td><img src="https://raw.githubusercontent.com/robertovicario/SmokePlease/main/docs/Circuit.png" alt="Circuit" width=512>></td>
    <td><img src="https://raw.githubusercontent.com/robertovicario/SmokePlease/main/docs/Scheme.jpg" alt="Scheme" width=512>></td>
</tr>
<tr>
    <td align="center">Circuit</td>
    <td align="center">Scheme</td>
</tr>

## License

This project is distributed under [Apache 2.0](https://opensource.org/license/apache-2-0). You can find the complete text of the license in the project repository.
