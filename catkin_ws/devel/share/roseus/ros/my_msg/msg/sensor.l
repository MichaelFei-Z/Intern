;; Auto-generated. Do not edit!


(when (boundp 'my_msg::sensor)
  (if (not (find-package "MY_MSG"))
    (make-package "MY_MSG"))
  (shadow 'sensor (find-package "MY_MSG")))
(unless (find-package "MY_MSG::SENSOR")
  (make-package "MY_MSG::SENSOR"))

(in-package "ROS")
;;//! \htmlinclude sensor.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))


(defclass my_msg::sensor
  :super ros::object
  :slots (_ids _size _pose _id _xacc _yacc _zacc _temperture ))

(defmethod my_msg::sensor
  (:init
   (&key
    ((:ids __ids) (make-array 0 :initial-element 0 :element-type :integer))
    ((:size __size) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:pose __pose) (instance geometry_msgs::PoseWithCovarianceStamped :init))
    ((:id __id) 0)
    ((:xacc __xacc) 0.0)
    ((:yacc __yacc) 0.0)
    ((:zacc __zacc) 0.0)
    ((:temperture __temperture) 0.0)
    )
   (send-super :init)
   (setq _ids __ids)
   (setq _size __size)
   (setq _pose __pose)
   (setq _id (round __id))
   (setq _xacc (float __xacc))
   (setq _yacc (float __yacc))
   (setq _zacc (float __zacc))
   (setq _temperture (float __temperture))
   self)
  (:ids
   (&optional __ids)
   (if __ids (setq _ids __ids)) _ids)
  (:size
   (&optional __size)
   (if __size (setq _size __size)) _size)
  (:pose
   (&rest __pose)
   (if (keywordp (car __pose))
       (send* _pose __pose)
     (progn
       (if __pose (setq _pose (car __pose)))
       _pose)))
  (:id
   (&optional __id)
   (if __id (setq _id __id)) _id)
  (:xacc
   (&optional __xacc)
   (if __xacc (setq _xacc __xacc)) _xacc)
  (:yacc
   (&optional __yacc)
   (if __yacc (setq _yacc __yacc)) _yacc)
  (:zacc
   (&optional __zacc)
   (if __zacc (setq _zacc __zacc)) _zacc)
  (:temperture
   (&optional __temperture)
   (if __temperture (setq _temperture __temperture)) _temperture)
  (:serialization-length
   ()
   (+
    ;; int32[] _ids
    (* 4    (length _ids)) 4
    ;; float64[] _size
    (* 8    (length _size)) 4
    ;; geometry_msgs/PoseWithCovarianceStamped _pose
    (send _pose :serialization-length)
    ;; int8 _id
    1
    ;; float32 _xacc
    4
    ;; float32 _yacc
    4
    ;; float32 _zacc
    4
    ;; float32 _temperture
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32[] _ids
     (write-long (length _ids) s)
     (dotimes (i (length _ids))
       (write-long (elt _ids i) s)
       )
     ;; float64[] _size
     (write-long (length _size) s)
     (dotimes (i (length _size))
       (sys::poke (elt _size i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;; geometry_msgs/PoseWithCovarianceStamped _pose
       (send _pose :serialize s)
     ;; int8 _id
       (write-byte _id s)
     ;; float32 _xacc
       (sys::poke _xacc (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _yacc
       (sys::poke _yacc (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _zacc
       (sys::poke _zacc (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _temperture
       (sys::poke _temperture (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32[] _ids
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _ids (instantiate integer-vector n))
     (dotimes (i n)
     (setf (elt _ids i) (sys::peek buf ptr- :integer)) (incf ptr- 4)
     ))
   ;; float64[] _size
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _size (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _size i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     ))
   ;; geometry_msgs/PoseWithCovarianceStamped _pose
     (send _pose :deserialize buf ptr-) (incf ptr- (send _pose :serialization-length))
   ;; int8 _id
     (setq _id (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _id 127) (setq _id (- _id 256)))
   ;; float32 _xacc
     (setq _xacc (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _yacc
     (setq _yacc (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _zacc
     (setq _zacc (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _temperture
     (setq _temperture (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get my_msg::sensor :md5sum-) "1543a1d8184d5550cc7560e6b4c63a88")
(setf (get my_msg::sensor :datatype-) "my_msg/sensor")
(setf (get my_msg::sensor :definition-)
      "# Tag ID(s). If a standalone tag, this is a vector of size 1. If a tag bundle,
# this is a vector containing the IDs of each tag in the bundle.
int32[] ids

# Tag size(s). If a standalone tag, this is a vector of size 1. If a tag bundle,
# this is a vector containing the sizes of each tag in the bundle, in the same
# order as the IDs above.
float64[] size

# Pose in the camera frame, obtained from homography transform. If a standalone
# tag, the homography is from the four tag corners. If a tag bundle, the
# homography is from at least the four corners of one member tag and at most the
# four corners of all member tags.
geometry_msgs/PoseWithCovarianceStamped pose

int8 id
float32 xacc
float32 yacc
float32 zacc
float32 temperture
================================================================================
MSG: geometry_msgs/PoseWithCovarianceStamped
# This expresses an estimated pose with a reference coordinate frame and timestamp

Header header
PoseWithCovariance pose

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: geometry_msgs/PoseWithCovariance
# This represents a pose in free space with uncertainty.

Pose pose

# Row-major representation of the 6x6 covariance matrix
# The orientation parameters use a fixed-axis representation.
# In order, the parameters are:
# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)
float64[36] covariance

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

")



(provide :my_msg/sensor "1543a1d8184d5550cc7560e6b4c63a88")


