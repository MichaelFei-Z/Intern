// Auto-generated. Do not edit!

// (in-package my_msg.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let geometry_msgs = _finder('geometry_msgs');

//-----------------------------------------------------------

class sensor {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.ids = null;
      this.size = null;
      this.pose = null;
      this.id = null;
      this.xacc = null;
      this.yacc = null;
      this.zacc = null;
      this.temperture = null;
    }
    else {
      if (initObj.hasOwnProperty('ids')) {
        this.ids = initObj.ids
      }
      else {
        this.ids = [];
      }
      if (initObj.hasOwnProperty('size')) {
        this.size = initObj.size
      }
      else {
        this.size = [];
      }
      if (initObj.hasOwnProperty('pose')) {
        this.pose = initObj.pose
      }
      else {
        this.pose = new geometry_msgs.msg.PoseWithCovarianceStamped();
      }
      if (initObj.hasOwnProperty('id')) {
        this.id = initObj.id
      }
      else {
        this.id = 0;
      }
      if (initObj.hasOwnProperty('xacc')) {
        this.xacc = initObj.xacc
      }
      else {
        this.xacc = 0.0;
      }
      if (initObj.hasOwnProperty('yacc')) {
        this.yacc = initObj.yacc
      }
      else {
        this.yacc = 0.0;
      }
      if (initObj.hasOwnProperty('zacc')) {
        this.zacc = initObj.zacc
      }
      else {
        this.zacc = 0.0;
      }
      if (initObj.hasOwnProperty('temperture')) {
        this.temperture = initObj.temperture
      }
      else {
        this.temperture = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type sensor
    // Serialize message field [ids]
    bufferOffset = _arraySerializer.int32(obj.ids, buffer, bufferOffset, null);
    // Serialize message field [size]
    bufferOffset = _arraySerializer.float64(obj.size, buffer, bufferOffset, null);
    // Serialize message field [pose]
    bufferOffset = geometry_msgs.msg.PoseWithCovarianceStamped.serialize(obj.pose, buffer, bufferOffset);
    // Serialize message field [id]
    bufferOffset = _serializer.int8(obj.id, buffer, bufferOffset);
    // Serialize message field [xacc]
    bufferOffset = _serializer.float32(obj.xacc, buffer, bufferOffset);
    // Serialize message field [yacc]
    bufferOffset = _serializer.float32(obj.yacc, buffer, bufferOffset);
    // Serialize message field [zacc]
    bufferOffset = _serializer.float32(obj.zacc, buffer, bufferOffset);
    // Serialize message field [temperture]
    bufferOffset = _serializer.float32(obj.temperture, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type sensor
    let len;
    let data = new sensor(null);
    // Deserialize message field [ids]
    data.ids = _arrayDeserializer.int32(buffer, bufferOffset, null)
    // Deserialize message field [size]
    data.size = _arrayDeserializer.float64(buffer, bufferOffset, null)
    // Deserialize message field [pose]
    data.pose = geometry_msgs.msg.PoseWithCovarianceStamped.deserialize(buffer, bufferOffset);
    // Deserialize message field [id]
    data.id = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [xacc]
    data.xacc = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [yacc]
    data.yacc = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [zacc]
    data.zacc = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [temperture]
    data.temperture = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += 4 * object.ids.length;
    length += 8 * object.size.length;
    length += geometry_msgs.msg.PoseWithCovarianceStamped.getMessageSize(object.pose);
    return length + 25;
  }

  static datatype() {
    // Returns string type for a message object
    return 'my_msg/sensor';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '1543a1d8184d5550cc7560e6b4c63a88';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # Tag ID(s). If a standalone tag, this is a vector of size 1. If a tag bundle,
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
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new sensor(null);
    if (msg.ids !== undefined) {
      resolved.ids = msg.ids;
    }
    else {
      resolved.ids = []
    }

    if (msg.size !== undefined) {
      resolved.size = msg.size;
    }
    else {
      resolved.size = []
    }

    if (msg.pose !== undefined) {
      resolved.pose = geometry_msgs.msg.PoseWithCovarianceStamped.Resolve(msg.pose)
    }
    else {
      resolved.pose = new geometry_msgs.msg.PoseWithCovarianceStamped()
    }

    if (msg.id !== undefined) {
      resolved.id = msg.id;
    }
    else {
      resolved.id = 0
    }

    if (msg.xacc !== undefined) {
      resolved.xacc = msg.xacc;
    }
    else {
      resolved.xacc = 0.0
    }

    if (msg.yacc !== undefined) {
      resolved.yacc = msg.yacc;
    }
    else {
      resolved.yacc = 0.0
    }

    if (msg.zacc !== undefined) {
      resolved.zacc = msg.zacc;
    }
    else {
      resolved.zacc = 0.0
    }

    if (msg.temperture !== undefined) {
      resolved.temperture = msg.temperture;
    }
    else {
      resolved.temperture = 0.0
    }

    return resolved;
    }
};

module.exports = sensor;
