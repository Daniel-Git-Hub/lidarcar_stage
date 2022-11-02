define laser ranger
(
  sensor
  (
    range_max 6.5
    fov 58.0
    samples 640
  )
  # generic model properties
  color "black"
  size [ 0.06 0.15 0.03 ]
)

define diff_drive_robot position
(
  pose [ 0.0 0.0 0.0 0.0 ]

  odom_error [0.03 0.03 999999 999999 999999 0.02]
  velocity_bounds [-0.144 0.144 0 0 0 0 -171 171 ]
  size [ 0.25 0.16 0.40 ]
  origin [ 0.04 0.0 0.0 0.0 ]
  gui_nose 1
  color "red"

  # kinematics
  drive "diff"

  # spawn sensors
  laser(pose [ 0 0.0 -0.11 0.0 ])
)