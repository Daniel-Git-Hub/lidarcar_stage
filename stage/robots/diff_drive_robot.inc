define laser ranger
(
  sensor
  (
    range_max 11
    fov 359.5
    samples 360
  )
  # generic model properties
  color "black"
  size [ 0.06 0.15 0.03 ]
)

define diff_drive_robot position
(
  pose [ 0.0 0.0 0.0 0.0 ]

  odom_error [0.03 0.03 999999 999999 999999 0.02]
  velocity_bounds [-0.288 0.288 0 0 0 0 -171 171 ]
  size [ 0.25 0.16 0.10 ] # this models the footprint (rectangular), but shifted such that the bottom-left corner is in [0,0]. The center of rotation now here at [0.3, 0.125, 0.2]

  origin [ 0.04 0.0 0.0 0.0 ]
  gui_nose 1
  color "red"

  # kinematics
  drive "diff"

  # spawn sensors
  laser(pose [ 0.0 0.0 0.15 0.0 ])
)
