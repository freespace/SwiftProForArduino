# Swift Pro Firmware (Base on Marlin https://www.marlinfw.org/)

<img align="top" width=175 src="buildroot/share/pixmaps/logo/SwiftPro.png" />

## Document & Support

Visit http://www.ufactory.cc/#/en/support/ for more details.

## License

Swift Pro Firmware is published under the [GPL license](/LICENSE) 

# Introduction

This fork of the uArm Swift Pro firmware is mostly for learning
purposes. My aim is to added comments to parts of the code I am
interested in to explain how it works to myself and possibly to others.

# Testing Notes

## Coordinate System

The coordinate system of the uArm Swift Pro is relative to the base of
the unit where the +X axis points out of the face on which uArm Swift
Pro is printed, opposite the power and USB connectors. The +Z axis is
upwards while the +Y axis points out of the face opposite the grove
connectors, consistent with a right handed coordinate system.

## Getting the Current Position

The position returned by G code `P2220` appears to be based on the last
values to `G0` and does not accurately reflect the actual position of
the end effector. To determine its actual value one must first execute
`P2200` to get the angle of each joint then pass the values to `M2221`.

## Angular Accuracy

The uArm Swift Pro has some pretty accurate rotational sensors, but
there is mechanical flex that reduces that accuracy. By gently applying
pressure to the end effector I am get around +/-0.3 degree of variation.

## Joint Names

The uArm Swift Pro has 4 joints. Starting from the base I call them the
base joint, the shoulder joint, the elbow joint and the wrist joint. The
first 3 joint angles are reported by `P2200`, in which B=base,
L=shoulder and R=elbow. 

## XY Limits

In software the X and Y maximum range is capped at 300
(`Marlin/Configuration.h`). Physically the end effector cannot get
within 100 mm of the origin, which is anchored at centre of the base
joint.
