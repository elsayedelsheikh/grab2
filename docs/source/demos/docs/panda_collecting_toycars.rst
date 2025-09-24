Collecting toys with Franka Panda
#################################

In this demo, we will be using Franka Panda to clean up the playground after kids had missed up the place.

So Franka will look for the toycars using the camera fixed at the end-effector, `lookaround_demo` behavior, whenever a toycar is detected, panda will try to grasp it, lift it up and throw it in the toybox and continues untill there are no toys left on the ground.