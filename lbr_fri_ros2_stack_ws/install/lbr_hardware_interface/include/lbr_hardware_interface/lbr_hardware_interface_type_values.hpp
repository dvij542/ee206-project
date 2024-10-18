#ifndef LBR_HARDWARE_INTERFACE__LBR_HARDWARE_INTERFACE_TYPE_VALUES_HPP_
#define LBR_HARDWARE_INTERFACE__LBR_HARDWARE_INTERFACE_TYPE_VALUES_HPP_

// see
// https://github.com/ros-controls/ros2_control/blob/master/hardware_interface/include/hardware_interface/types/hardware_interface_type_values.hpp
namespace lbr_hardware_interface {
// additional LBR state interfaces, reference KUKA::FRI::LBRState
constexpr char HW_IF_SAMPLE_TIME[] = "sample_time";
constexpr char HW_IF_SESSION_STATE[] = "session_state";
constexpr char HW_IF_CONNECTION_QUALITY[] = "connection_quality";
constexpr char HW_IF_SAFETY_STATE[] = "safety_state";
constexpr char HW_IF_OPERATION_MODE[] = "operation_mode";
constexpr char HW_IF_DRIVE_STATE[] = "drive_state";
constexpr char HW_IF_CLIENT_COMMAND_MODE[] = "client_command_mode";
constexpr char HW_IF_OVERLAY_TYPE[] = "overlay_type";
constexpr char HW_IF_CONTROL_MODE[] = "control_mode";

constexpr char HW_IF_TIME_STAMP_SEC[] = "time_stamp_sec";
constexpr char HW_IF_TIME_STAMP_NANO_SEC[] = "time_stamp_nano_sec";

constexpr char HW_IF_COMMANDED_JOINT_POSITION[] = "commanded_joint_position";
constexpr char HW_IF_COMMANDED_TORQUE[] = "commanded_torque";

constexpr char HW_IF_EXTERNAL_TORQUE[] = "external_torque";

constexpr char HW_IF_IPO_JOINT_POSITION[] = "ipo_joint_position";
constexpr char HW_IF_TRACKING_PERFORMANCE[] = "tracking_performance";

// additional LBR command interfaces, reference KUKA::FRI::LBRCommand
constexpr char HW_IF_WRENCH[] = "wrench";
} // end of namespace lbr_hardware_interface
#endif // LBR_HARDWARE_INTERFACE__LBR_HARDWARE_INTERFACE_TYPE_VALUES_HPP_
