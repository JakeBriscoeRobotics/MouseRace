# Mouse Race Arduino Code
Authors: **Jake Briscoe**, **Vadim Lyakhova**, **Rupert Hobson**, **Yusseni Furtado**, University of Bath

**Objective**
The objective of this project is to write the code required for keeping two hall effector probes in the centre of the vehicle to keep the car
aligned to the copper traced track as it drives. This should also affect motor speed to allow for turns and acceleration on straight sections.

**Plan**
Implement PID control to allow it to self correct. Use normalised values to ensure ratio between the two probes is conservedand isn't skewed
as the magnitude increases as the probes get closer to the copper trace during incline sections of track. Iteratively tweak PID values to optimise
for speed turns, and override PID on known straight sections of track to ensure competitive completion time.

