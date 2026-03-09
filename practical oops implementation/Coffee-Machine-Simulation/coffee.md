# Coffee Machine Simulation

## Objective
Simulate a coffee machine using C++ classes and OOP principles.

## Concepts Used
- Classes and Objects
- Private and Public members
- Encapsulation
- Constructors
- Member Functions
- Conditional Logic

## Class Design
Class: CoffeeMachine

**Private Members**
- `waterLevel` → current water in machine
- `coffeeBeans` → current coffee beans
- `cashCollected` → money collected

**Public Functions**
- `getCash()` → check current cash
- `addWater(int amount)` → refill water
- `addBeans(int amount)` → refill beans
- `dispenseEspresso(double payment)` → dispense coffee if conditions are met

## Espresso Logic
- Requires 30 ml water and 15 g beans
- Costs $2.50
- Updates cashCollected after successful dispensing

## Learning Outcome
- Modeling a real-world system as a class
- Resource management inside a class
- Using encapsulation and conditional checks
