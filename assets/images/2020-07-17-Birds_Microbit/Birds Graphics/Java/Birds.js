let increment = 0
let maxBird: number[] = []
let trigAcceleration = 0
let birdDirection: number[] = []
let stepBirdAngle: number[] = []
let birdPosition: number[] = []
let BirdMoveDelay = 0
function moveBirds() {
    Kitronik_Robotics_Board.servoWrite(Kitronik_Robotics_Board.Servos.Servo4, birdPosition[0])
    Kitronik_Robotics_Board.servoWrite(Kitronik_Robotics_Board.Servos.Servo5, birdPosition[1])
    Kitronik_Robotics_Board.servoWrite(Kitronik_Robotics_Board.Servos.Servo6, birdPosition[2])
    Kitronik_Robotics_Board.servoWrite(Kitronik_Robotics_Board.Servos.Servo7, birdPosition[3])
    Kitronik_Robotics_Board.servoWrite(Kitronik_Robotics_Board.Servos.Servo8, birdPosition[4])
    for (let index = 0; index <= 4; index++) {
        increment = stepBirdAngle[index] * birdDirection[index]
        birdPosition[index] = birdPosition[index] + increment
        if (birdPosition[index] < 0) {
            birdDirection[index] = -1 * birdDirection[index]
            birdPosition[index] = 0
        }
        if (birdPosition[index] > maxBird[index]) {
            birdDirection[index] = -1 * birdDirection[index]
            birdPosition[index] = maxBird[index]
        }
        basic.pause(BirdMoveDelay)
    }
}
function startTwitters2() {
    Kitronik_Robotics_Board.servoWrite(Kitronik_Robotics_Board.Servos.Servo1, 20)
    Kitronik_Robotics_Board.servoWrite(Kitronik_Robotics_Board.Servos.Servo2, 170)
    Kitronik_Robotics_Board.servoWrite(Kitronik_Robotics_Board.Servos.Servo3, 160)
}
Kitronik_Robotics_Board.allOff()
BirdMoveDelay = 5
stepBirdAngle = [1, 3, 2, 2, 5]
birdDirection = [-1, -1, -1, -1, -1]
birdPosition = [45, 70, 80, 60, 90]
maxBird = [80, 70, 90, 60, 90]
trigAcceleration = 1018
basic.forever(function () {
    led.enable(true)
    basic.showIcon(IconNames.Duck)
    if (input.acceleration(Dimension.Strength) <= trigAcceleration) {
        startTwitters2()
        for (let i = 0; i < 500; i++) {
            moveBirds()
        }
        Kitronik_Robotics_Board.allOff()
    }
    led.enable(false)
})

